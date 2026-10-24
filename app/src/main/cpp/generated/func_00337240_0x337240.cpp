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

// Function: func_00337240
// Address: 0x337240 - 0x337320
void func_00337240_0x337240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337240_0x337240");
#endif

    switch (ctx->pc) {
        case 0x337240u: goto label_337240;
        case 0x337244u: goto label_337244;
        case 0x337248u: goto label_337248;
        case 0x33724cu: goto label_33724c;
        case 0x337250u: goto label_337250;
        case 0x337254u: goto label_337254;
        case 0x337258u: goto label_337258;
        case 0x33725cu: goto label_33725c;
        case 0x337260u: goto label_337260;
        case 0x337264u: goto label_337264;
        case 0x337268u: goto label_337268;
        case 0x33726cu: goto label_33726c;
        case 0x337270u: goto label_337270;
        case 0x337274u: goto label_337274;
        case 0x337278u: goto label_337278;
        case 0x33727cu: goto label_33727c;
        case 0x337280u: goto label_337280;
        case 0x337284u: goto label_337284;
        case 0x337288u: goto label_337288;
        case 0x33728cu: goto label_33728c;
        case 0x337290u: goto label_337290;
        case 0x337294u: goto label_337294;
        case 0x337298u: goto label_337298;
        case 0x33729cu: goto label_33729c;
        case 0x3372a0u: goto label_3372a0;
        case 0x3372a4u: goto label_3372a4;
        case 0x3372a8u: goto label_3372a8;
        case 0x3372acu: goto label_3372ac;
        case 0x3372b0u: goto label_3372b0;
        case 0x3372b4u: goto label_3372b4;
        case 0x3372b8u: goto label_3372b8;
        case 0x3372bcu: goto label_3372bc;
        case 0x3372c0u: goto label_3372c0;
        case 0x3372c4u: goto label_3372c4;
        case 0x3372c8u: goto label_3372c8;
        case 0x3372ccu: goto label_3372cc;
        case 0x3372d0u: goto label_3372d0;
        case 0x3372d4u: goto label_3372d4;
        case 0x3372d8u: goto label_3372d8;
        case 0x3372dcu: goto label_3372dc;
        case 0x3372e0u: goto label_3372e0;
        case 0x3372e4u: goto label_3372e4;
        case 0x3372e8u: goto label_3372e8;
        case 0x3372ecu: goto label_3372ec;
        case 0x3372f0u: goto label_3372f0;
        case 0x3372f4u: goto label_3372f4;
        case 0x3372f8u: goto label_3372f8;
        case 0x3372fcu: goto label_3372fc;
        case 0x337300u: goto label_337300;
        case 0x337304u: goto label_337304;
        case 0x337308u: goto label_337308;
        case 0x33730cu: goto label_33730c;
        case 0x337310u: goto label_337310;
        case 0x337314u: goto label_337314;
        case 0x337318u: goto label_337318;
        case 0x33731cu: goto label_33731c;
        default: break;
    }

    ctx->pc = 0x337240u;

label_337240:
    // 0x337240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_337244:
    // 0x337244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x337244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_337248:
    // 0x337248: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x337248u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
label_33724c:
    // 0x33724c: 0x8e420708  lw          $v0, 0x708($s2)
    ctx->pc = 0x33724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1800)));
label_337250:
    // 0x337250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_337254:
    // 0x337254: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x337254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337258:
    // 0x337258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33725c:
    // 0x33725c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_337260:
    if (ctx->pc == 0x337260u) {
        ctx->pc = 0x337260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33725Cu;
        // 0x337260: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337264u;
        goto label_337264;
    }
    ctx->pc = 0x33725Cu;
    {
        const bool branch_taken_0x33725c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x337260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33725Cu;
        // 0x337260: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33725c) {
            ctx->pc = 0x3372D8u;
            goto label_3372d8;
        }
    }
    ctx->pc = 0x337264u;
label_337264:
    // 0x337264: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_337268:
    // 0x337268: 0x24500768  addiu       $s0, $v0, 0x768
    ctx->pc = 0x337268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1896));
label_33726c:
    // 0x33726c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_337270:
    // 0x337270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_337274:
    if (ctx->pc == 0x337274u) {
        ctx->pc = 0x337274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337270u;
        // 0x337274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337278u;
        goto label_337278;
    }
    ctx->pc = 0x337270u;
    {
        const bool branch_taken_0x337270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337270u;
        // 0x337274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337270) {
            ctx->pc = 0x337280u;
            goto label_337280;
        }
    }
    ctx->pc = 0x337278u;
label_337278:
    // 0x337278: 0xc0cebca  jal         func_33AF28
label_33727c:
    if (ctx->pc == 0x33727Cu) {
        ctx->pc = 0x337280u;
        goto label_337280;
    }
    ctx->pc = 0x337278u;
    SET_GPR_U32(ctx, 31, 0x337280u);
    ctx->pc = 0x33AF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AF28u, 0x337278u, 0x337280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337280u;
label_337280:
    // 0x337280: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x337280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_337284:
    // 0x337284: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_337288:
    if (ctx->pc == 0x337288u) {
        ctx->pc = 0x337288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337284u;
        // 0x337288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33728Cu;
        goto label_33728c;
    }
    ctx->pc = 0x337284u;
    {
        const bool branch_taken_0x337284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337284u;
        // 0x337288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337284) {
            ctx->pc = 0x33729Cu;
            goto label_33729c;
        }
    }
    ctx->pc = 0x33728Cu;
label_33728c:
    // 0x33728c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_337290:
    // 0x337290: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x337290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_337294:
    // 0x337294: 0x60f809  jalr        $v1
label_337298:
    if (ctx->pc == 0x337298u) {
        ctx->pc = 0x33729Cu;
        goto label_33729c;
    }
    ctx->pc = 0x337294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33729Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337294u, 0x33729Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33729Cu;
label_33729c:
    // 0x33729c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x33729cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3372a0:
    // 0x3372a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3372a4:
    if (ctx->pc == 0x3372A4u) {
        ctx->pc = 0x3372A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372A0u;
        // 0x3372a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3372A8u;
        goto label_3372a8;
    }
    ctx->pc = 0x3372A0u;
    {
        const bool branch_taken_0x3372a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372a0) {
            ctx->pc = 0x3372A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3372A0u;
            // 0x3372a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3372B4u;
            goto label_3372b4;
        }
    }
    ctx->pc = 0x3372A8u;
label_3372a8:
    // 0x3372a8: 0xc0ced48  jal         func_33B520
label_3372ac:
    if (ctx->pc == 0x3372ACu) {
        ctx->pc = 0x3372B0u;
        goto label_3372b0;
    }
    ctx->pc = 0x3372A8u;
    SET_GPR_U32(ctx, 31, 0x3372B0u);
    ctx->pc = 0x33B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B520u, 0x3372A8u, 0x3372B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372B0u;
label_3372b0:
    // 0x3372b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3372b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3372b4:
    // 0x3372b4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3372b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3372b8:
    // 0x3372b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3372b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3372bc:
    // 0x3372bc: 0xc0e94bc  jal         func_3A52F0
label_3372c0:
    if (ctx->pc == 0x3372C0u) {
        ctx->pc = 0x3372C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372BCu;
        // 0x3372c0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3372C4u;
        goto label_3372c4;
    }
    ctx->pc = 0x3372BCu;
    SET_GPR_U32(ctx, 31, 0x3372C4u);
    ctx->pc = 0x3372C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3372BCu;
    // 0x3372c0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3372BCu, 0x3372C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372C4u;
label_3372c4:
    // 0x3372c4: 0x8e430708  lw          $v1, 0x708($s2)
    ctx->pc = 0x3372c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1800)));
label_3372c8:
    // 0x3372c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3372c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3372cc:
    // 0x3372cc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3372ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3372d0:
    // 0x3372d0: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
label_3372d4:
    if (ctx->pc == 0x3372D4u) {
        ctx->pc = 0x3372D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372D0u;
        // 0x3372d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3372D8u;
        goto label_3372d8;
    }
    ctx->pc = 0x3372D0u;
    {
        const bool branch_taken_0x3372d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3372d0) {
            ctx->pc = 0x3372D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3372D0u;
            // 0x3372d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337270;
        }
    }
    ctx->pc = 0x3372D8u;
label_3372d8:
    // 0x3372d8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3372d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_3372dc:
    // 0x3372dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3372dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3372e0:
    // 0x3372e0: 0x2451071c  addiu       $s1, $v0, 0x71C
    ctx->pc = 0x3372e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1820));
label_3372e4:
    // 0x3372e4: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3372e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3372e8:
    // 0x3372e8: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_3372ec:
    if (ctx->pc == 0x3372ECu) {
        ctx->pc = 0x3372ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372E8u;
        // 0x3372ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3372F0u;
        goto label_3372f0;
    }
    ctx->pc = 0x3372E8u;
    {
        const bool branch_taken_0x3372e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3372ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372E8u;
        // 0x3372ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372e8) {
            ctx->pc = 0x33730Cu;
            goto label_33730c;
        }
    }
    ctx->pc = 0x3372F0u;
label_3372f0:
    // 0x3372f0: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x3372f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
label_3372f4:
    // 0x3372f4: 0x26100714  addiu       $s0, $s0, 0x714
    ctx->pc = 0x3372f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1812));
label_3372f8:
    // 0x3372f8: 0xc0ed694  jal         func_3B5A50
label_3372fc:
    if (ctx->pc == 0x3372FCu) {
        ctx->pc = 0x3372FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372F8u;
        // 0x3372fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337300u;
        goto label_337300;
    }
    ctx->pc = 0x3372F8u;
    SET_GPR_U32(ctx, 31, 0x337300u);
    ctx->pc = 0x3372FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3372F8u;
    // 0x3372fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A50u, 0x3372F8u, 0x337300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337300u;
label_337300:
    // 0x337300: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x337300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_337304:
    // 0x337304: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x337304u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_337308:
    // 0x337308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33730c:
    // 0x33730c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33730cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_337310:
    // 0x337310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x337310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_337314:
    // 0x337314: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x337314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_337318:
    // 0x337318: 0x3e00008  jr          $ra
label_33731c:
    if (ctx->pc == 0x33731Cu) {
        ctx->pc = 0x33731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337318u;
        // 0x33731c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337320u;
        goto label_fallthrough_0x337318;
    }
    ctx->pc = 0x337318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337318u;
        // 0x33731c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x337318:
    ctx->pc = 0x337320u;
}
