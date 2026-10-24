#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079C040
// Address: 0x79c040 - 0x79c128
void func_0079C040_0x79c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C040_0x79c040");
#endif

    switch (ctx->pc) {
        case 0x79c074u: goto label_79c074;
        case 0x79c080u: goto label_79c080;
        case 0x79c08cu: goto label_79c08c;
        case 0x79c09cu: goto label_79c09c;
        case 0x79c0b4u: goto label_79c0b4;
        case 0x79c0d8u: goto label_79c0d8;
        case 0x79c0ecu: goto label_79c0ec;
        case 0x79c0f8u: goto label_79c0f8;
        case 0x79c104u: goto label_79c104;
        case 0x79c110u: goto label_79c110;
        default: break;
    }

    ctx->pc = 0x79c040u;

    // 0x79c040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79c044: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79c048: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x79c048u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x79c04c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79c04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79c050: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79c050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79c054: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79c054u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79c058: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79c058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79c05c: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79C05Cu;
    {
        const bool branch_taken_0x79c05c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C05Cu;
        // 0x79c060: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c05c) {
            ctx->pc = 0x79C104u;
            goto label_79c104;
        }
    }
    ctx->pc = 0x79C064u;
    // 0x79c064: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79c064u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79c068: 0x2610c900  addiu       $s0, $s0, -0x3700
    ctx->pc = 0x79c068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953216));
    // 0x79c06c: 0xc1e6496  jal         func_799258
    ctx->pc = 0x79C06Cu;
    SET_GPR_U32(ctx, 31, 0x79C074u);
    ctx->pc = 0x79C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C06Cu;
    // 0x79c070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799258u, 0x79C06Cu, 0x79C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C074u;
label_79c074:
    // 0x79c074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c078: 0xc1e6500  jal         func_799400
    ctx->pc = 0x79C078u;
    SET_GPR_U32(ctx, 31, 0x79C080u);
    ctx->pc = 0x79C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C078u;
    // 0x79c07c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799400u, 0x79C078u, 0x79C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C080u;
label_79c080:
    // 0x79c080: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79c080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79c084: 0xc07db4e  jal         func_1F6D38
    ctx->pc = 0x79C084u;
    SET_GPR_U32(ctx, 31, 0x79C08Cu);
    ctx->pc = 0x79C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C084u;
    // 0x79c088: 0x24848240  addiu       $a0, $a0, -0x7DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6D38u, 0x79C084u, 0x79C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C08Cu;
label_79c08c:
    // 0x79c08c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79c090: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x79c090u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x79c094: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x79C094u;
    SET_GPR_U32(ctx, 31, 0x79C09Cu);
    ctx->pc = 0x79C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C094u;
    // 0x79c098: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x79C094u, 0x79C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C09Cu;
label_79c09c:
    // 0x79c09c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c0a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c0a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x79c0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c0a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0ac: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x79C0ACu;
    SET_GPR_U32(ctx, 31, 0x79C0B4u);
    ctx->pc = 0x79C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C0ACu;
    // 0x79c0b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x79C0ACu, 0x79C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C0B4u;
label_79c0b4:
    // 0x79c0b4: 0x8e237a8c  lw          $v1, 0x7A8C($s1)
    ctx->pc = 0x79c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
    // 0x79c0b8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79c0bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79c0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79c0c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c0c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79c0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79c0c8: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x79c0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x79c0cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0d0: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x79C0D0u;
    SET_GPR_U32(ctx, 31, 0x79C0D8u);
    ctx->pc = 0x79C0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C0D0u;
    // 0x79c0d4: 0xae237a8c  sw          $v1, 0x7A8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79C0D0u, 0x79C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C0D8u;
label_79c0d8:
    // 0x79c0d8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79c0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79c0dc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79c0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79c0e0: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79c0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79c0e4: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x79C0E4u;
    SET_GPR_U32(ctx, 31, 0x79C0ECu);
    ctx->pc = 0x79C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C0E4u;
    // 0x79c0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x79C0E4u, 0x79C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C0ECu;
label_79c0ec:
    // 0x79c0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0f0: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79C0F0u;
    SET_GPR_U32(ctx, 31, 0x79C0F8u);
    ctx->pc = 0x79C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C0F0u;
    // 0x79c0f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79C0F0u, 0x79C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C0F8u;
label_79c0f8:
    // 0x79c0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0fc: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79C0FCu;
    SET_GPR_U32(ctx, 31, 0x79C104u);
    ctx->pc = 0x79C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C0FCu;
    // 0x79c100: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79C0FCu, 0x79C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C104u;
label_79c104:
    // 0x79c104: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c108: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C108u;
    SET_GPR_U32(ctx, 31, 0x79C110u);
    ctx->pc = 0x79C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C108u;
    // 0x79c10c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C108u, 0x79C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C110u;
label_79c110:
    // 0x79c110: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79c110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c114: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79c114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79c118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c11c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79c11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c120: 0x3e00008  jr          $ra
    ctx->pc = 0x79C120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C120u;
        // 0x79c124: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C128u;
}
} // namespace gh_r000
