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

// Function: iStartTimerCounter
// Address: 0x3b72d0 - 0x3b7380
void iStartTimerCounter_0x3b72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iStartTimerCounter_0x3b72d0");
#endif

    switch (ctx->pc) {
        case 0x3b7338u: goto label_3b7338;
        case 0x3b735cu: goto label_3b735c;
        case 0x3b7364u: goto label_3b7364;
        default: break;
    }

    ctx->pc = 0x3b72d0u;

    // 0x3b72d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b72d4: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x3b72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3b72d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b72d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b72dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b72dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b72e0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x3b72e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3b72e4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B72E4u;
    {
        const bool branch_taken_0x3b72e4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3B72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72E4u;
        // 0x3b72e8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b72e4) {
            ctx->pc = 0x3B72FCu;
            goto label_3b72fc;
        }
    }
    ctx->pc = 0x3B72ECu;
    // 0x3b72ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b72ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b72f0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x3b72f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x3b72f4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B72F4u;
    {
        const bool branch_taken_0x3b72f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b72f4) {
            ctx->pc = 0x3B72F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B72F4u;
            // 0x3b72f8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7308u;
            goto label_3b7308;
        }
    }
    ctx->pc = 0x3B72FCu;
label_3b72fc:
    // 0x3b72fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b7300: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3B7300u;
    {
        const bool branch_taken_0x3b7300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7300u;
        // 0x3b7304: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7300) {
            ctx->pc = 0x3B7368u;
            goto label_3b7368;
        }
    }
    ctx->pc = 0x3B7308u;
label_3b7308:
    // 0x3b7308: 0x2442be90  addiu       $v0, $v0, -0x4170
    ctx->pc = 0x3b7308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950544));
    // 0x3b730c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3b730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3b7310: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7310u;
    {
        const bool branch_taken_0x3b7310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3b7310) {
            ctx->pc = 0x3B7314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7310u;
            // 0x3b7314: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7324u;
            goto label_3b7324;
        }
    }
    ctx->pc = 0x3B7318u;
    // 0x3b7318: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b7318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b731c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3B731Cu;
    {
        const bool branch_taken_0x3b731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B731Cu;
        // 0x3b7320: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b731c) {
            ctx->pc = 0x3B7368u;
            goto label_3b7368;
        }
    }
    ctx->pc = 0x3B7324u;
label_3b7324:
    // 0x3b7324: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b7324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b7328: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B7328u;
    {
        const bool branch_taken_0x3b7328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7328u;
        // 0x3b732c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7328) {
            ctx->pc = 0x3B7368u;
            goto label_3b7368;
        }
    }
    ctx->pc = 0x3B7330u;
    // 0x3b7330: 0xc0edc4c  jal         func_3B7130
    ctx->pc = 0x3B7330u;
    SET_GPR_U32(ctx, 31, 0x3B7338u);
    ctx->pc = 0x3B7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7130u, 0x3B7330u, 0x3B7338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7338u;
label_3b7338:
    // 0x3b7338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b7338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b733c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3b733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3b7340: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x3b7340u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x3b7344: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3b7344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3b7348: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x3b7348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b734c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B734Cu;
    {
        const bool branch_taken_0x3b734c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B734Cu;
        // 0x3b7350: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b734c) {
            ctx->pc = 0x3B7364u;
            goto label_3b7364;
        }
    }
    ctx->pc = 0x3B7354u;
    // 0x3b7354: 0xc0edb6e  jal         func_3B6DB8
    ctx->pc = 0x3B7354u;
    SET_GPR_U32(ctx, 31, 0x3B735Cu);
    ctx->pc = 0x3B7358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7354u;
    // 0x3b7358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6DB8u, 0x3B7354u, 0x3B735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B735Cu;
label_3b735c:
    // 0x3b735c: 0xc0edb0a  jal         func_3B6C28
    ctx->pc = 0x3B735Cu;
    SET_GPR_U32(ctx, 31, 0x3B7364u);
    ctx->pc = 0x3B7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B735Cu;
    // 0x3b7360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6C28u, 0x3B735Cu, 0x3B7364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7364u;
label_3b7364:
    // 0x3b7364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b7364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7368:
    // 0x3b7368: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b7368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b736c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b736cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7374: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7374u;
        // 0x3b7378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B737Cu;
    // 0x3b737c: 0x0  nop
    ctx->pc = 0x3b737cu;
    // NOP
    ctx->pc = 0x3b7380u;
}
