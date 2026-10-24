#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079A8C0
// Address: 0x79a8c0 - 0x79a9b8
void func_0079A8C0_0x79a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A8C0_0x79a8c0");
#endif

    switch (ctx->pc) {
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a908u: goto label_79a908;
        case 0x79a914u: goto label_79a914;
        case 0x79a934u: goto label_79a934;
        case 0x79a940u: goto label_79a940;
        case 0x79a948u: goto label_79a948;
        case 0x79a954u: goto label_79a954;
        case 0x79a994u: goto label_79a994;
        case 0x79a9a0u: goto label_79a9a0;
        default: break;
    }

    ctx->pc = 0x79a8c0u;

    // 0x79a8c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a8c4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a8c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a8cc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a8d0: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a8d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a8dc: 0x24a5c080  addiu       $a1, $a1, -0x3F80
    ctx->pc = 0x79a8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951040));
    // 0x79a8e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79a8e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a8ec: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A8ECu;
    SET_GPR_U32(ctx, 31, 0x79A8F4u);
    ctx->pc = 0x79A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8ECu;
    // 0x79a8f0: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A8ECu, 0x79A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8F4u;
label_79a8f4:
    // 0x79a8f4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a8f8: 0x8c83c800  lw          $v1, -0x3800($a0)
    ctx->pc = 0x79a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79C800u));
    // 0x79a8fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A8FCu;
    {
        const bool branch_taken_0x79a8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8FCu;
        // 0x79a900: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8fc) {
            ctx->pc = 0x79A918u;
            goto label_79a918;
        }
    }
    ctx->pc = 0x79A904u;
    // 0x79a904: 0x0  nop
    ctx->pc = 0x79a904u;
    // NOP
label_79a908:
    // 0x79a908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a90c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A90Cu;
    SET_GPR_U32(ctx, 31, 0x79A914u);
    ctx->pc = 0x79A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A90Cu;
    // 0x79a910: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A90Cu, 0x79A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A914u;
label_79a914:
    // 0x79a914: 0x8e23c800  lw          $v1, -0x3800($s1)
    ctx->pc = 0x79a914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a918:
    // 0x79a918: 0x9c620020  lwu         $v0, 0x20($v1)
    ctx->pc = 0x79a918u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x79a91c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a920: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A920u;
    {
        const bool branch_taken_0x79a920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A920u;
        // 0x79a924: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a920) {
            ctx->pc = 0x79A908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a908;
        }
    }
    ctx->pc = 0x79A928u;
    // 0x79a928: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a92c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A92Cu;
    SET_GPR_U32(ctx, 31, 0x79A934u);
    ctx->pc = 0x79A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A92Cu;
    // 0x79a930: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A92Cu, 0x79A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A934u;
label_79a934:
    // 0x79a934: 0x8e24c800  lw          $a0, -0x3800($s1)
    ctx->pc = 0x79a934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
    // 0x79a938: 0xc1e66be  jal         func_799AF8
    ctx->pc = 0x79A938u;
    SET_GPR_U32(ctx, 31, 0x79A940u);
    ctx->pc = 0x79A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A938u;
    // 0x79a93c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799AF8u, 0x79A938u, 0x79A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A940u;
label_79a940:
    // 0x79a940: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A940u;
    {
        const bool branch_taken_0x79a940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A940u;
        // 0x79a944: 0x8e23c800  lw          $v1, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a940) {
            ctx->pc = 0x79A958u;
            goto label_79a958;
        }
    }
    ctx->pc = 0x79A948u;
label_79a948:
    // 0x79a948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a94c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A94Cu;
    SET_GPR_U32(ctx, 31, 0x79A954u);
    ctx->pc = 0x79A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A94Cu;
    // 0x79a950: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A94Cu, 0x79A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A954u;
label_79a954:
    // 0x79a954: 0x8e23c800  lw          $v1, -0x3800($s1)
    ctx->pc = 0x79a954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79a958:
    // 0x79a958: 0x9c620020  lwu         $v0, 0x20($v1)
    ctx->pc = 0x79a958u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x79a95c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x79a95cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x79a960: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a964: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79A964u;
    {
        const bool branch_taken_0x79a964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A964u;
        // 0x79a968: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a964) {
            ctx->pc = 0x79A948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a948;
        }
    }
    ctx->pc = 0x79A96Cu;
    // 0x79a96c: 0x8e437a78  lw          $v1, 0x7A78($s2)
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31352)));
    // 0x79a970: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x79a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x79a974: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a978: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a97c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a980: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a984: 0xae437a78  sw          $v1, 0x7A78($s2)
    ctx->pc = 0x79a984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31352), GPR_U32(ctx, 3));
    // 0x79a988: 0x24a5a9b8  addiu       $a1, $a1, -0x5648
    ctx->pc = 0x79a988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945208));
    // 0x79a98c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A98Cu;
    SET_GPR_U32(ctx, 31, 0x79A994u);
    ctx->pc = 0x79A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A98Cu;
    // 0x79a990: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A98Cu, 0x79A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A994u;
label_79a994:
    // 0x79a994: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79a994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a998: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A998u;
    SET_GPR_U32(ctx, 31, 0x79A9A0u);
    ctx->pc = 0x79A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A998u;
    // 0x79a99c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A998u, 0x79A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9A0u;
label_79a9a0:
    // 0x79a9a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a9a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a9a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79a9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a9ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9B0u;
        // 0x79a9b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A9B8u;
}
} // namespace gh_r040
