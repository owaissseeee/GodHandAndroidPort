#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_00799780
// Address: 0x799780 - 0x799818
void func_00799780_0x799780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799780_0x799780");
#endif

    switch (ctx->pc) {
        case 0x7997ccu: goto label_7997cc;
        case 0x799804u: goto label_799804;
        default: break;
    }

    ctx->pc = 0x799780u;

    // 0x799780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799784: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79978c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x799790: 0x3c110400  lui         $s1, 0x400
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1024 << 16));
    // 0x799794: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799798: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x799798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x79979c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79979Cu;
    {
        const bool branch_taken_0x79979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79979c) {
            ctx->pc = 0x799804u;
            goto label_799804;
        }
    }
    ctx->pc = 0x7997A4u;
    // 0x7997a4: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x7997a8: 0x8e068658  lw          $a2, -0x79A8($s0)
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7997ac: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7997b0: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x7997B0u;
    {
        const bool branch_taken_0x7997b0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7997B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B0u;
        // 0x7997b4: 0x26048658  addiu       $a0, $s0, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b0) {
            ctx->pc = 0x799804u;
            goto label_799804;
        }
    }
    ctx->pc = 0x7997B8u;
    // 0x7997b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x7997bc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7997c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x7997c4: 0xc0afbfa  jal         func_2BEFE8
    ctx->pc = 0x7997C4u;
    SET_GPR_U32(ctx, 31, 0x7997CCu);
    ctx->pc = 0x7997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C4u;
    // 0x7997c8: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEFE8u, 0x7997C4u, 0x7997CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997CCu;
label_7997cc:
    // 0x7997cc: 0x8e058658  lw          $a1, -0x79A8($s0)
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
    // 0x7997d0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x7997d4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x7997d8: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7997dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7997DCu;
    {
        const bool branch_taken_0x7997dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997dc) {
            ctx->pc = 0x799808u;
            goto label_799808;
        }
    }
    ctx->pc = 0x7997E4u;
    // 0x7997e4: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x7997e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x7997e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7997E8u;
    {
        const bool branch_taken_0x7997e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e8) {
            ctx->pc = 0x79980Cu;
            goto label_79980c;
        }
    }
    ctx->pc = 0x7997F0u;
    // 0x7997f0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x7997f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7997f4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7997f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7997f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7997fc: 0xc07efba  jal         func_1FBEE8
    ctx->pc = 0x7997FCu;
    SET_GPR_U32(ctx, 31, 0x799804u);
    ctx->pc = 0x799800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997FCu;
    // 0x799800: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE8u, 0x7997FCu, 0x799804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799804u;
label_799804:
    // 0x799804: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799808:
    // 0x799808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79980c:
    // 0x79980c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799810: 0x3e00008  jr          $ra
    ctx->pc = 0x799810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799818u;
}
} // namespace gh_r102
