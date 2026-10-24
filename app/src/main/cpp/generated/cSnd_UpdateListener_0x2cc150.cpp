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

// Function: cSnd_UpdateListener
// Address: 0x2cc150 - 0x2cc3b8
void cSnd_UpdateListener_0x2cc150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_UpdateListener_0x2cc150");
#endif

    switch (ctx->pc) {
        case 0x2cc1bcu: goto label_2cc1bc;
        case 0x2cc21cu: goto label_2cc21c;
        case 0x2cc260u: goto label_2cc260;
        case 0x2cc2d8u: goto label_2cc2d8;
        case 0x2cc2ecu: goto label_2cc2ec;
        case 0x2cc348u: goto label_2cc348;
        case 0x2cc368u: goto label_2cc368;
        case 0x2cc37cu: goto label_2cc37c;
        case 0x2cc38cu: goto label_2cc38c;
        default: break;
    }

    ctx->pc = 0x2cc150u;

    // 0x2cc150: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2cc150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2cc154: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2cc154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2cc158: 0x8c637a84  lw          $v1, 0x7A84($v1)
    ctx->pc = 0x2cc158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2cc15c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2cc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2cc160: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2cc160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2cc164: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2cc164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2cc168: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cc168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc16c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2cc16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2cc170: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cc170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cc174: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2cc174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2cc178: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2cc178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2cc17c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2cc17cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2cc180: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC180u;
    {
        const bool branch_taken_0x2cc180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC180u;
        // 0x2cc184: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc180) {
            ctx->pc = 0x2CC1A8u;
            goto label_2cc1a8;
        }
    }
    ctx->pc = 0x2CC188u;
    // 0x2cc188: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2cc188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2cc18c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cc18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cc190: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC190u;
    {
        const bool branch_taken_0x2cc190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc190) {
            ctx->pc = 0x2CC194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC190u;
            // 0x2cc194: 0xae600110  sw          $zero, 0x110($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC1B4u;
            goto label_2cc1b4;
        }
    }
    ctx->pc = 0x2CC198u;
    // 0x2cc198: 0x311ba  dsrl        $v0, $v1, 6
    ctx->pc = 0x2cc198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 6);
    // 0x2cc19c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc1a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC1A0u;
    {
        const bool branch_taken_0x2cc1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1A0u;
        // 0x2cc1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1a0) {
            ctx->pc = 0x2CC1B0u;
            goto label_2cc1b0;
        }
    }
    ctx->pc = 0x2CC1A8u;
label_2cc1a8:
    // 0x2cc1a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC1A8u;
    {
        const bool branch_taken_0x2cc1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1A8u;
        // 0x2cc1ac: 0xae600110  sw          $zero, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1a8) {
            ctx->pc = 0x2CC1B4u;
            goto label_2cc1b4;
        }
    }
    ctx->pc = 0x2CC1B0u;
label_2cc1b0:
    // 0x2cc1b0: 0xae620110  sw          $v0, 0x110($s3)
    ctx->pc = 0x2cc1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
label_2cc1b4:
    // 0x2cc1b4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2CC1B4u;
    SET_GPR_U32(ctx, 31, 0x2CC1BCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2CC1B4u, 0x2CC1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1BCu;
label_2cc1bc:
    // 0x2cc1bc: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x2cc1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x2cc1c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc1c8: 0x10180a  movz        $v1, $zero, $s0
    ctx->pc = 0x2cc1c8u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2cc1cc: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CC1CCu;
    {
        const bool branch_taken_0x2cc1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1CCu;
        // 0x2cc1d0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1cc) {
            ctx->pc = 0x2CC224u;
            goto label_2cc224;
        }
    }
    ctx->pc = 0x2CC1D4u;
    // 0x2cc1d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC1D4u;
    {
        const bool branch_taken_0x2cc1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc1d4) {
            ctx->pc = 0x2CC1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC1D4u;
            // 0x2cc1d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC1ECu;
            goto label_2cc1ec;
        }
    }
    ctx->pc = 0x2CC1DCu;
    // 0x2cc1dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC1DCu;
    {
        const bool branch_taken_0x2cc1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1DCu;
        // 0x2cc1e0: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1dc) {
            ctx->pc = 0x2CC1FCu;
            goto label_2cc1fc;
        }
    }
    ctx->pc = 0x2CC1E4u;
    // 0x2cc1e4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2CC1E4u;
    {
        const bool branch_taken_0x2cc1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1E4u;
        // 0x2cc1e8: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1e4) {
            ctx->pc = 0x2CC394u;
            goto label_2cc394;
        }
    }
    ctx->pc = 0x2CC1ECu;
label_2cc1ec:
    // 0x2cc1ec: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2CC1ECu;
    {
        const bool branch_taken_0x2cc1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1ECu;
        // 0x2cc1f0: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1ec) {
            ctx->pc = 0x2CC350u;
            goto label_2cc350;
        }
    }
    ctx->pc = 0x2CC1F4u;
    // 0x2cc1f4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2CC1F4u;
    {
        const bool branch_taken_0x2cc1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1F4u;
        // 0x2cc1f8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1f4) {
            ctx->pc = 0x2CC390u;
            goto label_2cc390;
        }
    }
    ctx->pc = 0x2CC1FCu;
label_2cc1fc:
    // 0x2cc1fc: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x2cc1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x2cc200: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x2cc200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x2cc204: 0x8cc3aff0  lw          $v1, -0x5010($a2)
    ctx->pc = 0x2cc204u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2cc208: 0x78620210  lq          $v0, 0x210($v1)
    ctx->pc = 0x2cc208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x2cc20c: 0x7e6200c0  sq          $v0, 0xC0($s3)
    ctx->pc = 0x2cc20cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 192), GPR_VEC(ctx, 2));
    // 0x2cc210: 0x8cc5aff0  lw          $a1, -0x5010($a2)
    ctx->pc = 0x2cc210u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2cc214: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x2CC214u;
    SET_GPR_U32(ctx, 31, 0x2CC21Cu);
    ctx->pc = 0x2CC218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC214u;
    // 0x2cc218: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x2CC214u, 0x2CC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC21Cu;
label_2cc21c:
    // 0x2cc21c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2CC21Cu;
    {
        const bool branch_taken_0x2cc21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC21Cu;
        // 0x2cc220: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc21c) {
            ctx->pc = 0x2CC390u;
            goto label_2cc390;
        }
    }
    ctx->pc = 0x2CC224u;
label_2cc224:
    // 0x2cc224: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x2cc224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x2cc228: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2cc228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2cc22c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cc22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cc230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc234: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cc234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc238: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2cc238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2cc23c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2cc23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2cc240: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2cc240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2cc244: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2cc244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2cc248: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cc248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc24c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2cc24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cc250: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2cc250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2cc254: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2cc254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cc258: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2CC258u;
    SET_GPR_U32(ctx, 31, 0x2CC260u);
    ctx->pc = 0x2CC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC258u;
    // 0x2cc25c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2CC258u, 0x2CC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC260u;
label_2cc260:
    // 0x2cc260: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2cc260u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc264: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2cc264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc268: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2cc268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc26c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2cc26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cc270: 0x7e6200c0  sq          $v0, 0xC0($s3)
    ctx->pc = 0x2cc270u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 192), GPR_VEC(ctx, 2));
    // 0x2cc274: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2cc274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cc278: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2cc278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2cc27c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2cc27cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2cc280: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x2cc280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2cc284: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2cc284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2cc288: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2cc288u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc28c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2cc28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2cc290: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2cc290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc294: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2cc294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2cc298: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2cc298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2cc29c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2cc29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2cc2a0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2cc2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cc2a4: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2cc2a4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2cc2a8: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2cc2a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2cc2ac: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2cc2acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2cc2b0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2cc2b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2cc2b4: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x2cc2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2cc2b8: 0xfa050020  sqc2        $vf5, 0x20($s0)
    ctx->pc = 0x2cc2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2cc2bc: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x2cc2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2cc2c0: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x2cc2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2cc2c4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2cc2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cc2c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc2d0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2CC2D0u;
    SET_GPR_U32(ctx, 31, 0x2CC2D8u);
    ctx->pc = 0x2CC2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2D0u;
    // 0x2cc2d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2CC2D0u, 0x2CC2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2D8u;
label_2cc2d8:
    // 0x2cc2d8: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x2cc2d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cc2dc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2cc2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cc2e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc2e4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2CC2E4u;
    SET_GPR_U32(ctx, 31, 0x2CC2ECu);
    ctx->pc = 0x2CC2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2E4u;
    // 0x2cc2e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2CC2E4u, 0x2CC2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2ECu;
label_2cc2ec:
    // 0x2cc2ec: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2cc2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2cc2f0: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2cc2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2cc2f4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2cc2f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cc2f8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2cc2f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc2fc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2cc2fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2cc300: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2cc300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2cc304: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2cc304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cc308: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2cc308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2cc30c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2cc30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc310: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x2cc310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x2cc314: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x2cc314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cc318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cc318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc31c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2cc31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc320: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2cc320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2cc324: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2cc324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2cc328: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x2cc328u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2cc32c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2cc32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2cc330: 0xe7b400ac  swc1        $f20, 0xAC($sp)
    ctx->pc = 0x2cc330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2cc334: 0xe7b4009c  swc1        $f20, 0x9C($sp)
    ctx->pc = 0x2cc334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2cc338: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2cc338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2cc33c: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x2cc33cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2cc340: 0xc0c2a32  jal         func_30A8C8
    ctx->pc = 0x2CC340u;
    SET_GPR_U32(ctx, 31, 0x2CC348u);
    ctx->pc = 0x2CC344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC340u;
    // 0x2cc344: 0xafa000a8  sw          $zero, 0xA8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8C8u, 0x2CC340u, 0x2CC348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC348u;
label_2cc348:
    // 0x2cc348: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CC348u;
    {
        const bool branch_taken_0x2cc348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC348u;
        // 0x2cc34c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc348) {
            ctx->pc = 0x2CC390u;
            goto label_2cc390;
        }
    }
    ctx->pc = 0x2CC350u;
label_2cc350:
    // 0x2cc350: 0x8e0600f0  lw          $a2, 0xF0($s0)
    ctx->pc = 0x2cc350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2cc354: 0x8e25aff0  lw          $a1, -0x5010($s1)
    ctx->pc = 0x2cc354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x2cc358: 0x267000c0  addiu       $s0, $s3, 0xC0
    ctx->pc = 0x2cc358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x2cc35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc360: 0xc0c2928  jal         func_30A4A0
    ctx->pc = 0x2CC360u;
    SET_GPR_U32(ctx, 31, 0x2CC368u);
    ctx->pc = 0x2CC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC360u;
    // 0x2cc364: 0x24a50210  addiu       $a1, $a1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4A0u, 0x2CC360u, 0x2CC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC368u;
label_2cc368:
    // 0x2cc368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc36c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cc36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cc370: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc374: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x2CC374u;
    SET_GPR_U32(ctx, 31, 0x2CC37Cu);
    ctx->pc = 0x2CC378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC374u;
    // 0x2cc378: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x2CC374u, 0x2CC37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC37Cu;
label_2cc37c:
    // 0x2cc37c: 0x8e25aff0  lw          $a1, -0x5010($s1)
    ctx->pc = 0x2cc37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x2cc380: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x2cc380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x2cc384: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x2CC384u;
    SET_GPR_U32(ctx, 31, 0x2CC38Cu);
    ctx->pc = 0x2CC388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC384u;
    // 0x2cc388: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x2CC384u, 0x2CC38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC38Cu;
label_2cc38c:
    // 0x2cc38c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2cc38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2cc390:
    // 0x2cc390: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2cc390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2cc394:
    // 0x2cc394: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2cc394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2cc398: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2cc398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cc39c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2cc39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2cc3a0: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2cc3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cc3a4: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2cc3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cc3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3A8u;
        // 0x2cc3ac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC3B0u;
    // 0x2cc3b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cc3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cc3b4: 0x0  nop
    ctx->pc = 0x2cc3b4u;
    // NOP
    ctx->pc = 0x2cc3b8u;
}
