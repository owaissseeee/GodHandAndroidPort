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

// Function: func_003482C8
// Address: 0x3482c8 - 0x348338
void func_003482C8_0x3482c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003482C8_0x3482c8");
#endif

    switch (ctx->pc) {
        case 0x3482c8u: goto label_3482c8;
        case 0x3482ccu: goto label_3482cc;
        case 0x3482d0u: goto label_3482d0;
        case 0x3482d4u: goto label_3482d4;
        case 0x3482d8u: goto label_3482d8;
        case 0x3482dcu: goto label_3482dc;
        case 0x3482e0u: goto label_3482e0;
        case 0x3482e4u: goto label_3482e4;
        case 0x3482e8u: goto label_3482e8;
        case 0x3482ecu: goto label_3482ec;
        case 0x3482f0u: goto label_3482f0;
        case 0x3482f4u: goto label_3482f4;
        case 0x3482f8u: goto label_3482f8;
        case 0x3482fcu: goto label_3482fc;
        case 0x348300u: goto label_348300;
        case 0x348304u: goto label_348304;
        case 0x348308u: goto label_348308;
        case 0x34830cu: goto label_34830c;
        case 0x348310u: goto label_348310;
        case 0x348314u: goto label_348314;
        case 0x348318u: goto label_348318;
        case 0x34831cu: goto label_34831c;
        case 0x348320u: goto label_348320;
        case 0x348324u: goto label_348324;
        case 0x348328u: goto label_348328;
        case 0x34832cu: goto label_34832c;
        case 0x348330u: goto label_348330;
        case 0x348334u: goto label_348334;
        default: break;
    }

    ctx->pc = 0x3482c8u;

label_3482c8:
    // 0x3482c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3482c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3482cc:
    // 0x3482cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3482ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3482d0:
    // 0x3482d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3482d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3482d4:
    // 0x3482d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3482d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3482d8:
    // 0x3482d8: 0xc0d2248  jal         func_348920
label_3482dc:
    if (ctx->pc == 0x3482DCu) {
        ctx->pc = 0x3482DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482D8u;
        // 0x3482dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482E0u;
        goto label_3482e0;
    }
    ctx->pc = 0x3482D8u;
    SET_GPR_U32(ctx, 31, 0x3482E0u);
    ctx->pc = 0x3482DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482D8u;
    // 0x3482dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348920u, 0x3482D8u, 0x3482E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482E0u;
label_3482e0:
    // 0x3482e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3482e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3482e4:
    // 0x3482e4: 0xc0d224e  jal         func_348938
label_3482e8:
    if (ctx->pc == 0x3482E8u) {
        ctx->pc = 0x3482E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482E4u;
        // 0x3482e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482ECu;
        goto label_3482ec;
    }
    ctx->pc = 0x3482E4u;
    SET_GPR_U32(ctx, 31, 0x3482ECu);
    ctx->pc = 0x3482E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482E4u;
    // 0x3482e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348938u, 0x3482E4u, 0x3482ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482ECu;
label_3482ec:
    // 0x3482ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3482ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3482f0:
    // 0x3482f0: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_3482f4:
    if (ctx->pc == 0x3482F4u) {
        ctx->pc = 0x3482F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482F0u;
        // 0x3482f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482F8u;
        goto label_3482f8;
    }
    ctx->pc = 0x3482F0u;
    {
        const bool branch_taken_0x3482f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3482f0) {
            ctx->pc = 0x3482F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3482F0u;
            // 0x3482f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348324u;
            goto label_348324;
        }
    }
    ctx->pc = 0x3482F8u;
label_3482f8:
    // 0x3482f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3482f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3482fc:
    // 0x3482fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_348300:
    if (ctx->pc == 0x348300u) {
        ctx->pc = 0x348300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482FCu;
        // 0x348300: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348304u;
        goto label_348304;
    }
    ctx->pc = 0x3482FCu;
    {
        const bool branch_taken_0x3482fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482FCu;
        // 0x348300: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482fc) {
            ctx->pc = 0x348320u;
            goto label_348320;
        }
    }
    ctx->pc = 0x348304u;
label_348304:
    // 0x348304: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_348308:
    if (ctx->pc == 0x348308u) {
        ctx->pc = 0x348308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348304u;
        // 0x348308: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34830Cu;
        goto label_34830c;
    }
    ctx->pc = 0x348304u;
    {
        const bool branch_taken_0x348304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348304u;
        // 0x348308: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348304) {
            ctx->pc = 0x348320u;
            goto label_348320;
        }
    }
    ctx->pc = 0x34830Cu;
label_34830c:
    // 0x34830c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x34830cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_348310:
    // 0x348310: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_348314:
    if (ctx->pc == 0x348314u) {
        ctx->pc = 0x348314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348310u;
        // 0x348314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348318u;
        goto label_348318;
    }
    ctx->pc = 0x348310u;
    {
        const bool branch_taken_0x348310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348310) {
            ctx->pc = 0x348314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348310u;
            // 0x348314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348324u;
            goto label_348324;
        }
    }
    ctx->pc = 0x348318u;
label_348318:
    // 0x348318: 0x40f809  jalr        $v0
label_34831c:
    if (ctx->pc == 0x34831Cu) {
        ctx->pc = 0x348320u;
        goto label_348320;
    }
    ctx->pc = 0x348318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348320u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348318u, 0x348320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348320u;
label_348320:
    // 0x348320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348324:
    // 0x348324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348328:
    // 0x348328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34832c:
    // 0x34832c: 0x3e00008  jr          $ra
label_348330:
    if (ctx->pc == 0x348330u) {
        ctx->pc = 0x348330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34832Cu;
        // 0x348330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348334u;
        goto label_348334;
    }
    ctx->pc = 0x34832Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34832Cu;
        // 0x348330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34832Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348334u;
label_348334:
    // 0x348334: 0x0  nop
    ctx->pc = 0x348334u;
    // NOP
    ctx->pc = 0x348338u;
}
