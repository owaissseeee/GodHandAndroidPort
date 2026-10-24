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

// Function: func_0028D138
// Address: 0x28d138 - 0x28d3d8
void func_0028D138_0x28d138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028D138_0x28d138");
#endif

    switch (ctx->pc) {
        case 0x28d39cu: goto label_28d39c;
        case 0x28d3b8u: goto label_28d3b8;
        default: break;
    }

    ctx->pc = 0x28d138u;

    // 0x28d138: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28d138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28d13c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x28d140: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28d140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x28d144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d148: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28d14c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28d14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d150: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d154: 0x12200099  beqz        $s1, . + 4 + (0x99 << 2)
    ctx->pc = 0x28D154u;
    {
        const bool branch_taken_0x28d154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D154u;
        // 0x28d158: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d154) {
            ctx->pc = 0x28D3BCu;
            goto label_28d3bc;
        }
    }
    ctx->pc = 0x28D15Cu;
    // 0x28d15c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x28d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28d160: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x28d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28d164: 0x2643fc9f  addiu       $v1, $s2, -0x361
    ctx->pc = 0x28d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966431));
    // 0x28d168: 0x2c620057  sltiu       $v0, $v1, 0x57
    ctx->pc = 0x28d168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x28d16c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D16Cu;
    {
        const bool branch_taken_0x28d16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D16Cu;
        // 0x28d170: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d16c) {
            ctx->pc = 0x28D190u;
            goto label_28d190;
        }
    }
    ctx->pc = 0x28D174u;
    // 0x28d174: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28d174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x28d178: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d17c: 0x2442a120  addiu       $v0, $v0, -0x5EE0
    ctx->pc = 0x28d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x28d180: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d184: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28d184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d188: 0x800008  jr          $a0
    ctx->pc = 0x28D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D190u: goto label_28d190;
            case 0x28D1D4u: goto label_28d1d4;
            case 0x28D218u: goto label_28d218;
            case 0x28D230u: goto label_28d230;
            case 0x28D2A8u: goto label_28d2a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D188u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D190u;
label_28d190:
    // 0x28d190: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x28d190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x28d194: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28d194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28d198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d19c: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x28d19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x28d1a0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x28d1a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x28d1a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d1a8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x28d1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x28d1ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28d1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28d1b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d1b4: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x28d1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x28d1b8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x28d1b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x28d1bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d1c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28d1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d1c4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x28d1c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d1c8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x28d1c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d1cc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x28D1CCu;
    {
        const bool branch_taken_0x28d1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1CCu;
        // 0x28d1d0: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1cc) {
            ctx->pc = 0x28D2ECu;
            goto label_28d2ec;
        }
    }
    ctx->pc = 0x28D1D4u;
label_28d1d4:
    // 0x28d1d4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x28d1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x28d1d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28d1d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28d1dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1e0: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x28d1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x28d1e4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x28d1e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x28d1e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d1ec: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x28d1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x28d1f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28d1f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28d1f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d1f8: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x28d1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x28d1fc: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x28d1fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x28d200: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d204: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28d204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d208: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x28d208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d20c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x28d20cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d210: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x28D210u;
    {
        const bool branch_taken_0x28d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D210u;
        // 0x28d214: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d210) {
            ctx->pc = 0x28D2ECu;
            goto label_28d2ec;
        }
    }
    ctx->pc = 0x28D218u;
label_28d218:
    // 0x28d218: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28d218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28d21c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28d220: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28d224: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28d228: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x28D228u;
    {
        const bool branch_taken_0x28d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D228u;
        // 0x28d22c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d228) {
            ctx->pc = 0x28D2F0u;
            goto label_28d2f0;
        }
    }
    ctx->pc = 0x28D230u;
label_28d230:
    // 0x28d230: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x28d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28d234: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x28d234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28d238: 0x3c01bf0b  lui         $at, 0xBF0B
    ctx->pc = 0x28d238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48907 << 16));
    // 0x28d23c: 0x3421923a  ori         $at, $at, 0x923A
    ctx->pc = 0x28d23cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37434);
    // 0x28d240: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x28d240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28d244: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x28d244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28d248: 0x3c01bd8b  lui         $at, 0xBD8B
    ctx->pc = 0x28d248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48523 << 16));
    // 0x28d24c: 0x3421e0df  ori         $at, $at, 0xE0DF
    ctx->pc = 0x28d24cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57567);
    // 0x28d250: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28d250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28d254: 0x38420223  xori        $v0, $v0, 0x223
    ctx->pc = 0x28d254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)547);
    // 0x28d258: 0x3c013f1b  lui         $at, 0x3F1B
    ctx->pc = 0x28d258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16155 << 16));
    // 0x28d25c: 0x34215dcc  ori         $at, $at, 0x5DCC
    ctx->pc = 0x28d25cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24012);
    // 0x28d260: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d264: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x28d264u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x28d268: 0x3c013ef1  lui         $at, 0x3EF1
    ctx->pc = 0x28d268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16113 << 16));
    // 0x28d26c: 0x342161e8  ori         $at, $at, 0x61E8
    ctx->pc = 0x28d26cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25064);
    // 0x28d270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d274: 0x3c013e37  lui         $at, 0x3E37
    ctx->pc = 0x28d274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15927 << 16));
    // 0x28d278: 0x342185ae  ori         $at, $at, 0x85AE
    ctx->pc = 0x28d278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34222);
    // 0x28d27c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d280: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x28d280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x28d284: 0x3421e5b8  ori         $at, $at, 0xE5B8
    ctx->pc = 0x28d284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58808);
    // 0x28d288: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d28c: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x28d28cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d290: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x28d290u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d294: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x28d294u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d298: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x28d298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28d29c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x28d29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28d2a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28D2A0u;
    {
        const bool branch_taken_0x28d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2A0u;
        // 0x28d2a4: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2a0) {
            ctx->pc = 0x28D2F4u;
            goto label_28d2f4;
        }
    }
    ctx->pc = 0x28D2A8u;
label_28d2a8:
    // 0x28d2a8: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x28d2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x28d2ac: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x28d2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x28d2b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d2b4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28d2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28d2b8: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x28d2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x28d2bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x28d2bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x28d2c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d2c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d2c4: 0x3c013ef0  lui         $at, 0x3EF0
    ctx->pc = 0x28d2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16112 << 16));
    // 0x28d2c8: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x28d2c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x28d2cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d2d0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x28d2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x28d2d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28d2d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28d2d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d2dc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x28d2dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d2e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d2e4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28d2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d2e8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x28d2e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_28d2ec:
    // 0x28d2ec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_28d2f0:
    // 0x28d2f0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x28d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_28d2f4:
    // 0x28d2f4: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x28d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28d2f8: 0x24040279  addiu       $a0, $zero, 0x279
    ctx->pc = 0x28d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x28d2fc: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D2FCu;
    {
        const bool branch_taken_0x28d2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x28d2fc) {
            ctx->pc = 0x28D300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D2FCu;
            // 0x28d300: 0x96020434  lhu         $v0, 0x434($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D324u;
            goto label_28d324;
        }
    }
    ctx->pc = 0x28D304u;
    // 0x28d304: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x28d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d308: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x28d308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28d30c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28d30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d310: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x28d310u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x28d314: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28d314u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28d318: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28d318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d31c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28d31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28d320: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x28d320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
label_28d324:
    // 0x28d324: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28d324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28d328: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28D328u;
    {
        const bool branch_taken_0x28d328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D328u;
        // 0x28d32c: 0x2402021f  addiu       $v0, $zero, 0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d328) {
            ctx->pc = 0x28D388u;
            goto label_28d388;
        }
    }
    ctx->pc = 0x28D330u;
    // 0x28d330: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28d330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28d334: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28D334u;
    {
        const bool branch_taken_0x28d334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D334u;
        // 0x28d338: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d334) {
            ctx->pc = 0x28D388u;
            goto label_28d388;
        }
    }
    ctx->pc = 0x28D33Cu;
    // 0x28d33c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D33Cu;
    {
        const bool branch_taken_0x28d33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D33Cu;
        // 0x28d340: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d33c) {
            ctx->pc = 0x28D354u;
            goto label_28d354;
        }
    }
    ctx->pc = 0x28D344u;
    // 0x28d344: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D344u;
    {
        const bool branch_taken_0x28d344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D344u;
        // 0x28d348: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d344) {
            ctx->pc = 0x28D388u;
            goto label_28d388;
        }
    }
    ctx->pc = 0x28D34Cu;
    // 0x28d34c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28D34Cu;
    {
        const bool branch_taken_0x28d34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D34Cu;
        // 0x28d350: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d34c) {
            ctx->pc = 0x28D374u;
            goto label_28d374;
        }
    }
    ctx->pc = 0x28D354u;
label_28d354:
    // 0x28d354: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x28d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x28d358: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D358u;
    {
        const bool branch_taken_0x28d358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D358u;
        // 0x28d35c: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d358) {
            ctx->pc = 0x28D370u;
            goto label_28d370;
        }
    }
    ctx->pc = 0x28D360u;
    // 0x28d360: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D360u;
    {
        const bool branch_taken_0x28d360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x28D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D360u;
        // 0x28d364: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d360) {
            ctx->pc = 0x28D374u;
            goto label_28d374;
        }
    }
    ctx->pc = 0x28D368u;
    // 0x28d368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D368u;
    {
        const bool branch_taken_0x28d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D368u;
        // 0x28d36c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d368) {
            ctx->pc = 0x28D374u;
            goto label_28d374;
        }
    }
    ctx->pc = 0x28D370u;
label_28d370:
    // 0x28d370: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x28d370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_28d374:
    // 0x28d374: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d378: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x28d378u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x28d37c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28d37cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28d380: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28d380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d384: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28d384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_28d388:
    // 0x28d388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d38c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28d38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d390: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x28d390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d394: 0xc073c58  jal         func_1CF160
    ctx->pc = 0x28D394u;
    SET_GPR_U32(ctx, 31, 0x28D39Cu);
    ctx->pc = 0x28D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D394u;
    // 0x28d398: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x28D394u, 0x28D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D39Cu;
label_28d39c:
    // 0x28d39c: 0x24020369  addiu       $v0, $zero, 0x369
    ctx->pc = 0x28d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
    // 0x28d3a0: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D3A0u;
    {
        const bool branch_taken_0x28d3a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d3a0) {
            ctx->pc = 0x28D3B0u;
            goto label_28d3b0;
        }
    }
    ctx->pc = 0x28D3A8u;
    // 0x28d3a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28D3A8u;
    {
        const bool branch_taken_0x28d3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3A8u;
        // 0x28d3ac: 0xae111634  sw          $s1, 0x1634($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5684), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3a8) {
            ctx->pc = 0x28D3BCu;
            goto label_28d3bc;
        }
    }
    ctx->pc = 0x28D3B0u;
label_28d3b0:
    // 0x28d3b0: 0xc0741e6  jal         func_1D0798
    ctx->pc = 0x28D3B0u;
    SET_GPR_U32(ctx, 31, 0x28D3B8u);
    ctx->pc = 0x28D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3B0u;
    // 0x28d3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0798u, 0x28D3B0u, 0x28D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3B8u;
label_28d3b8:
    // 0x28d3b8: 0xae111648  sw          $s1, 0x1648($s0)
    ctx->pc = 0x28d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5704), GPR_U32(ctx, 17));
label_28d3bc:
    // 0x28d3bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28d3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d3c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28d3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d3c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28d3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d3c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x28D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3CCu;
        // 0x28d3d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D3D4u;
    // 0x28d3d4: 0x0  nop
    ctx->pc = 0x28d3d4u;
    // NOP
    ctx->pc = 0x28d3d8u;
}
