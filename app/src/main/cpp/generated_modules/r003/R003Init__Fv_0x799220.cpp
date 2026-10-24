#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r003_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r003
{
// Function: R003Init__Fv
// Address: 0x799220 - 0x7992a8
void R003Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R003Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799238u: goto label_799238;
        case 0x799294u: goto label_799294;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79922c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799230: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799230u;
    SET_GPR_U32(ctx, 31, 0x799238u);
    ctx->pc = 0x799234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799230u;
    // 0x799234: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799238u;
label_799238:
    // 0x799238: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x79923c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79923cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799240: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799244: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x799248: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79924c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79924cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799250: 0xae029c00  sw          $v0, -0x6400($s0)
    ctx->pc = 0x799250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941696), GPR_U32(ctx, 2));
    // 0x799254: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x799258: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x799258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79925c: 0x8c836b28  lw          $v1, 0x6B28($a0)
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B28u));
    // 0x799260: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x799260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x799264: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799268: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x799268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x79926c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79926Cu;
    {
        const bool branch_taken_0x79926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79926Cu;
        // 0x799270: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79926c) {
            ctx->pc = 0x799294u;
            goto label_799294;
        }
    }
    ctx->pc = 0x799274u;
    // 0x799274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799278: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799278u;
    {
        const bool branch_taken_0x799278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799278u;
        // 0x79927c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799278) {
            ctx->pc = 0x799294u;
            goto label_799294;
        }
    }
    ctx->pc = 0x799280u;
    // 0x799280: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799284: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799288: 0x24a592c8  addiu       $a1, $a1, -0x6D38
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939336));
    // 0x79928c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79928Cu;
    SET_GPR_U32(ctx, 31, 0x799294u);
    ctx->pc = 0x799290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79928Cu;
    // 0x799290: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79928Cu, 0x799294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799294u;
label_799294:
    // 0x799294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79929c: 0x3e00008  jr          $ra
    ctx->pc = 0x79929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79929Cu;
        // 0x7992a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79929Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992A4u;
    // 0x7992a4: 0x0  nop
    ctx->pc = 0x7992a4u;
    // NOP
    ctx->pc = 0x7992a8u;
}
} // namespace gh_r003
