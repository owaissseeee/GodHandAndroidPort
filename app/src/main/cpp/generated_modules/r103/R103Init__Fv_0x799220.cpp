#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r103_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r103
{
// Function: R103Init__Fv
// Address: 0x799220 - 0x7992d0
void R103Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R103Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799238u: goto label_799238;
        case 0x79924cu: goto label_79924c;
        case 0x79928cu: goto label_79928c;
        case 0x7992bcu: goto label_7992bc;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
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
    // 0x799234: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799238u;
label_799238:
    // 0x799238: 0x8e04d6e8  lw          $a0, -0x2918($s0)
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
    // 0x79923c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799240: 0xac62a600  sw          $v0, -0x5A00($v1)
    ctx->pc = 0x799240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x79A600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A600u, _value); } while (0);
    // 0x799244: 0xc04fccc  jal         func_13F330
    ctx->pc = 0x799244u;
    SET_GPR_U32(ctx, 31, 0x79924Cu);
    ctx->pc = 0x799248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799244u;
    // 0x799248: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x799244u, 0x79924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79924Cu;
label_79924c:
    // 0x79924c: 0x8e04d6e8  lw          $a0, -0x2918($s0)
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
    // 0x799250: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x799254: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x799258: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x79925c: 0x8c821f20  lw          $v0, 0x1F20($a0)
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7968)));
    // 0x799260: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799264: 0xac821f20  sw          $v0, 0x1F20($a0)
    ctx->pc = 0x799264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7968), GPR_U32(ctx, 2));
    // 0x799268: 0x8ca38658  lw          $v1, -0x79A8($a1)
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936152)));
    // 0x79926c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799270: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x799270u;
    {
        const bool branch_taken_0x799270 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799270u;
        // 0x799274: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799270) {
            ctx->pc = 0x799294u;
            goto label_799294;
        }
    }
    ctx->pc = 0x799278u;
    // 0x799278: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79927c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799280: 0x24a595b8  addiu       $a1, $a1, -0x6A48
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940088));
    // 0x799284: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799284u;
    SET_GPR_U32(ctx, 31, 0x79928Cu);
    ctx->pc = 0x799288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799284u;
    // 0x799288: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799284u, 0x79928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79928Cu;
label_79928c:
    // 0x79928c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79928Cu;
    {
        const bool branch_taken_0x79928c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79928Cu;
        // 0x799290: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79928c) {
            ctx->pc = 0x7992C0u;
            goto label_7992c0;
        }
    }
    ctx->pc = 0x799294u;
label_799294:
    // 0x799294: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x799298: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79929c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79929Cu;
    {
        const bool branch_taken_0x79929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79929Cu;
        // 0x7992a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79929c) {
            ctx->pc = 0x7992C0u;
            goto label_7992c0;
        }
    }
    ctx->pc = 0x7992A4u;
    // 0x7992a4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7992a8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992ac: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7992b0: 0x24a596f0  addiu       $a1, $a1, -0x6910
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940400));
    // 0x7992b4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992B4u;
    SET_GPR_U32(ctx, 31, 0x7992BCu);
    ctx->pc = 0x7992B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B4u;
    // 0x7992b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992B4u, 0x7992BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992BCu;
label_7992bc:
    // 0x7992bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7992c0:
    // 0x7992c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7992C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C4u;
        // 0x7992c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992CCu;
    // 0x7992cc: 0x0  nop
    ctx->pc = 0x7992ccu;
    // NOP
    ctx->pc = 0x7992d0u;
}
} // namespace gh_r103
