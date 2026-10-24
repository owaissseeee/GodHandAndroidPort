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

// Function: InitSystemCallTableAddress
// Address: 0x3b6500 - 0x3b6600
void InitSystemCallTableAddress_0x3b6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSystemCallTableAddress_0x3b6500");
#endif

    switch (ctx->pc) {
        case 0x3b6540u: goto label_3b6540;
        case 0x3b654cu: goto label_3b654c;
        case 0x3b655cu: goto label_3b655c;
        case 0x3b6570u: goto label_3b6570;
        case 0x3b6588u: goto label_3b6588;
        case 0x3b659cu: goto label_3b659c;
        case 0x3b65b8u: goto label_3b65b8;
        default: break;
    }

    ctx->pc = 0x3b6500u;

    // 0x3b6500: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b6500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b6504: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b6504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b6508: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3b6508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3b650c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b650cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b6510: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x3b6510u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x3b6514: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b6514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b6518: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x3b6518u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x3b651c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b6520: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b6520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b6524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b6528: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b6528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b652c: 0x2450af08  addiu       $s0, $v0, -0x50F8
    ctx->pc = 0x3b652cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946568));
    // 0x3b6530: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3b6530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3b6534: 0x8c44af08  lw          $a0, -0x50F8($v0)
    ctx->pc = 0x3b6534u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FAF08u));
    // 0x3b6538: 0xc0ed980  jal         func_3B6600
    ctx->pc = 0x3B6538u;
    SET_GPR_U32(ctx, 31, 0x3B6540u);
    ctx->pc = 0x3B653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6538u;
    // 0x3b653c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6600u, 0x3B6538u, 0x3B6540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6540u;
label_3b6540:
    // 0x3b6540: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3b6540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3b6544: 0xc0ed980  jal         func_3B6600
    ctx->pc = 0x3B6544u;
    SET_GPR_U32(ctx, 31, 0x3B654Cu);
    ctx->pc = 0x3B6548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6544u;
    // 0x3b6548: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6600u, 0x3B6544u, 0x3B654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B654Cu;
label_3b654c:
    // 0x3b654c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b654cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b6550: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x3b6550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x3b6554: 0xc0ed93a  jal         func_3B64E8
    ctx->pc = 0x3B6554u;
    SET_GPR_U32(ctx, 31, 0x3B655Cu);
    ctx->pc = 0x3B6558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6554u;
    // 0x3b6558: 0x26a664a8  addiu       $a2, $s5, 0x64A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 25768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B64E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B64E8u, 0x3B6554u, 0x3B655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B655Cu;
label_3b655c:
    // 0x3b655c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b655cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6560: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b6560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b6564: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x3b6564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x3b6568: 0xc0ed93a  jal         func_3B64E8
    ctx->pc = 0x3B6568u;
    SET_GPR_U32(ctx, 31, 0x3B6570u);
    ctx->pc = 0x3B656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6568u;
    // 0x3b656c: 0x26866470  addiu       $a2, $s4, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B64E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B64E8u, 0x3B6568u, 0x3B6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6570u;
label_3b6570:
    // 0x3b6570: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x3b6570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x3b6574: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b6574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6578: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x3b6578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x3b657c: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B657Cu;
    {
        const bool branch_taken_0x3b657c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B657Cu;
        // 0x3b6580: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b657c) {
            ctx->pc = 0x3B65D0u;
            goto label_3b65d0;
        }
    }
    ctx->pc = 0x3B6584u;
    // 0x3b6584: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3b6584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3b6588:
    // 0x3b6588: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6588u;
    {
        const bool branch_taken_0x3b6588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6588u;
        // 0x3b658c: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6588) {
            ctx->pc = 0x3B65A8u;
            goto label_3b65a8;
        }
    }
    ctx->pc = 0x3B6590u;
    // 0x3b6590: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x3b6590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x3b6594: 0xc0ed93a  jal         func_3B64E8
    ctx->pc = 0x3B6594u;
    SET_GPR_U32(ctx, 31, 0x3B659Cu);
    ctx->pc = 0x3B6598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6594u;
    // 0x3b6598: 0x26a664a8  addiu       $a2, $s5, 0x64A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 25768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B64E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B64E8u, 0x3B6594u, 0x3B659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B659Cu;
label_3b659c:
    // 0x3b659c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b659cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b65a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B65A0u;
    {
        const bool branch_taken_0x3b65a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65A0u;
        // 0x3b65a4: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b65a0) {
            ctx->pc = 0x3B65C0u;
            goto label_3b65c0;
        }
    }
    ctx->pc = 0x3B65A8u;
label_3b65a8:
    // 0x3b65a8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3b65a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3b65ac: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x3b65acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x3b65b0: 0xc0ed93a  jal         func_3B64E8
    ctx->pc = 0x3B65B0u;
    SET_GPR_U32(ctx, 31, 0x3B65B8u);
    ctx->pc = 0x3B65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B65B0u;
    // 0x3b65b4: 0x26866470  addiu       $a2, $s4, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B64E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B64E8u, 0x3B65B0u, 0x3B65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B65B8u;
label_3b65b8:
    // 0x3b65b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b65b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b65bc: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x3b65bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_3b65c0:
    // 0x3b65c0: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3B65C0u;
    {
        const bool branch_taken_0x3b65c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3B65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65C0u;
        // 0x3b65c4: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b65c0) {
            ctx->pc = 0x3B6588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6588;
        }
    }
    ctx->pc = 0x3B65C8u;
    // 0x3b65c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B65C8u;
    {
        const bool branch_taken_0x3b65c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65C8u;
        // 0x3b65cc: 0xaed1af00  sw          $s1, -0x5100($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294946560), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b65c8) {
            ctx->pc = 0x3B65D4u;
            goto label_3b65d4;
        }
    }
    ctx->pc = 0x3B65D0u;
label_3b65d0:
    // 0x3b65d0: 0xaed1af00  sw          $s1, -0x5100($s6)
    ctx->pc = 0x3b65d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294946560), GPR_U32(ctx, 17));
label_3b65d4:
    // 0x3b65d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b65d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b65d8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3b65d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b65dc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3b65dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b65e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b65e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b65e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b65e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b65e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b65e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b65ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b65ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b65f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b65f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b65f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B65F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65F4u;
        // 0x3b65f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B65F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B65FCu;
    // 0x3b65fc: 0x0  nop
    ctx->pc = 0x3b65fcu;
    // NOP
    ctx->pc = 0x3b6600u;
}
