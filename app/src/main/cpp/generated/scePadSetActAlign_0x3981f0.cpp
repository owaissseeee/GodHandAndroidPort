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

// Function: scePadSetActAlign
// Address: 0x3981f0 - 0x3982c8
void scePadSetActAlign_0x3981f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadSetActAlign_0x3981f0");
#endif

    switch (ctx->pc) {
        case 0x398230u: goto label_398230;
        case 0x39827cu: goto label_39827c;
        case 0x3982a8u: goto label_3982a8;
        default: break;
    }

    ctx->pc = 0x3981f0u;

    // 0x3981f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3981f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3981f4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3981f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3981f8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3981f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3981fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3981fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x398200: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x398200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x398204: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x398204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398208: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x398208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39820c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39820cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398210: 0x2470c300  addiu       $s0, $v1, -0x3D00
    ctx->pc = 0x398210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951680));
    // 0x398214: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x398214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x398218: 0xac62c300  sw          $v0, -0x3D00($v1)
    ctx->pc = 0x398218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x77C300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C300u, _value); } while (0);
    // 0x39821c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x39821cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x398220: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x398220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x77C304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C304u, _value); } while (0);
    // 0x398224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398228: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x398228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x77C308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C308u, _value); } while (0);
    // 0x39822c: 0x0  nop
    ctx->pc = 0x39822cu;
    // NOP
label_398230:
    // 0x398230: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x398230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x398234: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x398234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x398238: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x398238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39823c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x398240: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x398240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x398244: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x398244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x398248: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x398248u;
    {
        const bool branch_taken_0x398248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398248) {
            ctx->pc = 0x398230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398230;
        }
    }
    ctx->pc = 0x398250u;
    // 0x398250: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x398250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x398254: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x398254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x398258: 0x2484c0c0  addiu       $a0, $a0, -0x3F40
    ctx->pc = 0x398258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951104));
    // 0x39825c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398264: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x398264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398268: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x398268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x39826c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x39826cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398270: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x398270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x398274: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x398274u;
    SET_GPR_U32(ctx, 31, 0x39827Cu);
    ctx->pc = 0x398278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398274u;
    // 0x398278: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x398274u, 0x39827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39827Cu;
label_39827c:
    // 0x39827c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39827Cu;
    {
        const bool branch_taken_0x39827c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x39827c) {
            ctx->pc = 0x398280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39827Cu;
            // 0x398280: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39828Cu;
            goto label_39828c;
        }
    }
    ctx->pc = 0x398284u;
    // 0x398284: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x398284u;
    {
        const bool branch_taken_0x398284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398284u;
        // 0x398288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398284) {
            ctx->pc = 0x3982B0u;
            goto label_3982b0;
        }
    }
    ctx->pc = 0x39828Cu;
label_39828c:
    // 0x39828c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398290: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x398290u;
    {
        const bool branch_taken_0x398290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x398294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398290u;
        // 0x398294: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398290) {
            ctx->pc = 0x3982B0u;
            goto label_3982b0;
        }
    }
    ctx->pc = 0x398298u;
    // 0x398298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x398298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39829c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39829cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3982a0: 0xc0e5f86  jal         func_397E18
    ctx->pc = 0x3982A0u;
    SET_GPR_U32(ctx, 31, 0x3982A8u);
    ctx->pc = 0x3982A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3982A0u;
    // 0x3982a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397E18u, 0x3982A0u, 0x3982A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3982A8u;
label_3982a8:
    // 0x3982a8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3982a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3982ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3982acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3982b0:
    // 0x3982b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3982b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3982b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3982b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3982b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3982b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3982bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3982bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3982c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3982C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3982C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982C0u;
        // 0x3982c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3982C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3982C8u;
}
