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

// Function: InitAlarm
// Address: 0x3b68b8 - 0x3b6990
void InitAlarm_0x3b68b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitAlarm_0x3b68b8");
#endif

    switch (ctx->pc) {
        case 0x3b6900u: goto label_3b6900;
        case 0x3b6918u: goto label_3b6918;
        case 0x3b6930u: goto label_3b6930;
        case 0x3b6938u: goto label_3b6938;
        case 0x3b6940u: goto label_3b6940;
        case 0x3b694cu: goto label_3b694c;
        case 0x3b6950u: goto label_3b6950;
        case 0x3b6958u: goto label_3b6958;
        case 0x3b6968u: goto label_3b6968;
        default: break;
    }

    ctx->pc = 0x3b68b8u;

    // 0x3b68b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b68b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b68bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3b68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3b68c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b68c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b68c4: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x3b68c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x3b68c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b68c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b68cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b68ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b68d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b68d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b68d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10001810u));
    // 0x3b68d8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3b68d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3b68dc: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3B68DCu;
    {
        const bool branch_taken_0x3b68dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68DCu;
        // 0x3b68e0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b68dc) {
            ctx->pc = 0x3B6978u;
            goto label_3b6978;
        }
    }
    ctx->pc = 0x3B68E4u;
    // 0x3b68e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b68e8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3b68e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b68ec: 0x2450be50  addiu       $s0, $v0, -0x41B0
    ctx->pc = 0x3b68ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
    // 0x3b68f0: 0x8c44be50  lw          $a0, -0x41B0($v0)
    ctx->pc = 0x3b68f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBE50u));
    // 0x3b68f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b68f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBE54u));
    // 0x3b68f8: 0xc0eda14  jal         func_3B6850
    ctx->pc = 0x3B68F8u;
    SET_GPR_U32(ctx, 31, 0x3B6900u);
    ctx->pc = 0x3B68FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B68F8u;
    // 0x3b68fc: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6850u, 0x3B68F8u, 0x3B6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6900u;
label_3b6900:
    // 0x3b6900: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3b6900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3b6904: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x3b6904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x3b6908: 0x24a5b6e8  addiu       $a1, $a1, -0x4918
    ctx->pc = 0x3b6908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948584));
    // 0x3b690c: 0x34846000  ori         $a0, $a0, 0x6000
    ctx->pc = 0x3b690cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
    // 0x3b6910: 0xc0eda18  jal         func_3B6860
    ctx->pc = 0x3B6910u;
    SET_GPR_U32(ctx, 31, 0x3B6918u);
    ctx->pc = 0x3B6914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6910u;
    // 0x3b6914: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6860u, 0x3B6910u, 0x3B6918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6918u;
label_3b6918:
    // 0x3b6918: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3b6918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3b691c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3b691cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x3b6920: 0x24a5be28  addiu       $a1, $a1, -0x41D8
    ctx->pc = 0x3b6920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950440));
    // 0x3b6924: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x3b6924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x3b6928: 0xc0eda18  jal         func_3B6860
    ctx->pc = 0x3B6928u;
    SET_GPR_U32(ctx, 31, 0x3B6930u);
    ctx->pc = 0x3B692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6928u;
    // 0x3b692c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6860u, 0x3B6928u, 0x3B6930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6930u;
label_3b6930:
    // 0x3b6930: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x3B6930u;
    SET_GPR_U32(ctx, 31, 0x3B6938u);
    ctx->pc = 0x3B6934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6930u;
    // 0x3b6934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x3B6930u, 0x3B6938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6938u;
label_3b6938:
    // 0x3b6938: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x3B6938u;
    SET_GPR_U32(ctx, 31, 0x3B6940u);
    ctx->pc = 0x3B693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6938u;
    // 0x3b693c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x3B6938u, 0x3B6940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6940u;
label_3b6940:
    // 0x3b6940: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3b6940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b6944: 0xc0eda14  jal         func_3B6850
    ctx->pc = 0x3B6944u;
    SET_GPR_U32(ctx, 31, 0x3B694Cu);
    ctx->pc = 0x3B6948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6944u;
    // 0x3b6948: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6850u, 0x3B6944u, 0x3B694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B694Cu;
label_3b694c:
    // 0x3b694c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b6950:
    // 0x3b6950: 0xc0eda2a  jal         func_3B68A8
    ctx->pc = 0x3B6950u;
    SET_GPR_U32(ctx, 31, 0x3B6958u);
    ctx->pc = 0x3B6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6950u;
    // 0x3b6954: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B68A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B68A8u, 0x3B6950u, 0x3B6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6958u;
label_3b6958:
    // 0x3b6958: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b6958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b695c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b695cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6960: 0xc0eda14  jal         func_3B6850
    ctx->pc = 0x3B6960u;
    SET_GPR_U32(ctx, 31, 0x3B6968u);
    ctx->pc = 0x3B6964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6960u;
    // 0x3b6964: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6850u, 0x3B6960u, 0x3B6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6968u;
label_3b6968:
    // 0x3b6968: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x3b6968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3b696c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B696Cu;
    {
        const bool branch_taken_0x3b696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b696c) {
            ctx->pc = 0x3B6970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B696Cu;
            // 0x3b6970: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6950;
        }
    }
    ctx->pc = 0x3B6974u;
    // 0x3b6974: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b6974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b6978:
    // 0x3b6978: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b6978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b697c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b697cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6984: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6984u;
        // 0x3b6988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B698Cu;
    // 0x3b698c: 0x0  nop
    ctx->pc = 0x3b698cu;
    // NOP
    ctx->pc = 0x3b6990u;
}
