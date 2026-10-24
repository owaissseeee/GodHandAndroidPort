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

// Function: scePadSetButtonInfo
// Address: 0x3982c8 - 0x398378
void scePadSetButtonInfo_0x3982c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadSetButtonInfo_0x3982c8");
#endif

    switch (ctx->pc) {
        case 0x39832cu: goto label_39832c;
        case 0x398358u: goto label_398358;
        default: break;
    }

    ctx->pc = 0x3982c8u;

    // 0x3982c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3982c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3982cc: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3982ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3982d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3982d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3982d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3982d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3982d8: 0x2450c300  addiu       $s0, $v0, -0x3D00
    ctx->pc = 0x3982d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951680));
    // 0x3982dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3982dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3982e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3982e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3982e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3982e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3982e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3982e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3982ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3982ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3982f0: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x3982f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x77C30Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C30Cu, _value); } while (0);
    // 0x3982f4: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3982f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3982f8: 0xac43c300  sw          $v1, -0x3D00($v0)
    ctx->pc = 0x3982f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x77C300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C300u, _value); } while (0);
    // 0x3982fc: 0x2484c0c0  addiu       $a0, $a0, -0x3F40
    ctx->pc = 0x3982fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951104));
    // 0x398300: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x398300u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x77C304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C304u, _value); } while (0);
    // 0x398304: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398308: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x398308u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x77C308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C308u, _value); } while (0);
    // 0x39830c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39830cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398310: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x398310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x398314: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x398314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398318: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x398318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x39831c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x39831cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398320: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x398320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x398324: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x398324u;
    SET_GPR_U32(ctx, 31, 0x39832Cu);
    ctx->pc = 0x398328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398324u;
    // 0x398328: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x398324u, 0x39832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39832Cu;
label_39832c:
    // 0x39832c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39832Cu;
    {
        const bool branch_taken_0x39832c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x39832c) {
            ctx->pc = 0x398330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39832Cu;
            // 0x398330: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39833Cu;
            goto label_39833c;
        }
    }
    ctx->pc = 0x398334u;
    // 0x398334: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x398334u;
    {
        const bool branch_taken_0x398334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398334u;
        // 0x398338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398334) {
            ctx->pc = 0x398360u;
            goto label_398360;
        }
    }
    ctx->pc = 0x39833Cu;
label_39833c:
    // 0x39833c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398340: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x398340u;
    {
        const bool branch_taken_0x398340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x398344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398340u;
        // 0x398344: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398340) {
            ctx->pc = 0x398360u;
            goto label_398360;
        }
    }
    ctx->pc = 0x398348u;
    // 0x398348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x398348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39834c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398350: 0xc0e5f86  jal         func_397E18
    ctx->pc = 0x398350u;
    SET_GPR_U32(ctx, 31, 0x398358u);
    ctx->pc = 0x398354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398350u;
    // 0x398354: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397E18u, 0x398350u, 0x398358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398358u;
label_398358:
    // 0x398358: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x398358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x39835c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39835cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_398360:
    // 0x398360: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x398360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x398364: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x398364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398368: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x398368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39836c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39836cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398370: 0x3e00008  jr          $ra
    ctx->pc = 0x398370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398370u;
        // 0x398374: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398378u;
}
