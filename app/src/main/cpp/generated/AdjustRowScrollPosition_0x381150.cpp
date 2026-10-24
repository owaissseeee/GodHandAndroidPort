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

// Function: AdjustRowScrollPosition
// Address: 0x381150 - 0x3812b0
void AdjustRowScrollPosition_0x381150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AdjustRowScrollPosition_0x381150");
#endif

    switch (ctx->pc) {
        case 0x381200u: goto label_381200;
        case 0x381298u: goto label_381298;
        default: break;
    }

    ctx->pc = 0x381150u;

    // 0x381150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x381154: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x381154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381158: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x381158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38115c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x38115cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x381160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x381164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x381164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x381168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38116c: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x38116cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x381170: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x381170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x381174: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x381174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x381178: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x381178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x38117c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x38117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x381180: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x381180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x381184: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x381184u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x381188: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x381188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x38118c: 0x1038021  addu        $s0, $t0, $v1
    ctx->pc = 0x38118cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x381190: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x381190u;
    {
        const bool branch_taken_0x381190 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x381194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381190u;
        // 0x381194: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381190) {
            ctx->pc = 0x3811C4u;
            goto label_3811c4;
        }
    }
    ctx->pc = 0x381198u;
    // 0x381198: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x381198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38119c: 0x24e3fc40  addiu       $v1, $a3, -0x3C0
    ctx->pc = 0x38119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966336));
    // 0x3811a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3811a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3811a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3811A4u;
    {
        const bool branch_taken_0x3811a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3811A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811A4u;
        // 0x3811a8: 0x96040004  lhu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811a4) {
            ctx->pc = 0x3811B8u;
            goto label_3811b8;
        }
    }
    ctx->pc = 0x3811ACu;
    // 0x3811ac: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x3811acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3811b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3811B0u;
    {
        const bool branch_taken_0x3811b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3811B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811B0u;
        // 0x3811b4: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811b0) {
            ctx->pc = 0x3811F4u;
            goto label_3811f4;
        }
    }
    ctx->pc = 0x3811B8u;
label_3811b8:
    // 0x3811b8: 0x2402fc40  addiu       $v0, $zero, -0x3C0
    ctx->pc = 0x3811b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    // 0x3811bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3811BCu;
    {
        const bool branch_taken_0x3811bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3811C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811BCu;
        // 0x3811c0: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811bc) {
            ctx->pc = 0x3811F4u;
            goto label_3811f4;
        }
    }
    ctx->pc = 0x3811C4u;
label_3811c4:
    // 0x3811c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3811c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3811c8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3811c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3811cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3811CCu;
    {
        const bool branch_taken_0x3811cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3811D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811CCu;
        // 0x3811d0: 0x71023  negu        $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811cc) {
            ctx->pc = 0x381208u;
            goto label_381208;
        }
    }
    ctx->pc = 0x3811D4u;
    // 0x3811d4: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x3811d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3811d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3811d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3811dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3811DCu;
    {
        const bool branch_taken_0x3811dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3811E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811DCu;
        // 0x3811e0: 0x96040004  lhu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811dc) {
            ctx->pc = 0x3811F0u;
            goto label_3811f0;
        }
    }
    ctx->pc = 0x3811E4u;
    // 0x3811e4: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3811e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3811e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3811E8u;
    {
        const bool branch_taken_0x3811e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3811ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811E8u;
        // 0x3811ec: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811e8) {
            ctx->pc = 0x3811F4u;
            goto label_3811f4;
        }
    }
    ctx->pc = 0x3811F0u;
label_3811f0:
    // 0x3811f0: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x3811f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_3811f4:
    // 0x3811f4: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x3811f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3811f8: 0xc0e01f8  jal         func_3807E0
    ctx->pc = 0x3811F8u;
    SET_GPR_U32(ctx, 31, 0x381200u);
    ctx->pc = 0x3811FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3811F8u;
    // 0x3811fc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807E0u, 0x3811F8u, 0x381200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381200u;
label_381200:
    // 0x381200: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x381200u;
    {
        const bool branch_taken_0x381200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381200u;
        // 0x381204: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381200) {
            ctx->pc = 0x381284u;
            goto label_381284;
        }
    }
    ctx->pc = 0x381208u;
label_381208:
    // 0x381208: 0x30c28000  andi        $v0, $a2, 0x8000
    ctx->pc = 0x381208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x38120c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38120Cu;
    {
        const bool branch_taken_0x38120c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38120Cu;
        // 0x381210: 0x30c22000  andi        $v0, $a2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38120c) {
            ctx->pc = 0x381238u;
            goto label_381238;
        }
    }
    ctx->pc = 0x381214u;
    // 0x381214: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x381214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x381218: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x381218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x38121c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38121Cu;
    {
        const bool branch_taken_0x38121c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38121Cu;
        // 0x381220: 0x96030006  lhu         $v1, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38121c) {
            ctx->pc = 0x381230u;
            goto label_381230;
        }
    }
    ctx->pc = 0x381224u;
    // 0x381224: 0x671023  subu        $v0, $v1, $a3
    ctx->pc = 0x381224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x381228: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x381228u;
    {
        const bool branch_taken_0x381228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381228u;
        // 0x38122c: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381228) {
            ctx->pc = 0x381268u;
            goto label_381268;
        }
    }
    ctx->pc = 0x381230u;
label_381230:
    // 0x381230: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x381230u;
    {
        const bool branch_taken_0x381230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381230u;
        // 0x381234: 0xa6000006  sh          $zero, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381230) {
            ctx->pc = 0x381268u;
            goto label_381268;
        }
    }
    ctx->pc = 0x381238u;
label_381238:
    // 0x381238: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x381238u;
    {
        const bool branch_taken_0x381238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381238) {
            ctx->pc = 0x38123Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381238u;
            // 0x38123c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38129Cu;
            goto label_38129c;
        }
    }
    ctx->pc = 0x381240u;
    // 0x381240: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x381240u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x381244: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x381244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x381248: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x381248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x38124c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x38124cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x381250: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381250u;
    {
        const bool branch_taken_0x381250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381250u;
        // 0x381254: 0x96040006  lhu         $a0, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381250) {
            ctx->pc = 0x381264u;
            goto label_381264;
        }
    }
    ctx->pc = 0x381258u;
    // 0x381258: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x381258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x38125c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38125Cu;
    {
        const bool branch_taken_0x38125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38125Cu;
        // 0x381260: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38125c) {
            ctx->pc = 0x381268u;
            goto label_381268;
        }
    }
    ctx->pc = 0x381264u;
label_381264:
    // 0x381264: 0xa6050006  sh          $a1, 0x6($s0)
    ctx->pc = 0x381264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 5));
label_381268:
    // 0x381268: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x381268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x38126c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x38126cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x381270: 0x24632060  addiu       $v1, $v1, 0x2060
    ctx->pc = 0x381270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8288));
    // 0x381274: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x381274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x381278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x381278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38127c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x38127cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x381280: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x381280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
label_381284:
    // 0x381284: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x381284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x381288: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x381288u;
    {
        const bool branch_taken_0x381288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381288) {
            ctx->pc = 0x38128Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381288u;
            // 0x38128c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38129Cu;
            goto label_38129c;
        }
    }
    ctx->pc = 0x381290u;
    // 0x381290: 0xc0caa7c  jal         func_32A9F0
    ctx->pc = 0x381290u;
    SET_GPR_U32(ctx, 31, 0x381298u);
    ctx->pc = 0x381294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381290u;
    // 0x381294: 0x86050004  lh          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x381290u, 0x381298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381298u;
label_381298:
    // 0x381298: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x381298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38129c:
    // 0x38129c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38129cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3812a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3812a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3812a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3812A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3812A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3812A4u;
        // 0x3812a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3812A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3812ACu;
    // 0x3812ac: 0x0  nop
    ctx->pc = 0x3812acu;
    // NOP
    ctx->pc = 0x3812b0u;
}
