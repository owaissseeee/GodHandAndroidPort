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

// Function: func_001236E8
// Address: 0x1236e8 - 0x123908
void func_001236E8_0x1236e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001236E8_0x1236e8");
#endif

    switch (ctx->pc) {
        case 0x123730u: goto label_123730;
        case 0x1237b8u: goto label_1237b8;
        case 0x1237e0u: goto label_1237e0;
        default: break;
    }

    ctx->pc = 0x1236e8u;

    // 0x1236e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1236e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1236ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1236ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1236f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1236f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1236f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1236f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236f8: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x1236f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x1236fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1236fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x123700: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x123700u;
    {
        const bool branch_taken_0x123700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123700) {
            ctx->pc = 0x123704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123700u;
            // 0x123704: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123728u;
            goto label_123728;
        }
    }
    ctx->pc = 0x123708u;
    // 0x123708: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x123708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x12370c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12370cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x123710: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x123710u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x123714: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x123718: 0x8e050284  lw          $a1, 0x284($s0)
    ctx->pc = 0x123718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x12371c: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x12371cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x123720: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x123720u;
    {
        const bool branch_taken_0x123720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123720u;
        // 0x123724: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123720) {
            ctx->pc = 0x1237ACu;
            goto label_1237ac;
        }
    }
    ctx->pc = 0x123728u;
label_123728:
    // 0x123728: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x123728u;
    SET_GPR_U32(ctx, 31, 0x123730u);
    ctx->pc = 0x12372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123728u;
    // 0x12372c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x123728u, 0x123730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123730u;
label_123730:
    // 0x123730: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x123730u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123734: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x123734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x123738: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123738u;
    {
        const bool branch_taken_0x123738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123738u;
        // 0x12373c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123738) {
            ctx->pc = 0x123758u;
            goto label_123758;
        }
    }
    ctx->pc = 0x123740u;
    // 0x123740: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x123744: 0x2442c810  addiu       $v0, $v0, -0x37F0
    ctx->pc = 0x123744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952976));
    // 0x123748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x123748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12374c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12374cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123750: 0x800008  jr          $a0
    ctx->pc = 0x123750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123758u: goto label_123758;
            case 0x12378Cu: goto label_12378c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123750u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x123758u;
label_123758:
    // 0x123758: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x123758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x12375c: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x123760: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x123760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x123764: 0x8e041550  lw          $a0, 0x1550($s0)
    ctx->pc = 0x123764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5456)));
    // 0x123768: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x123768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12376c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12376Cu;
    {
        const bool branch_taken_0x12376c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x123770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12376Cu;
        // 0x123770: 0xae030254  sw          $v1, 0x254($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12376c) {
            ctx->pc = 0x1237D0u;
            goto label_1237d0;
        }
    }
    ctx->pc = 0x123774u;
    // 0x123774: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x123774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x123778: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x123778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12377c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x12377cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x123780: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x123780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x123784: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x123784u;
    {
        const bool branch_taken_0x123784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123784u;
        // 0x123788: 0xac830380  sw          $v1, 0x380($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123784) {
            ctx->pc = 0x1237D0u;
            goto label_1237d0;
        }
    }
    ctx->pc = 0x12378Cu;
label_12378c:
    // 0x12378c: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x12378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x123790: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x123790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x123794: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x123794u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x123798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12379c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1237a0: 0x8e050284  lw          $a1, 0x284($s0)
    ctx->pc = 0x1237a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x1237a4: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x1237a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x1237a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1237a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1237ac:
    // 0x1237ac: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x1237acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1237b0: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x1237B0u;
    SET_GPR_U32(ctx, 31, 0x1237B8u);
    ctx->pc = 0x1237B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237B0u;
    // 0x1237b4: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x1237B0u, 0x1237B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237B8u;
label_1237b8:
    // 0x1237b8: 0x8e031550  lw          $v1, 0x1550($s0)
    ctx->pc = 0x1237b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5456)));
    // 0x1237bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1237BCu;
    {
        const bool branch_taken_0x1237bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237BCu;
        // 0x1237c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237bc) {
            ctx->pc = 0x1237D4u;
            goto label_1237d4;
        }
    }
    ctx->pc = 0x1237C4u;
    // 0x1237c4: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x1237c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x1237c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1237c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1237cc: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x1237ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_1237d0:
    // 0x1237d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1237d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1237d4:
    // 0x1237d4: 0x26051564  addiu       $a1, $s0, 0x1564
    ctx->pc = 0x1237d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5476));
    // 0x1237d8: 0x26041554  addiu       $a0, $s0, 0x1554
    ctx->pc = 0x1237d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5460));
    // 0x1237dc: 0x0  nop
    ctx->pc = 0x1237dcu;
    // NOP
label_1237e0:
    // 0x1237e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1237e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1237e4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1237E4u;
    {
        const bool branch_taken_0x1237e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1237e4) {
            ctx->pc = 0x1237E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1237E4u;
            // 0x1237e8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1237FCu;
            goto label_1237fc;
        }
    }
    ctx->pc = 0x1237ECu;
    // 0x1237ec: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x1237ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x1237f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1237f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1237f4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x1237f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x1237f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1237f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1237fc:
    // 0x1237fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1237FCu;
    {
        const bool branch_taken_0x1237fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237FCu;
        // 0x123800: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237fc) {
            ctx->pc = 0x123810u;
            goto label_123810;
        }
    }
    ctx->pc = 0x123804u;
    // 0x123804: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x123804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x123808: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12380c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x12380cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_123810:
    // 0x123810: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x123810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x123814: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x123814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x123818: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x123818u;
    {
        const bool branch_taken_0x123818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123818u;
        // 0x12381c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123818) {
            ctx->pc = 0x1237E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1237e0;
        }
    }
    ctx->pc = 0x123820u;
    // 0x123820: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x123820u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x123824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x123824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12382c: 0x30644000  andi        $a0, $v1, 0x4000
    ctx->pc = 0x12382cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x123830: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x123830u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x123834: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x123834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x123838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12383c: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x12383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x123840: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x123840u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x123844: 0x5085000a  beql        $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x123844u;
    {
        const bool branch_taken_0x123844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x123844) {
            ctx->pc = 0x123848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123844u;
            // 0x123848: 0x8e041558  lw          $a0, 0x1558($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123870u;
            goto label_123870;
        }
    }
    ctx->pc = 0x12384Cu;
    // 0x12384c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12384Cu;
    {
        const bool branch_taken_0x12384c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x123850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12384Cu;
        // 0x123850: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12384c) {
            ctx->pc = 0x123864u;
            goto label_123864;
        }
    }
    ctx->pc = 0x123854u;
    // 0x123854: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123854u;
    {
        const bool branch_taken_0x123854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x123858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123854u;
        // 0x123858: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123854) {
            ctx->pc = 0x12386Cu;
            goto label_12386c;
        }
    }
    ctx->pc = 0x12385Cu;
    // 0x12385c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12385Cu;
    {
        const bool branch_taken_0x12385c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12385c) {
            ctx->pc = 0x123860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12385Cu;
            // 0x123860: 0x8e041560  lw          $a0, 0x1560($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123870u;
            goto label_123870;
        }
    }
    ctx->pc = 0x123864u;
label_123864:
    // 0x123864: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123864u;
    {
        const bool branch_taken_0x123864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123864u;
        // 0x123868: 0x8e041554  lw          $a0, 0x1554($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123864) {
            ctx->pc = 0x123870u;
            goto label_123870;
        }
    }
    ctx->pc = 0x12386Cu;
label_12386c:
    // 0x12386c: 0x8e04155c  lw          $a0, 0x155C($s0)
    ctx->pc = 0x12386cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5468)));
label_123870:
    // 0x123870: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x123870u;
    {
        const bool branch_taken_0x123870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x123870) {
            ctx->pc = 0x123874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123870u;
            // 0x123874: 0x960303ac  lhu         $v1, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123890u;
            goto label_123890;
        }
    }
    ctx->pc = 0x123878u;
    // 0x123878: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x123878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x12387c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x123880: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x123880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x123884: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x123884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x123888: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x123888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x12388c: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x12388cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_123890:
    // 0x123890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x123890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123898: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x123898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x12389c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x12389cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1238a0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1238a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1238a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1238a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238a8: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x1238a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1238ac: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1238acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1238b0: 0x5085000a  beql        $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1238B0u;
    {
        const bool branch_taken_0x1238b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1238b0) {
            ctx->pc = 0x1238B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1238B0u;
            // 0x1238b4: 0x8e041568  lw          $a0, 0x1568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1238DCu;
            goto label_1238dc;
        }
    }
    ctx->pc = 0x1238B8u;
    // 0x1238b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1238B8u;
    {
        const bool branch_taken_0x1238b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238B8u;
        // 0x1238bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238b8) {
            ctx->pc = 0x1238D0u;
            goto label_1238d0;
        }
    }
    ctx->pc = 0x1238C0u;
    // 0x1238c0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1238C0u;
    {
        const bool branch_taken_0x1238c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1238C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238C0u;
        // 0x1238c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238c0) {
            ctx->pc = 0x1238D8u;
            goto label_1238d8;
        }
    }
    ctx->pc = 0x1238C8u;
    // 0x1238c8: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1238C8u;
    {
        const bool branch_taken_0x1238c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1238c8) {
            ctx->pc = 0x1238CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1238C8u;
            // 0x1238cc: 0x8e041570  lw          $a0, 0x1570($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1238DCu;
            goto label_1238dc;
        }
    }
    ctx->pc = 0x1238D0u;
label_1238d0:
    // 0x1238d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1238D0u;
    {
        const bool branch_taken_0x1238d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238D0u;
        // 0x1238d4: 0x8e041564  lw          $a0, 0x1564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238d0) {
            ctx->pc = 0x1238DCu;
            goto label_1238dc;
        }
    }
    ctx->pc = 0x1238D8u;
label_1238d8:
    // 0x1238d8: 0x8e04156c  lw          $a0, 0x156C($s0)
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
label_1238dc:
    // 0x1238dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1238DCu;
    {
        const bool branch_taken_0x1238dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238DCu;
        // 0x1238e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238dc) {
            ctx->pc = 0x1238F8u;
            goto label_1238f8;
        }
    }
    ctx->pc = 0x1238E4u;
    // 0x1238e4: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x1238e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x1238e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1238e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1238ec: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1238ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1238f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1238f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1238f4: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x1238f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_1238f8:
    // 0x1238f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1238f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1238fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1238FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238FCu;
        // 0x123900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1238FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123904u;
    // 0x123904: 0x0  nop
    ctx->pc = 0x123904u;
    // NOP
    ctx->pc = 0x123908u;
}
