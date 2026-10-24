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

// Function: _ch3dmaCSC
// Address: 0x39bff8 - 0x39c140
void _ch3dmaCSC_0x39bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ch3dmaCSC_0x39bff8");
#endif

    ctx->pc = 0x39bff8u;

    // 0x39bff8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39bffc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c000: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x39c000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x39c004: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x39c004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c008: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39c008u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3));
    // 0x39c00c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39c010: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x39c010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x39c014: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x39c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39c018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39c018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39c01c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x39c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x39c020: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39c020u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x39c024: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39C024u;
    {
        const bool branch_taken_0x39c024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C024u;
        // 0x39c028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c024) {
            ctx->pc = 0x39C044u;
            goto label_39c044;
        }
    }
    ctx->pc = 0x39C02Cu;
    // 0x39c02c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39c030: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x39c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x39c034: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39c034u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x39c038: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x39c038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x39c03c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39C03Cu;
    {
        const bool branch_taken_0x39c03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C03Cu;
        // 0x39c040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c03c) {
            ctx->pc = 0x39C058u;
            goto label_39c058;
        }
    }
    ctx->pc = 0x39C044u;
label_39c044:
    // 0x39c044: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x39c044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x39c048: 0xf  sync
    ctx->pc = 0x39c048u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x39c04c: 0x42000038  ei
    ctx->pc = 0x39c04cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x39c050: 0x3e00008  jr          $ra
    ctx->pc = 0x39C050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C050u;
        // 0x39c054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C058u;
label_39c058:
    // 0x39c058: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x39c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x39c05c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x39c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39c060: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39c064: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39c064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39c068: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x39C068u;
    {
        const bool branch_taken_0x39c068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C068u;
        // 0x39c06c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c068) {
            ctx->pc = 0x39C0CCu;
            goto label_39c0cc;
        }
    }
    ctx->pc = 0x39C070u;
    // 0x39c070: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x39c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x39c074: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x39c074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x39c078: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x39c078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x39c07c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x39c080: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x39c080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x39c084: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x39c084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x39c088: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x39c088u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4));
    // 0x39c08c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39c090: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x39c090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x39c094: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x39c094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x39c098: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x39c098u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5));
    // 0x39c09c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x39c09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x39c0a0: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x39c0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x39c0a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x39c0a4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
    // 0x39c0a8: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x39c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x39c0ac: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x39c0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x39c0b0: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x39c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x39c0b4: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x39c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x39c0b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x39c0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x39c0bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39c0c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39c0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x39c0c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x39C0C4u;
    {
        const bool branch_taken_0x39c0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0C4u;
        // 0x39c0c8: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0c4) {
            ctx->pc = 0x39C130u;
            goto label_39c130;
        }
    }
    ctx->pc = 0x39C0CCu;
label_39c0cc:
    // 0x39c0cc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x39c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39c0d0: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x39C0D0u;
    {
        const bool branch_taken_0x39c0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0D0u;
        // 0x39c0d4: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0d0) {
            ctx->pc = 0x39C130u;
            goto label_39c130;
        }
    }
    ctx->pc = 0x39C0D8u;
    // 0x39c0d8: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x39c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39c0dc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39c0e0: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x39c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x39c0e4: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x39c0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x39c0e8: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x39c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x39c0ec: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x39c0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x39c0f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x39c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39c0f4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x39c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39c0f8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39c0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39c0fc: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x39c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x39c100: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x39c100u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x39c104: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x39c104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x39c108: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x39c108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x39c10c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x39c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x39c110: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x39c110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x39c114: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x39c114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x39c118: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x39c118u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2));
    // 0x39c11c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x39c11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x39c120: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x39c120u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 8));
    // 0x39c124: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x39c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x39c128: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x39c128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x39c12c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x39c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_39c130:
    // 0x39c130: 0xf  sync
    ctx->pc = 0x39c130u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x39c134: 0x42000038  ei
    ctx->pc = 0x39c134u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x39c138: 0x3e00008  jr          $ra
    ctx->pc = 0x39C138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C138u;
        // 0x39c13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C140u;
}
