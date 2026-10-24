#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r005_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r005
{
// Function: R005Init__Fv
// Address: 0x799220 - 0x7992c0
void R005Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R005Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799244u: goto label_799244;
        case 0x799250u: goto label_799250;
        case 0x799260u: goto label_799260;
        case 0x799274u: goto label_799274;
        case 0x799294u: goto label_799294;
        case 0x79929cu: goto label_79929c;
        case 0x7992a4u: goto label_7992a4;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799224: 0x24040a90  addiu       $a0, $zero, 0xA90
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2704));
    // 0x799228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799234: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79923c: 0xc1e6460  jal         func_799180
    ctx->pc = 0x79923Cu;
    SET_GPR_U32(ctx, 31, 0x799244u);
    ctx->pc = 0x799240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79923Cu;
    // 0x799240: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79923Cu, 0x799244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799244u;
label_799244:
    // 0x799244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799248: 0xc0791cc  jal         func_1E4730
    ctx->pc = 0x799248u;
    SET_GPR_U32(ctx, 31, 0x799250u);
    ctx->pc = 0x79924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799248u;
    // 0x79924c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4730u, 0x799248u, 0x799250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799250u;
label_799250:
    // 0x799250: 0x8e24d6e8  lw          $a0, -0x2918($s1)
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    // 0x799254: 0xae509e80  sw          $s0, -0x6180($s2)
    ctx->pc = 0x799254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294942336), GPR_U32(ctx, 16));
    // 0x799258: 0xc04f906  jal         func_13E418
    ctx->pc = 0x799258u;
    SET_GPR_U32(ctx, 31, 0x799260u);
    ctx->pc = 0x79925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799258u;
    // 0x79925c: 0x24841910  addiu       $a0, $a0, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E418u, 0x799258u, 0x799260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799260u;
label_799260:
    // 0x799260: 0x8e22d6e8  lw          $v0, -0x2918($s1)
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    // 0x799264: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799268: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x79926c: 0xc07f0f4  jal         func_1FC3D0
    ctx->pc = 0x79926Cu;
    SET_GPR_U32(ctx, 31, 0x799274u);
    ctx->pc = 0x799270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79926Cu;
    // 0x799270: 0xac401a10  sw          $zero, 0x1A10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 6672), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x79926Cu, 0x799274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799274u;
label_799274:
    // 0x799274: 0x8e23d6e8  lw          $v1, -0x2918($s1)
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    // 0x799278: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x79927c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x799280: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799288: 0xac621a10  sw          $v0, 0x1A10($v1)
    ctx->pc = 0x799288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6672), GPR_U32(ctx, 2));
    // 0x79928c: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79928Cu;
    SET_GPR_U32(ctx, 31, 0x799294u);
    ctx->pc = 0x799290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79928Cu;
    // 0x799290: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79928Cu, 0x799294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799294u;
label_799294:
    // 0x799294: 0xc1e6626  jal         func_799898
    ctx->pc = 0x799294u;
    SET_GPR_U32(ctx, 31, 0x79929Cu);
    ctx->pc = 0x799898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799898u, 0x799294u, 0x79929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79929Cu;
label_79929c:
    // 0x79929c: 0xc1e64c4  jal         func_799310
    ctx->pc = 0x79929Cu;
    SET_GPR_U32(ctx, 31, 0x7992A4u);
    ctx->pc = 0x799310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799310u, 0x79929Cu, 0x7992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A4u;
label_7992a4:
    // 0x7992a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7992a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7992a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7992a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7992ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7992acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7992B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B4u;
        // 0x7992b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992BCu;
    // 0x7992bc: 0x0  nop
    ctx->pc = 0x7992bcu;
    // NOP
    ctx->pc = 0x7992c0u;
}
} // namespace gh_r005
