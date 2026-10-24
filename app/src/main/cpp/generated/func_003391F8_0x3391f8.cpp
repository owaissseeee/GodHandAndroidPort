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

// Function: func_003391F8
// Address: 0x3391f8 - 0x3392f8
void func_003391F8_0x3391f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003391F8_0x3391f8");
#endif

    switch (ctx->pc) {
        case 0x3391f8u: goto label_3391f8;
        case 0x3391fcu: goto label_3391fc;
        case 0x339200u: goto label_339200;
        case 0x339204u: goto label_339204;
        case 0x339208u: goto label_339208;
        case 0x33920cu: goto label_33920c;
        case 0x339210u: goto label_339210;
        case 0x339214u: goto label_339214;
        case 0x339218u: goto label_339218;
        case 0x33921cu: goto label_33921c;
        case 0x339220u: goto label_339220;
        case 0x339224u: goto label_339224;
        case 0x339228u: goto label_339228;
        case 0x33922cu: goto label_33922c;
        case 0x339230u: goto label_339230;
        case 0x339234u: goto label_339234;
        case 0x339238u: goto label_339238;
        case 0x33923cu: goto label_33923c;
        case 0x339240u: goto label_339240;
        case 0x339244u: goto label_339244;
        case 0x339248u: goto label_339248;
        case 0x33924cu: goto label_33924c;
        case 0x339250u: goto label_339250;
        case 0x339254u: goto label_339254;
        case 0x339258u: goto label_339258;
        case 0x33925cu: goto label_33925c;
        case 0x339260u: goto label_339260;
        case 0x339264u: goto label_339264;
        case 0x339268u: goto label_339268;
        case 0x33926cu: goto label_33926c;
        case 0x339270u: goto label_339270;
        case 0x339274u: goto label_339274;
        case 0x339278u: goto label_339278;
        case 0x33927cu: goto label_33927c;
        case 0x339280u: goto label_339280;
        case 0x339284u: goto label_339284;
        case 0x339288u: goto label_339288;
        case 0x33928cu: goto label_33928c;
        case 0x339290u: goto label_339290;
        case 0x339294u: goto label_339294;
        case 0x339298u: goto label_339298;
        case 0x33929cu: goto label_33929c;
        case 0x3392a0u: goto label_3392a0;
        case 0x3392a4u: goto label_3392a4;
        case 0x3392a8u: goto label_3392a8;
        case 0x3392acu: goto label_3392ac;
        case 0x3392b0u: goto label_3392b0;
        case 0x3392b4u: goto label_3392b4;
        case 0x3392b8u: goto label_3392b8;
        case 0x3392bcu: goto label_3392bc;
        case 0x3392c0u: goto label_3392c0;
        case 0x3392c4u: goto label_3392c4;
        case 0x3392c8u: goto label_3392c8;
        case 0x3392ccu: goto label_3392cc;
        case 0x3392d0u: goto label_3392d0;
        case 0x3392d4u: goto label_3392d4;
        case 0x3392d8u: goto label_3392d8;
        case 0x3392dcu: goto label_3392dc;
        case 0x3392e0u: goto label_3392e0;
        case 0x3392e4u: goto label_3392e4;
        case 0x3392e8u: goto label_3392e8;
        case 0x3392ecu: goto label_3392ec;
        case 0x3392f0u: goto label_3392f0;
        case 0x3392f4u: goto label_3392f4;
        default: break;
    }

    ctx->pc = 0x3391f8u;

label_3391f8:
    // 0x3391f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3391f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3391fc:
    // 0x3391fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3391fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339200:
    // 0x339200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339204:
    // 0x339204: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_339208:
    if (ctx->pc == 0x339208u) {
        ctx->pc = 0x339208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339204u;
        // 0x339208: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33920Cu;
        goto label_33920c;
    }
    ctx->pc = 0x339204u;
    {
        const bool branch_taken_0x339204 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x339208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339204u;
        // 0x339208: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339204) {
            ctx->pc = 0x339228u;
            goto label_339228;
        }
    }
    ctx->pc = 0x33920Cu;
label_33920c:
    // 0x33920c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33920cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339210:
    // 0x339210: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339214:
    // 0x339214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339218:
    // 0x339218: 0x24845a10  addiu       $a0, $a0, 0x5A10
    ctx->pc = 0x339218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
label_33921c:
    // 0x33921c: 0x24a55920  addiu       $a1, $a1, 0x5920
    ctx->pc = 0x33921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
label_339220:
    // 0x339220: 0x80ce292  j           func_338A48
label_339224:
    if (ctx->pc == 0x339224u) {
        ctx->pc = 0x339224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339220u;
        // 0x339224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339228u;
        goto label_339228;
    }
    ctx->pc = 0x339220u;
    ctx->pc = 0x339224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339220u;
    // 0x339224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x339220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339228u;
label_339228:
    // 0x339228: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x339228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_33922c:
    // 0x33922c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_339230:
    if (ctx->pc == 0x339230u) {
        ctx->pc = 0x339230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33922Cu;
        // 0x339230: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339234u;
        goto label_339234;
    }
    ctx->pc = 0x33922Cu;
    {
        const bool branch_taken_0x33922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33922c) {
            ctx->pc = 0x339230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33922Cu;
            // 0x339230: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339250u;
            goto label_339250;
        }
    }
    ctx->pc = 0x339234u;
label_339234:
    // 0x339234: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339238:
    // 0x339238: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33923c:
    // 0x33923c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33923cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339240:
    // 0x339240: 0x24845a20  addiu       $a0, $a0, 0x5A20
    ctx->pc = 0x339240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23072));
label_339244:
    // 0x339244: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x339244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
label_339248:
    // 0x339248: 0x80ce292  j           func_338A48
label_33924c:
    if (ctx->pc == 0x33924Cu) {
        ctx->pc = 0x33924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339248u;
        // 0x33924c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339250u;
        goto label_339250;
    }
    ctx->pc = 0x339248u;
    ctx->pc = 0x33924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339248u;
    // 0x33924c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x339248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339250u;
label_339250:
    // 0x339250: 0x18c00026  blez        $a2, . + 4 + (0x26 << 2)
label_339254:
    if (ctx->pc == 0x339254u) {
        ctx->pc = 0x339254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339250u;
        // 0x339254: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339258u;
        goto label_339258;
    }
    ctx->pc = 0x339250u;
    {
        const bool branch_taken_0x339250 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x339254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339250u;
        // 0x339254: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339250) {
            ctx->pc = 0x3392ECu;
            goto label_3392ec;
        }
    }
    ctx->pc = 0x339258u;
label_339258:
    // 0x339258: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x339258u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33925c:
    // 0x33925c: 0x11200023  beqz        $t1, . + 4 + (0x23 << 2)
label_339260:
    if (ctx->pc == 0x339260u) {
        ctx->pc = 0x339264u;
        goto label_339264;
    }
    ctx->pc = 0x33925Cu;
    {
        const bool branch_taken_0x33925c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x33925c) {
            ctx->pc = 0x3392ECu;
            goto label_3392ec;
        }
    }
    ctx->pc = 0x339264u;
label_339264:
    // 0x339264: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_339268:
    if (ctx->pc == 0x339268u) {
        ctx->pc = 0x339268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339264u;
        // 0x339268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33926Cu;
        goto label_33926c;
    }
    ctx->pc = 0x339264u;
    {
        const bool branch_taken_0x339264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x339268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339264u;
        // 0x339268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339264) {
            ctx->pc = 0x3392B0u;
            goto label_3392b0;
        }
    }
    ctx->pc = 0x33926Cu;
label_33926c:
    // 0x33926c: 0x54a20018  bnel        $a1, $v0, . + 4 + (0x18 << 2)
label_339270:
    if (ctx->pc == 0x339270u) {
        ctx->pc = 0x339270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33926Cu;
        // 0x339270: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339274u;
        goto label_339274;
    }
    ctx->pc = 0x33926Cu;
    {
        const bool branch_taken_0x33926c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x33926c) {
            ctx->pc = 0x339270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33926Cu;
            // 0x339270: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3392D0u;
            goto label_3392d0;
        }
    }
    ctx->pc = 0x339274u;
label_339274:
    // 0x339274: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x339274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_339278:
    // 0x339278: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x339278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_33927c:
    // 0x33927c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x33927cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_339280:
    // 0x339280: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x339280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_339284:
    // 0x339284: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x339284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_339288:
    // 0x339288: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x339288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_33928c:
    // 0x33928c: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x33928cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_339290:
    // 0x339290: 0x1263023  subu        $a2, $t1, $a2
    ctx->pc = 0x339290u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_339294:
    // 0x339294: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x339294u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_339298:
    // 0x339298: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x339298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33929c:
    // 0x33929c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x33929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3392a0:
    // 0x3392a0: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x3392a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3392a4:
    // 0x3392a4: 0xe3280b  movn        $a1, $a3, $v1
    ctx->pc = 0x3392a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_3392a8:
    // 0x3392a8: 0x10860010  beq         $a0, $a2, . + 4 + (0x10 << 2)
label_3392ac:
    if (ctx->pc == 0x3392ACu) {
        ctx->pc = 0x3392ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392A8u;
        // 0x3392ac: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392B0u;
        goto label_3392b0;
    }
    ctx->pc = 0x3392A8u;
    {
        const bool branch_taken_0x3392a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x3392ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392A8u;
        // 0x3392ac: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3392a8) {
            ctx->pc = 0x3392ECu;
            goto label_3392ec;
        }
    }
    ctx->pc = 0x3392B0u;
label_3392b0:
    // 0x3392b0: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x3392b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_3392b4:
    // 0x3392b4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3392b8:
    if (ctx->pc == 0x3392B8u) {
        ctx->pc = 0x3392B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392B4u;
        // 0x3392b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392BCu;
        goto label_3392bc;
    }
    ctx->pc = 0x3392B4u;
    {
        const bool branch_taken_0x3392b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3392b4) {
            ctx->pc = 0x3392B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3392B4u;
            // 0x3392b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3392ECu;
            goto label_3392ec;
        }
    }
    ctx->pc = 0x3392BCu;
label_3392bc:
    // 0x3392bc: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x3392bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3392c0:
    // 0x3392c0: 0x40f809  jalr        $v0
label_3392c4:
    if (ctx->pc == 0x3392C4u) {
        ctx->pc = 0x3392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392C0u;
        // 0x3392c4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392C8u;
        goto label_3392c8;
    }
    ctx->pc = 0x3392C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3392C8u);
        ctx->pc = 0x3392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392C0u;
        // 0x3392c4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3392C0u, 0x3392C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3392C8u;
label_3392c8:
    // 0x3392c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3392cc:
    if (ctx->pc == 0x3392CCu) {
        ctx->pc = 0x3392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392C8u;
        // 0x3392cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392D0u;
        goto label_3392d0;
    }
    ctx->pc = 0x3392C8u;
    {
        const bool branch_taken_0x3392c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392C8u;
        // 0x3392cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3392c8) {
            ctx->pc = 0x3392ECu;
            goto label_3392ec;
        }
    }
    ctx->pc = 0x3392D0u;
label_3392d0:
    // 0x3392d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3392d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3392d4:
    // 0x3392d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3392d8:
    if (ctx->pc == 0x3392D8u) {
        ctx->pc = 0x3392D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392D4u;
        // 0x3392d8: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392DCu;
        goto label_3392dc;
    }
    ctx->pc = 0x3392D4u;
    {
        const bool branch_taken_0x3392d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3392D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392D4u;
        // 0x3392d8: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3392d4) {
            ctx->pc = 0x3392E8u;
            goto label_3392e8;
        }
    }
    ctx->pc = 0x3392DCu;
label_3392dc:
    // 0x3392dc: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x3392dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3392e0:
    // 0x3392e0: 0x40f809  jalr        $v0
label_3392e4:
    if (ctx->pc == 0x3392E4u) {
        ctx->pc = 0x3392E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392E0u;
        // 0x3392e4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392E8u;
        goto label_3392e8;
    }
    ctx->pc = 0x3392E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3392E8u);
        ctx->pc = 0x3392E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392E0u;
        // 0x3392e4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3392E0u, 0x3392E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3392E8u;
label_3392e8:
    // 0x3392e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3392e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3392ec:
    // 0x3392ec: 0x3e00008  jr          $ra
label_3392f0:
    if (ctx->pc == 0x3392F0u) {
        ctx->pc = 0x3392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392ECu;
        // 0x3392f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392F4u;
        goto label_3392f4;
    }
    ctx->pc = 0x3392ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392ECu;
        // 0x3392f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3392ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3392F4u;
label_3392f4:
    // 0x3392f4: 0x0  nop
    ctx->pc = 0x3392f4u;
    // NOP
    ctx->pc = 0x3392f8u;
}
