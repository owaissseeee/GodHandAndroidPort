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

// Function: func_00331458
// Address: 0x331458 - 0x331570
void func_00331458_0x331458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331458_0x331458");
#endif

    switch (ctx->pc) {
        case 0x331480u: goto label_331480;
        case 0x33149cu: goto label_33149c;
        case 0x3314b8u: goto label_3314b8;
        case 0x3314c0u: goto label_3314c0;
        case 0x3314d0u: goto label_3314d0;
        case 0x331500u: goto label_331500;
        case 0x33151cu: goto label_33151c;
        default: break;
    }

    ctx->pc = 0x331458u;

    // 0x331458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x331458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33145c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331460: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x331460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x331468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33146c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331470: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x331470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x331474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x331474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x331478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x331478u;
    {
        const bool branch_taken_0x331478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331478u;
        // 0x33147c: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331478) {
            ctx->pc = 0x331488u;
            goto label_331488;
        }
    }
    ctx->pc = 0x331480u;
label_331480:
    // 0x331480: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x331480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x331484: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x331484u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_331488:
    // 0x331488: 0x2a0203e8  slti        $v0, $s0, 0x3E8
    ctx->pc = 0x331488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x33148c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x33148Cu;
    {
        const bool branch_taken_0x33148c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33148c) {
            ctx->pc = 0x331490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33148Cu;
            // 0x331490: 0x82320002  lb          $s2, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3314D4u;
            goto label_3314d4;
        }
    }
    ctx->pc = 0x331494u;
    // 0x331494: 0xc0ced96  jal         func_33B658
    ctx->pc = 0x331494u;
    SET_GPR_U32(ctx, 31, 0x33149Cu);
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x331494u, 0x33149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33149Cu;
label_33149c:
    // 0x33149c: 0x2664844c  addiu       $a0, $s3, -0x7BB4
    ctx->pc = 0x33149cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935628));
    // 0x3314a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3314a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3314a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3314a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3314a8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3314A8u;
    {
        const bool branch_taken_0x3314a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3314a8) {
            ctx->pc = 0x3314C8u;
            goto label_3314c8;
        }
    }
    ctx->pc = 0x3314B0u;
    // 0x3314b0: 0xc0ced9c  jal         func_33B670
    ctx->pc = 0x3314B0u;
    SET_GPR_U32(ctx, 31, 0x3314B8u);
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x3314B0u, 0x3314B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314B8u;
label_3314b8:
    // 0x3314b8: 0xc0cc4ae  jal         func_3312B8
    ctx->pc = 0x3314B8u;
    SET_GPR_U32(ctx, 31, 0x3314C0u);
    ctx->pc = 0x3312B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3312B8u, 0x3314B8u, 0x3314C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314C0u;
label_3314c0:
    // 0x3314c0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3314C0u;
    {
        const bool branch_taken_0x3314c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3314C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314C0u;
        // 0x3314c4: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314c0) {
            ctx->pc = 0x331480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331480;
        }
    }
    ctx->pc = 0x3314C8u;
label_3314c8:
    // 0x3314c8: 0xc0ced9c  jal         func_33B670
    ctx->pc = 0x3314C8u;
    SET_GPR_U32(ctx, 31, 0x3314D0u);
    ctx->pc = 0x3314CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314C8u;
    // 0x3314cc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x3314C8u, 0x3314D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314D0u;
label_3314d0:
    // 0x3314d0: 0x82320002  lb          $s2, 0x2($s1)
    ctx->pc = 0x3314d0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3314d4:
    // 0x3314d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3314d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3314d8: 0x5642001b  bnel        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3314D8u;
    {
        const bool branch_taken_0x3314d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3314d8) {
            ctx->pc = 0x3314DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3314D8u;
            // 0x3314dc: 0xae60844c  sw          $zero, -0x7BB4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294935628), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331548u;
            goto label_331548;
        }
    }
    ctx->pc = 0x3314E0u;
    // 0x3314e0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3314e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3314e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3314e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3314e8: 0x24508410  addiu       $s0, $v0, -0x7BF0
    ctx->pc = 0x3314e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935568));
    // 0x3314ec: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3314ecu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3D8411u));
    // 0x3314f0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3314F0u;
    {
        const bool branch_taken_0x3314f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3314F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314F0u;
        // 0x3314f4: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314f0) {
            ctx->pc = 0x331504u;
            goto label_331504;
        }
    }
    ctx->pc = 0x3314F8u;
    // 0x3314f8: 0xc0cc4ba  jal         func_3312E8
    ctx->pc = 0x3314F8u;
    SET_GPR_U32(ctx, 31, 0x331500u);
    ctx->pc = 0x3314FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314F8u;
    // 0x3314fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3312E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3312E8u, 0x3314F8u, 0x331500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331500u;
label_331500:
    // 0x331500: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x331500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_331504:
    // 0x331504: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x331504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x331508: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x331508u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x33150c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33150Cu;
    {
        const bool branch_taken_0x33150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x33150c) {
            ctx->pc = 0x331510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33150Cu;
            // 0x331510: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331520u;
            goto label_331520;
        }
    }
    ctx->pc = 0x331514u;
    // 0x331514: 0xc0cc4c4  jal         func_331310
    ctx->pc = 0x331514u;
    SET_GPR_U32(ctx, 31, 0x33151Cu);
    ctx->pc = 0x331518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331514u;
    // 0x331518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331310u, 0x331514u, 0x33151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33151Cu;
label_33151c:
    // 0x33151c: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x33151cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_331520:
    // 0x331520: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x331520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x331524: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x331524u;
    {
        const bool branch_taken_0x331524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x331528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331524u;
        // 0x331528: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331524) {
            ctx->pc = 0x331544u;
            goto label_331544;
        }
    }
    ctx->pc = 0x33152Cu;
    // 0x33152c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x33152cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x331530: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x331530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x331534: 0x2463846c  addiu       $v1, $v1, -0x7B94
    ctx->pc = 0x331534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935660));
    // 0x331538: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x331538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D846Cu));
    // 0x33153c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331540: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D846Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D846Cu, _value); } while (0);
label_331544:
    // 0x331544: 0xae60844c  sw          $zero, -0x7BB4($s3)
    ctx->pc = 0x331544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294935628), GPR_U32(ctx, 0));
label_331548:
    // 0x331548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x331548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33154c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33154cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331550: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x331550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331554: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x331554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x331558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x331558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33155c: 0x3e00008  jr          $ra
    ctx->pc = 0x33155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33155Cu;
        // 0x331560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33155Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331564u;
    // 0x331564: 0x0  nop
    ctx->pc = 0x331564u;
    // NOP
    // 0x331568: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x331568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33156c: 0x0  nop
    ctx->pc = 0x33156cu;
    // NOP
    ctx->pc = 0x331570u;
}
