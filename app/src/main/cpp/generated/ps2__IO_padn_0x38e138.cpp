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

// Function: _IO_padn
// Address: 0x38e138 - 0x38e258
void ps2__IO_padn_0x38e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_padn_0x38e138");
#endif

    switch (ctx->pc) {
        case 0x38e138u: goto label_38e138;
        case 0x38e13cu: goto label_38e13c;
        case 0x38e140u: goto label_38e140;
        case 0x38e144u: goto label_38e144;
        case 0x38e148u: goto label_38e148;
        case 0x38e14cu: goto label_38e14c;
        case 0x38e150u: goto label_38e150;
        case 0x38e154u: goto label_38e154;
        case 0x38e158u: goto label_38e158;
        case 0x38e15cu: goto label_38e15c;
        case 0x38e160u: goto label_38e160;
        case 0x38e164u: goto label_38e164;
        case 0x38e168u: goto label_38e168;
        case 0x38e16cu: goto label_38e16c;
        case 0x38e170u: goto label_38e170;
        case 0x38e174u: goto label_38e174;
        case 0x38e178u: goto label_38e178;
        case 0x38e17cu: goto label_38e17c;
        case 0x38e180u: goto label_38e180;
        case 0x38e184u: goto label_38e184;
        case 0x38e188u: goto label_38e188;
        case 0x38e18cu: goto label_38e18c;
        case 0x38e190u: goto label_38e190;
        case 0x38e194u: goto label_38e194;
        case 0x38e198u: goto label_38e198;
        case 0x38e19cu: goto label_38e19c;
        case 0x38e1a0u: goto label_38e1a0;
        case 0x38e1a4u: goto label_38e1a4;
        case 0x38e1a8u: goto label_38e1a8;
        case 0x38e1acu: goto label_38e1ac;
        case 0x38e1b0u: goto label_38e1b0;
        case 0x38e1b4u: goto label_38e1b4;
        case 0x38e1b8u: goto label_38e1b8;
        case 0x38e1bcu: goto label_38e1bc;
        case 0x38e1c0u: goto label_38e1c0;
        case 0x38e1c4u: goto label_38e1c4;
        case 0x38e1c8u: goto label_38e1c8;
        case 0x38e1ccu: goto label_38e1cc;
        case 0x38e1d0u: goto label_38e1d0;
        case 0x38e1d4u: goto label_38e1d4;
        case 0x38e1d8u: goto label_38e1d8;
        case 0x38e1dcu: goto label_38e1dc;
        case 0x38e1e0u: goto label_38e1e0;
        case 0x38e1e4u: goto label_38e1e4;
        case 0x38e1e8u: goto label_38e1e8;
        case 0x38e1ecu: goto label_38e1ec;
        case 0x38e1f0u: goto label_38e1f0;
        case 0x38e1f4u: goto label_38e1f4;
        case 0x38e1f8u: goto label_38e1f8;
        case 0x38e1fcu: goto label_38e1fc;
        case 0x38e200u: goto label_38e200;
        case 0x38e204u: goto label_38e204;
        case 0x38e208u: goto label_38e208;
        case 0x38e20cu: goto label_38e20c;
        case 0x38e210u: goto label_38e210;
        case 0x38e214u: goto label_38e214;
        case 0x38e218u: goto label_38e218;
        case 0x38e21cu: goto label_38e21c;
        case 0x38e220u: goto label_38e220;
        case 0x38e224u: goto label_38e224;
        case 0x38e228u: goto label_38e228;
        case 0x38e22cu: goto label_38e22c;
        case 0x38e230u: goto label_38e230;
        case 0x38e234u: goto label_38e234;
        case 0x38e238u: goto label_38e238;
        case 0x38e23cu: goto label_38e23c;
        case 0x38e240u: goto label_38e240;
        case 0x38e244u: goto label_38e244;
        case 0x38e248u: goto label_38e248;
        case 0x38e24cu: goto label_38e24c;
        case 0x38e250u: goto label_38e250;
        case 0x38e254u: goto label_38e254;
        default: break;
    }

    ctx->pc = 0x38e138u;

label_38e138:
    // 0x38e138: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38e138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_38e13c:
    // 0x38e13c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38e140:
    // 0x38e140: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x38e140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_38e144:
    // 0x38e144: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_38e148:
    // 0x38e148: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38e148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e14c:
    // 0x38e14c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38e14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38e150:
    // 0x38e150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38e150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e154:
    // 0x38e154: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x38e154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_38e158:
    // 0x38e158: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x38e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_38e15c:
    // 0x38e15c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_38e160:
    if (ctx->pc == 0x38E160u) {
        ctx->pc = 0x38E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E15Cu;
        // 0x38e160: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E164u;
        goto label_38e164;
    }
    ctx->pc = 0x38E15Cu;
    {
        const bool branch_taken_0x38e15c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E15Cu;
        // 0x38e160: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e15c) {
            ctx->pc = 0x38E178u;
            goto label_38e178;
        }
    }
    ctx->pc = 0x38E164u;
label_38e164:
    // 0x38e164: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_38e168:
    // 0x38e168: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x38e168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_38e16c:
    // 0x38e16c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x38e16cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_38e170:
    // 0x38e170: 0x10000013  b           . + 4 + (0x13 << 2)
label_38e174:
    if (ctx->pc == 0x38E174u) {
        ctx->pc = 0x38E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E170u;
        // 0x38e174: 0x2453d7e0  addiu       $s3, $v0, -0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E178u;
        goto label_38e178;
    }
    ctx->pc = 0x38E170u;
    {
        const bool branch_taken_0x38e170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E170u;
        // 0x38e174: 0x2453d7e0  addiu       $s3, $v0, -0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e170) {
            ctx->pc = 0x38E1C0u;
            goto label_38e1c0;
        }
    }
    ctx->pc = 0x38E178u;
label_38e178:
    // 0x38e178: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x38e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38e17c:
    // 0x38e17c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_38e180:
    if (ctx->pc == 0x38E180u) {
        ctx->pc = 0x38E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E17Cu;
        // 0x38e180: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E184u;
        goto label_38e184;
    }
    ctx->pc = 0x38E17Cu;
    {
        const bool branch_taken_0x38e17c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E17Cu;
        // 0x38e180: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e17c) {
            ctx->pc = 0x38E198u;
            goto label_38e198;
        }
    }
    ctx->pc = 0x38E184u;
label_38e184:
    // 0x38e184: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_38e188:
    // 0x38e188: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x38e188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_38e18c:
    // 0x38e18c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x38e18cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_38e190:
    // 0x38e190: 0x1000000b  b           . + 4 + (0xB << 2)
label_38e194:
    if (ctx->pc == 0x38E194u) {
        ctx->pc = 0x38E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E190u;
        // 0x38e194: 0x2453d7f0  addiu       $s3, $v0, -0x2810 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E198u;
        goto label_38e198;
    }
    ctx->pc = 0x38E190u;
    {
        const bool branch_taken_0x38e190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E190u;
        // 0x38e194: 0x2453d7f0  addiu       $s3, $v0, -0x2810 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e190) {
            ctx->pc = 0x38E1C0u;
            goto label_38e1c0;
        }
    }
    ctx->pc = 0x38E198u;
label_38e198:
    // 0x38e198: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x38e198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_38e19c:
    // 0x38e19c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x38e19cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_38e1a0:
    // 0x38e1a0: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x38e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_38e1a4:
    // 0x38e1a4: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x38e1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
label_38e1a8:
    // 0x38e1a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38e1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38e1ac:
    // 0x38e1ac: 0x0  nop
    ctx->pc = 0x38e1acu;
    // NOP
label_38e1b0:
    // 0x38e1b0: 0x0  nop
    ctx->pc = 0x38e1b0u;
    // NOP
label_38e1b4:
    // 0x38e1b4: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
label_38e1b8:
    if (ctx->pc == 0x38E1B8u) {
        ctx->pc = 0x38E1BCu;
        goto label_38e1bc;
    }
    ctx->pc = 0x38E1B4u;
    {
        const bool branch_taken_0x38e1b4 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x38e1b4) {
            ctx->pc = 0x38E1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e1a0;
        }
    }
    ctx->pc = 0x38E1BCu;
label_38e1bc:
    // 0x38e1bc: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x38e1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38e1c0:
    // 0x38e1c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x38e1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38e1c4:
    // 0x38e1c4: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x38e1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_38e1c8:
    // 0x38e1c8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_38e1cc:
    if (ctx->pc == 0x38E1CCu) {
        ctx->pc = 0x38E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1C8u;
        // 0x38e1cc: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E1D0u;
        goto label_38e1d0;
    }
    ctx->pc = 0x38E1C8u;
    {
        const bool branch_taken_0x38e1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1C8u;
        // 0x38e1cc: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e1c8) {
            ctx->pc = 0x38E204u;
            goto label_38e204;
        }
    }
    ctx->pc = 0x38E1D0u;
label_38e1d0:
    // 0x38e1d0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x38e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38e1d4:
    // 0x38e1d4: 0x0  nop
    ctx->pc = 0x38e1d4u;
    // NOP
label_38e1d8:
    // 0x38e1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e1dc:
    // 0x38e1dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38e1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38e1e0:
    // 0x38e1e0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38e1e4:
    // 0x38e1e4: 0x40f809  jalr        $v0
label_38e1e8:
    if (ctx->pc == 0x38E1E8u) {
        ctx->pc = 0x38E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1E4u;
        // 0x38e1e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E1ECu;
        goto label_38e1ec;
    }
    ctx->pc = 0x38E1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E1ECu);
        ctx->pc = 0x38E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1E4u;
        // 0x38e1e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E1E4u, 0x38E1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E1ECu;
label_38e1ec:
    // 0x38e1ec: 0x1454000d  bne         $v0, $s4, . + 4 + (0xD << 2)
label_38e1f0:
    if (ctx->pc == 0x38E1F0u) {
        ctx->pc = 0x38E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1ECu;
        // 0x38e1f0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E1F4u;
        goto label_38e1f4;
    }
    ctx->pc = 0x38E1ECu;
    {
        const bool branch_taken_0x38e1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x38E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1ECu;
        // 0x38e1f0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e1ec) {
            ctx->pc = 0x38E224u;
            goto label_38e224;
        }
    }
    ctx->pc = 0x38E1F4u;
label_38e1f4:
    // 0x38e1f4: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x38e1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_38e1f8:
    // 0x38e1f8: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x38e1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_38e1fc:
    // 0x38e1fc: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_38e200:
    if (ctx->pc == 0x38E200u) {
        ctx->pc = 0x38E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1FCu;
        // 0x38e200: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E204u;
        goto label_38e204;
    }
    ctx->pc = 0x38E1FCu;
    {
        const bool branch_taken_0x38e1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e1fc) {
            ctx->pc = 0x38E200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E1FCu;
            // 0x38e200: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e1d8;
        }
    }
    ctx->pc = 0x38E204u;
label_38e204:
    // 0x38e204: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
label_38e208:
    if (ctx->pc == 0x38E208u) {
        ctx->pc = 0x38E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E204u;
        // 0x38e208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E20Cu;
        goto label_38e20c;
    }
    ctx->pc = 0x38E204u;
    {
        const bool branch_taken_0x38e204 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x38E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E204u;
        // 0x38e208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e204) {
            ctx->pc = 0x38E224u;
            goto label_38e224;
        }
    }
    ctx->pc = 0x38E20Cu;
label_38e20c:
    // 0x38e20c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x38e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38e210:
    // 0x38e210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38e210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38e214:
    // 0x38e214: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38e214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38e218:
    // 0x38e218: 0x40f809  jalr        $v0
label_38e21c:
    if (ctx->pc == 0x38E21Cu) {
        ctx->pc = 0x38E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E218u;
        // 0x38e21c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E220u;
        goto label_38e220;
    }
    ctx->pc = 0x38E218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E220u);
        ctx->pc = 0x38E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E218u;
        // 0x38e21c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E218u, 0x38E220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E220u;
label_38e220:
    // 0x38e220: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x38e220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_38e224:
    // 0x38e224: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x38e224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_38e228:
    // 0x38e228: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x38e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_38e22c:
    // 0x38e22c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38e22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38e230:
    // 0x38e230: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x38e230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38e234:
    // 0x38e234: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x38e234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38e238:
    // 0x38e238: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38e238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38e23c:
    // 0x38e23c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38e23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38e240:
    // 0x38e240: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38e240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38e244:
    // 0x38e244: 0x3e00008  jr          $ra
label_38e248:
    if (ctx->pc == 0x38E248u) {
        ctx->pc = 0x38E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E244u;
        // 0x38e248: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E24Cu;
        goto label_38e24c;
    }
    ctx->pc = 0x38E244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E244u;
        // 0x38e248: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E24Cu;
label_38e24c:
    // 0x38e24c: 0x0  nop
    ctx->pc = 0x38e24cu;
    // NOP
label_38e250:
    // 0x38e250: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x38e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_38e254:
    // 0x38e254: 0x0  nop
    ctx->pc = 0x38e254u;
    // NOP
    ctx->pc = 0x38e258u;
}
