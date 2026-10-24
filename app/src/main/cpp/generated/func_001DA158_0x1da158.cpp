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

// Function: func_001DA158
// Address: 0x1da158 - 0x1da2a8
void func_001DA158_0x1da158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DA158_0x1da158");
#endif

    switch (ctx->pc) {
        case 0x1da1e4u: goto label_1da1e4;
        case 0x1da240u: goto label_1da240;
        case 0x1da288u: goto label_1da288;
        default: break;
    }

    ctx->pc = 0x1da158u;

    // 0x1da158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da15c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1da160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1da164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da16c: 0x92033025  lbu         $v1, 0x3025($s0)
    ctx->pc = 0x1da16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
    // 0x1da170: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DA170u;
    {
        const bool branch_taken_0x1da170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA170u;
        // 0x1da174: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da170) {
            ctx->pc = 0x1DA1B0u;
            goto label_1da1b0;
        }
    }
    ctx->pc = 0x1DA178u;
    // 0x1da178: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA178u;
    {
        const bool branch_taken_0x1da178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da178) {
            ctx->pc = 0x1DA17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA178u;
            // 0x1da17c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA190u;
            goto label_1da190;
        }
    }
    ctx->pc = 0x1DA180u;
    // 0x1da180: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA180u;
    {
        const bool branch_taken_0x1da180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da180) {
            ctx->pc = 0x1DA184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA180u;
            // 0x1da184: 0x92023025  lbu         $v0, 0x3025($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA1A8u;
            goto label_1da1a8;
        }
    }
    ctx->pc = 0x1DA188u;
    // 0x1da188: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1DA188u;
    {
        const bool branch_taken_0x1da188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA188u;
        // 0x1da18c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da188) {
            ctx->pc = 0x1DA298u;
            goto label_1da298;
        }
    }
    ctx->pc = 0x1DA190u;
label_1da190:
    // 0x1da190: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DA190u;
    {
        const bool branch_taken_0x1da190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA190u;
        // 0x1da194: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da190) {
            ctx->pc = 0x1DA1F0u;
            goto label_1da1f0;
        }
    }
    ctx->pc = 0x1DA198u;
    // 0x1da198: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1DA198u;
    {
        const bool branch_taken_0x1da198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1da198) {
            ctx->pc = 0x1DA19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA198u;
            // 0x1da19c: 0x8e023028  lw          $v0, 0x3028($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA258u;
            goto label_1da258;
        }
    }
    ctx->pc = 0x1DA1A0u;
    // 0x1da1a0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1DA1A0u;
    {
        const bool branch_taken_0x1da1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1A0u;
        // 0x1da1a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1a0) {
            ctx->pc = 0x1DA298u;
            goto label_1da298;
        }
    }
    ctx->pc = 0x1DA1A8u;
label_1da1a8:
    // 0x1da1a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1DA1A8u;
    {
        const bool branch_taken_0x1da1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1A8u;
        // 0x1da1ac: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1a8) {
            ctx->pc = 0x1DA248u;
            goto label_1da248;
        }
    }
    ctx->pc = 0x1DA1B0u;
label_1da1b0:
    // 0x1da1b0: 0x8e023028  lw          $v0, 0x3028($s0)
    ctx->pc = 0x1da1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12328)));
    // 0x1da1b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA1B4u;
    {
        const bool branch_taken_0x1da1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1B4u;
        // 0x1da1b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1b4) {
            ctx->pc = 0x1DA1C4u;
            goto label_1da1c4;
        }
    }
    ctx->pc = 0x1DA1BCu;
    // 0x1da1bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA1BCu;
    {
        const bool branch_taken_0x1da1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1BCu;
        // 0x1da1c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1bc) {
            ctx->pc = 0x1DA1CCu;
            goto label_1da1cc;
        }
    }
    ctx->pc = 0x1DA1C4u;
label_1da1c4:
    // 0x1da1c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da1c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da1c8: 0xae023028  sw          $v0, 0x3028($s0)
    ctx->pc = 0x1da1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 2));
label_1da1cc:
    // 0x1da1cc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da1d0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1DA1D0u;
    {
        const bool branch_taken_0x1da1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1D0u;
        // 0x1da1d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1d0) {
            ctx->pc = 0x1DA294u;
            goto label_1da294;
        }
    }
    ctx->pc = 0x1DA1D8u;
    // 0x1da1d8: 0x260425b0  addiu       $a0, $s0, 0x25B0
    ctx->pc = 0x1da1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9648));
    // 0x1da1dc: 0xc077d4a  jal         func_1DF528
    ctx->pc = 0x1DA1DCu;
    SET_GPR_U32(ctx, 31, 0x1DA1E4u);
    ctx->pc = 0x1DA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA1DCu;
    // 0x1da1e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF528u, 0x1DA1DCu, 0x1DA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA1E4u;
label_1da1e4:
    // 0x1da1e4: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1da1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
    // 0x1da1e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DA1E8u;
    {
        const bool branch_taken_0x1da1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1E8u;
        // 0x1da1ec: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1e8) {
            ctx->pc = 0x1DA248u;
            goto label_1da248;
        }
    }
    ctx->pc = 0x1DA1F0u;
label_1da1f0:
    // 0x1da1f0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1da1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1da1f4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1da1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1da1f8: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1da1f8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1da1fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1da1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1da200: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DA200u;
    {
        const bool branch_taken_0x1da200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da200) {
            ctx->pc = 0x1DA204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA200u;
            // 0x1da204: 0x260425b0  addiu       $a0, $s0, 0x25B0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9648));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA234u;
            goto label_1da234;
        }
    }
    ctx->pc = 0x1DA208u;
    // 0x1da208: 0x8e023028  lw          $v0, 0x3028($s0)
    ctx->pc = 0x1da208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12328)));
    // 0x1da20c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA20Cu;
    {
        const bool branch_taken_0x1da20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA20Cu;
        // 0x1da210: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da20c) {
            ctx->pc = 0x1DA21Cu;
            goto label_1da21c;
        }
    }
    ctx->pc = 0x1DA214u;
    // 0x1da214: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA214u;
    {
        const bool branch_taken_0x1da214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA214u;
        // 0x1da218: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da214) {
            ctx->pc = 0x1DA224u;
            goto label_1da224;
        }
    }
    ctx->pc = 0x1DA21Cu;
label_1da21c:
    // 0x1da21c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da21cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da220: 0xae023028  sw          $v0, 0x3028($s0)
    ctx->pc = 0x1da220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 2));
label_1da224:
    // 0x1da224: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da228: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DA228u;
    {
        const bool branch_taken_0x1da228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da228) {
            ctx->pc = 0x1DA22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA228u;
            // 0x1da22c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA298u;
            goto label_1da298;
        }
    }
    ctx->pc = 0x1DA230u;
    // 0x1da230: 0x260425b0  addiu       $a0, $s0, 0x25B0
    ctx->pc = 0x1da230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9648));
label_1da234:
    // 0x1da234: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1da234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da238: 0xc077d4a  jal         func_1DF528
    ctx->pc = 0x1DA238u;
    SET_GPR_U32(ctx, 31, 0x1DA240u);
    ctx->pc = 0x1DA23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA238u;
    // 0x1da23c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF528u, 0x1DA238u, 0x1DA240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA240u;
label_1da240:
    // 0x1da240: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1da240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
    // 0x1da244: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1da244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1da248:
    // 0x1da248: 0xae033028  sw          $v1, 0x3028($s0)
    ctx->pc = 0x1da248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 3));
    // 0x1da24c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da250: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DA250u;
    {
        const bool branch_taken_0x1da250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA250u;
        // 0x1da254: 0xa2023025  sb          $v0, 0x3025($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da250) {
            ctx->pc = 0x1DA294u;
            goto label_1da294;
        }
    }
    ctx->pc = 0x1DA258u;
label_1da258:
    // 0x1da258: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA258u;
    {
        const bool branch_taken_0x1da258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA258u;
        // 0x1da25c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da258) {
            ctx->pc = 0x1DA268u;
            goto label_1da268;
        }
    }
    ctx->pc = 0x1DA260u;
    // 0x1da260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA260u;
    {
        const bool branch_taken_0x1da260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA260u;
        // 0x1da264: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da260) {
            ctx->pc = 0x1DA270u;
            goto label_1da270;
        }
    }
    ctx->pc = 0x1DA268u;
label_1da268:
    // 0x1da268: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da26c: 0xae023028  sw          $v0, 0x3028($s0)
    ctx->pc = 0x1da26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 2));
label_1da270:
    // 0x1da270: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da274: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA274u;
    {
        const bool branch_taken_0x1da274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA274u;
        // 0x1da278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da274) {
            ctx->pc = 0x1DA294u;
            goto label_1da294;
        }
    }
    ctx->pc = 0x1DA27Cu;
    // 0x1da27c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1da27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1da280: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x1DA280u;
    SET_GPR_U32(ctx, 31, 0x1DA288u);
    ctx->pc = 0x1DA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA280u;
    // 0x1da284: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x1DA280u, 0x1DA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA288u;
label_1da288:
    // 0x1da288: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1da288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1da28c: 0xa2003025  sb          $zero, 0x3025($s0)
    ctx->pc = 0x1da28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da290: 0xa2023024  sb          $v0, 0x3024($s0)
    ctx->pc = 0x1da290u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1da294:
    // 0x1da294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1da294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da298:
    // 0x1da298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da29c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA29Cu;
        // 0x1da2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA2A4u;
    // 0x1da2a4: 0x0  nop
    ctx->pc = 0x1da2a4u;
    // NOP
    ctx->pc = 0x1da2a8u;
}
