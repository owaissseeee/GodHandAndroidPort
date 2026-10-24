#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_003BB058
// Address: 0x3bb058 - 0x3bb178
void func_003BB058_0x3bb058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BB058_0x3bb058");
#endif

    switch (ctx->pc) {
        case 0x3bb090u: goto label_3bb090;
        case 0x3bb0c0u: goto label_3bb0c0;
        case 0x3bb0d0u: goto label_3bb0d0;
        case 0x3bb10cu: goto label_3bb10c;
        case 0x3bb144u: goto label_3bb144;
        default: break;
    }

    ctx->pc = 0x3bb058u;

    // 0x3bb058: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bb058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bb05c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bb05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bb060: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3bb060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3bb064: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x3bb064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3bb068: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3bb068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3bb06c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bb06cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bb070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bb074: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3bb074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3bb078: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3bb078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bb07c: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x3bb07cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3bb080: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3BB080u;
    {
        const bool branch_taken_0x3bb080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB080u;
        // 0x3bb084: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb080) {
            ctx->pc = 0x3BB0ACu;
            goto label_3bb0ac;
        }
    }
    ctx->pc = 0x3BB088u;
    // 0x3bb088: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x3bb088u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3bb08c: 0x0  nop
    ctx->pc = 0x3bb08cu;
    // NOP
label_3bb090:
    // 0x3bb090: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x3bb090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3bb094: 0x0  nop
    ctx->pc = 0x3bb094u;
    // NOP
    // 0x3bb098: 0x0  nop
    ctx->pc = 0x3bb098u;
    // NOP
    // 0x3bb09c: 0x0  nop
    ctx->pc = 0x3bb09cu;
    // NOP
    // 0x3bb0a0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BB0A0u;
    {
        const bool branch_taken_0x3bb0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb0a0) {
            ctx->pc = 0x3BB0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB0A0u;
            // 0x3bb0a4: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb090;
        }
    }
    ctx->pc = 0x3BB0A8u;
    // 0x3bb0a8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3bb0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3bb0ac:
    // 0x3bb0ac: 0x2e020081  sltiu       $v0, $s0, 0x81
    ctx->pc = 0x3bb0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3bb0b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB0B0u;
    {
        const bool branch_taken_0x3bb0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0B0u;
        // 0x3bb0b4: 0x26250017  addiu       $a1, $s1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb0b0) {
            ctx->pc = 0x3BB0D8u;
            goto label_3bb0d8;
        }
    }
    ctx->pc = 0x3BB0B8u;
    // 0x3bb0b8: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x3BB0B8u;
    SET_GPR_U32(ctx, 31, 0x3BB0C0u);
    ctx->pc = 0x3BB0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB0B8u;
    // 0x3bb0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x3BB0B8u, 0x3BB0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB0C0u;
label_3bb0c0:
    // 0x3bb0c0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3BB0C0u;
    {
        const bool branch_taken_0x3bb0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb0c0) {
            ctx->pc = 0x3BB0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB0C0u;
            // 0x3bb0c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB11Cu;
            goto label_3bb11c;
        }
    }
    ctx->pc = 0x3BB0C8u;
    // 0x3bb0c8: 0xc0c75ba  jal         func_31D6E8
    ctx->pc = 0x3BB0C8u;
    SET_GPR_U32(ctx, 31, 0x3BB0D0u);
    ctx->pc = 0x3BB0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB0C8u;
    // 0x3bb0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D6E8u, 0x3BB0C8u, 0x3BB0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB0D0u;
label_3bb0d0:
    // 0x3bb0d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3BB0D0u;
    {
        const bool branch_taken_0x3bb0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0D0u;
        // 0x3bb0d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb0d0) {
            ctx->pc = 0x3BB11Cu;
            goto label_3bb11c;
        }
    }
    ctx->pc = 0x3BB0D8u;
label_3bb0d8:
    // 0x3bb0d8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3bb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3bb0dc: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x3bb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x3bb0e0: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x3bb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x3bb0e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb0e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bb0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bb0ec: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3bb0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bb0f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3bb0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bb0f4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB0F4u;
    {
        const bool branch_taken_0x3bb0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb0f4) {
            ctx->pc = 0x3BB0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB0F4u;
            // 0x3bb0f8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB114u;
            goto label_3bb114;
        }
    }
    ctx->pc = 0x3BB0FCu;
    // 0x3bb0fc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3bb0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3bb100: 0x3484fff8  ori         $a0, $a0, 0xFFF8
    ctx->pc = 0x3bb100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65528);
    // 0x3bb104: 0xc0c764a  jal         func_31D928
    ctx->pc = 0x3BB104u;
    SET_GPR_U32(ctx, 31, 0x3BB10Cu);
    ctx->pc = 0x3BB108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB104u;
    // 0x3bb108: 0xa42024  and         $a0, $a1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D928u, 0x3BB104u, 0x3BB10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB10Cu;
label_3bb10c:
    // 0x3bb10c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB10Cu;
    {
        const bool branch_taken_0x3bb10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB10Cu;
        // 0x3bb110: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb10c) {
            ctx->pc = 0x3BB11Cu;
            goto label_3bb11c;
        }
    }
    ctx->pc = 0x3BB114u;
label_3bb114:
    // 0x3bb114: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3bb114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb118: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3bb118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3bb11c:
    // 0x3bb11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb120: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3bb120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3bb124: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3bb124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3bb128: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3bb128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3bb12c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3bb12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3bb130: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3bb130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3bb134: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB134u;
    {
        const bool branch_taken_0x3bb134 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB134u;
        // 0x3bb138: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb134) {
            ctx->pc = 0x3BB144u;
            goto label_3bb144;
        }
    }
    ctx->pc = 0x3BB13Cu;
    // 0x3bb13c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3BB13Cu;
    SET_GPR_U32(ctx, 31, 0x3BB144u);
    ctx->pc = 0x3BB140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB13Cu;
    // 0x3bb140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3BB13Cu, 0x3BB144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB144u;
label_3bb144:
    // 0x3bb144: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3bb144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3bb148: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3bb148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb14c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bb14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb150: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bb150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bb154: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3bb154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bb158: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3bb158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bb15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb160: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB160u;
        // 0x3bb164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB168u;
    // 0x3bb168: 0x0  nop
    ctx->pc = 0x3bb168u;
    // NOP
    // 0x3bb16c: 0x0  nop
    ctx->pc = 0x3bb16cu;
    // NOP
    // 0x3bb170: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3bb170u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3BB170 raw=0x00000001");
    // 0x3bb174: 0x0  nop
    ctx->pc = 0x3bb174u;
    // NOP
    ctx->pc = 0x3bb178u;
}
