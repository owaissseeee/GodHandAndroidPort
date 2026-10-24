#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: initPlay__13cEventMessage
// Address: 0x7b0180 - 0x7b0228
void initPlay__13cEventMessage_0x7b0180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__13cEventMessage_0x7b0180");
#endif

    switch (ctx->pc) {
        case 0x7b01b8u: goto label_7b01b8;
        case 0x7b01e0u: goto label_7b01e0;
        case 0x7b020cu: goto label_7b020c;
        default: break;
    }

    ctx->pc = 0x7b0180u;

    // 0x7b0180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b0180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7b0184: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7b0184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7b0188: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7b0188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7b018c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x7b018cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x7b0190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7b0190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7b0194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7b0194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b019c: 0x24716af0  addiu       $s1, $v1, 0x6AF0
    ctx->pc = 0x7b019cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 27376));
    // 0x7b01a0: 0x8c466b30  lw          $a2, 0x6B30($v0)
    ctx->pc = 0x7b01a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x586B30u));
    // 0x7b01a4: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x7b01a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x7b01a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7b01a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b01ac: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x7b01acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7b01b0: 0xc1ecfe8  jal         func_7B3FA0
    ctx->pc = 0x7B01B0u;
    SET_GPR_U32(ctx, 31, 0x7B01B8u);
    ctx->pc = 0x7B01B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B01B0u;
    // 0x7b01b4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3FA0u, 0x7B01B0u, 0x7B01B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B01B8u;
label_7b01b8:
    // 0x7b01b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x7B01B8u;
    {
        const bool branch_taken_0x7b01b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B01B8u;
        // 0x7b01bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b01b8) {
            ctx->pc = 0x7B01C4u;
            goto label_7b01c4;
        }
    }
    ctx->pc = 0x7B01C0u;
    // 0x7b01c0: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x7b01c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_7b01c4:
    // 0x7b01c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x7b01c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x7b01c8: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x7b01c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b01cc: 0x54710001  bnel        $v1, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x7B01CCu;
    {
        const bool branch_taken_0x7b01cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x7b01cc) {
            ctx->pc = 0x7B01D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B01CCu;
            // 0x7b01d0: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B01D4u;
            goto label_7b01d4;
        }
    }
    ctx->pc = 0x7B01D4u;
label_7b01d4:
    // 0x7b01d4: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b01d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b01d8: 0xc1ebafa  jal         func_7AEBE8
    ctx->pc = 0x7B01D8u;
    SET_GPR_U32(ctx, 31, 0x7B01E0u);
    ctx->pc = 0x7B01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B01D8u;
    // 0x7b01dc: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEBE8u, 0x7B01D8u, 0x7B01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B01E0u;
label_7b01e0:
    // 0x7b01e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7B01E0u;
    {
        const bool branch_taken_0x7b01e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b01e0) {
            ctx->pc = 0x7B01E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B01E0u;
            // 0x7b01e4: 0xa6110000  sh          $s1, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B01E8u;
            goto label_7b01e8;
        }
    }
    ctx->pc = 0x7B01E8u;
label_7b01e8:
    // 0x7b01e8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x7b01e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b01ec: 0x10510008  beq         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B01ECu;
    {
        const bool branch_taken_0x7b01ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x7B01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B01ECu;
        // 0x7b01f0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b01ec) {
            ctx->pc = 0x7B0210u;
            goto label_7b0210;
        }
    }
    ctx->pc = 0x7B01F4u;
    // 0x7b01f4: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b01f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b01f8: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x7b01f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    // 0x7b01fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7b01fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0200: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b0200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0204: 0xc0abada  jal         func_2AEB68
    ctx->pc = 0x7B0204u;
    SET_GPR_U32(ctx, 31, 0x7B020Cu);
    ctx->pc = 0x7B0208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0204u;
    // 0x7b0208: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB68u, 0x7B0204u, 0x7B020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B020Cu;
label_7b020c:
    // 0x7b020c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x7b020cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_7b0210:
    // 0x7b0210: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7b0210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b0214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7b0214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b0218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b021c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B021Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B021Cu;
        // 0x7b0220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B021Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0224u;
    // 0x7b0224: 0x0  nop
    ctx->pc = 0x7b0224u;
    // NOP
    ctx->pc = 0x7b0228u;
}
} // namespace gh_event
