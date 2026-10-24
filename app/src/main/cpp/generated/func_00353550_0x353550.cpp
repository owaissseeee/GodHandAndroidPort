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

// Function: func_00353550
// Address: 0x353550 - 0x353630
void func_00353550_0x353550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353550_0x353550");
#endif

    switch (ctx->pc) {
        case 0x35357cu: goto label_35357c;
        case 0x3535b0u: goto label_3535b0;
        case 0x3535f8u: goto label_3535f8;
        default: break;
    }

    ctx->pc = 0x353550u;

    // 0x353550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353554: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x353554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x353558: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x353558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35355c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35355cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x353560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x353560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x353564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x353564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x353568: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x353568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35356c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x353570: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x353570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x353574: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x353574u;
    SET_GPR_U32(ctx, 31, 0x35357Cu);
    ctx->pc = 0x353578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353574u;
    // 0x353578: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x353574u, 0x35357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35357Cu;
label_35357c:
    // 0x35357c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x35357Cu;
    {
        const bool branch_taken_0x35357c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35357Cu;
        // 0x353580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35357c) {
            ctx->pc = 0x353614u;
            goto label_353614;
        }
    }
    ctx->pc = 0x353584u;
    // 0x353584: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x353584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353588: 0x26120950  addiu       $s2, $s0, 0x950
    ctx->pc = 0x353588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x35358c: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35358Cu;
    {
        const bool branch_taken_0x35358c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x353590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35358Cu;
        // 0x353590: 0x2604090c  addiu       $a0, $s0, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35358c) {
            ctx->pc = 0x3535D0u;
            goto label_3535d0;
        }
    }
    ctx->pc = 0x353594u;
    // 0x353594: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x353594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x353598: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x353598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x35359c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x35359cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3535a0: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x3535a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3535a4: 0x3012  mflo        $a2
    ctx->pc = 0x3535a4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3535a8: 0xc0da51e  jal         func_369478
    ctx->pc = 0x3535A8u;
    SET_GPR_U32(ctx, 31, 0x3535B0u);
    ctx->pc = 0x3535ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535A8u;
    // 0x3535ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369478u, 0x3535A8u, 0x3535B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535B0u;
label_3535b0:
    // 0x3535b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3535b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3535b4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3535B4u;
    {
        const bool branch_taken_0x3535b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3535B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3535B4u;
        // 0x3535b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3535b4) {
            ctx->pc = 0x353614u;
            goto label_353614;
        }
    }
    ctx->pc = 0x3535BCu;
    // 0x3535bc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3535bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3535c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3535c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3535c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3535C4u;
    {
        const bool branch_taken_0x3535c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3535C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3535C4u;
        // 0x3535c8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3535c4) {
            ctx->pc = 0x353610u;
            goto label_353610;
        }
    }
    ctx->pc = 0x3535CCu;
    // 0x3535cc: 0x0  nop
    ctx->pc = 0x3535ccu;
    // NOP
label_3535d0:
    // 0x3535d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3535d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3535d4: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3535D4u;
    {
        const bool branch_taken_0x3535d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3535D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3535D4u;
        // 0x3535d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3535d4) {
            ctx->pc = 0x353610u;
            goto label_353610;
        }
    }
    ctx->pc = 0x3535DCu;
    // 0x3535dc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x3535dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3535e0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3535e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3535e4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3535e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3535e8: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x3535e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3535ec: 0x3012  mflo        $a2
    ctx->pc = 0x3535ecu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3535f0: 0xc0da648  jal         func_369920
    ctx->pc = 0x3535F0u;
    SET_GPR_U32(ctx, 31, 0x3535F8u);
    ctx->pc = 0x3535F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535F0u;
    // 0x3535f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369920u, 0x3535F0u, 0x3535F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535F8u;
label_3535f8:
    // 0x3535f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3535f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3535fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3535FCu;
    {
        const bool branch_taken_0x3535fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3535FCu;
        // 0x353600: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3535fc) {
            ctx->pc = 0x353614u;
            goto label_353614;
        }
    }
    ctx->pc = 0x353604u;
    // 0x353604: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x353604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x353608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35360c: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x35360cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_353610:
    // 0x353610: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x353610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_353614:
    // 0x353614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x353614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353618: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x353618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35361c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35361cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353620: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x353620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353624: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x353624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353628: 0x3e00008  jr          $ra
    ctx->pc = 0x353628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353628u;
        // 0x35362c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353630u;
}
