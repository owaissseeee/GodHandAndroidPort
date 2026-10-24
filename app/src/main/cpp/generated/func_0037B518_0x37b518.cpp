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

// Function: func_0037B518
// Address: 0x37b518 - 0x37b5e0
void func_0037B518_0x37b518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B518_0x37b518");
#endif

    switch (ctx->pc) {
        case 0x37b540u: goto label_37b540;
        case 0x37b548u: goto label_37b548;
        case 0x37b56cu: goto label_37b56c;
        case 0x37b590u: goto label_37b590;
        case 0x37b5b0u: goto label_37b5b0;
        case 0x37b5d0u: goto label_37b5d0;
        default: break;
    }

    ctx->pc = 0x37b518u;

    // 0x37b518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b51c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b51cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b524: 0x24e7bd90  addiu       $a3, $a3, -0x4270
    ctx->pc = 0x37b524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950288));
    // 0x37b528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37b530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b534: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b538: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B538u;
    SET_GPR_U32(ctx, 31, 0x37B540u);
    ctx->pc = 0x37B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B538u;
    // 0x37b53c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B538u, 0x37B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B540u;
label_37b540:
    // 0x37b540: 0xc0dd7be  jal         func_375EF8
    ctx->pc = 0x37B540u;
    SET_GPR_U32(ctx, 31, 0x37B548u);
    ctx->pc = 0x37B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B540u;
    // 0x37b544: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375EF8u, 0x37B540u, 0x37B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B548u;
label_37b548:
    // 0x37b548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37b548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b54c: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37B54Cu;
    {
        const bool branch_taken_0x37b54c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B54Cu;
        // 0x37b550: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b54c) {
            ctx->pc = 0x37B574u;
            goto label_37b574;
        }
    }
    ctx->pc = 0x37B554u;
    // 0x37b554: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37b554u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b558: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b55c: 0x24e7bda0  addiu       $a3, $a3, -0x4260
    ctx->pc = 0x37b55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950304));
    // 0x37b560: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b564: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B564u;
    SET_GPR_U32(ctx, 31, 0x37B56Cu);
    ctx->pc = 0x37B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B564u;
    // 0x37b568: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B564u, 0x37B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B56Cu;
label_37b56c:
    // 0x37b56c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x37B56Cu;
    {
        const bool branch_taken_0x37b56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B56Cu;
        // 0x37b570: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b56c) {
            ctx->pc = 0x37B5D4u;
            goto label_37b5d4;
        }
    }
    ctx->pc = 0x37B574u;
label_37b574:
    // 0x37b574: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B574u;
    {
        const bool branch_taken_0x37b574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B574u;
        // 0x37b578: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b574) {
            ctx->pc = 0x37B590u;
            goto label_37b590;
        }
    }
    ctx->pc = 0x37B57Cu;
    // 0x37b57c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b580: 0x24e7bda8  addiu       $a3, $a3, -0x4258
    ctx->pc = 0x37b580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950312));
    // 0x37b584: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b588: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B588u;
    SET_GPR_U32(ctx, 31, 0x37B590u);
    ctx->pc = 0x37B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B588u;
    // 0x37b58c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B588u, 0x37B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B590u;
label_37b590:
    // 0x37b590: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x37b590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x37b594: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B594u;
    {
        const bool branch_taken_0x37b594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B594u;
        // 0x37b598: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b594) {
            ctx->pc = 0x37B5B0u;
            goto label_37b5b0;
        }
    }
    ctx->pc = 0x37B59Cu;
    // 0x37b59c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b5a0: 0x24e7bdb8  addiu       $a3, $a3, -0x4248
    ctx->pc = 0x37b5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950328));
    // 0x37b5a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b5a8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B5A8u;
    SET_GPR_U32(ctx, 31, 0x37B5B0u);
    ctx->pc = 0x37B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B5A8u;
    // 0x37b5ac: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B5A8u, 0x37B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B5B0u;
label_37b5b0:
    // 0x37b5b0: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x37b5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x37b5b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B5B4u;
    {
        const bool branch_taken_0x37b5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5B4u;
        // 0x37b5b8: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b5b4) {
            ctx->pc = 0x37B5D0u;
            goto label_37b5d0;
        }
    }
    ctx->pc = 0x37B5BCu;
    // 0x37b5bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x37b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37b5c0: 0x24e7bde8  addiu       $a3, $a3, -0x4218
    ctx->pc = 0x37b5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950376));
    // 0x37b5c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37b5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b5c8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B5C8u;
    SET_GPR_U32(ctx, 31, 0x37B5D0u);
    ctx->pc = 0x37B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B5C8u;
    // 0x37b5cc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B5C8u, 0x37B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B5D0u;
label_37b5d0:
    // 0x37b5d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37b5d4:
    // 0x37b5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x37B5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5D8u;
        // 0x37b5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B5E0u;
}
