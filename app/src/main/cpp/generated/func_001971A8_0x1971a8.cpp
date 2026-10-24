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

// Function: func_001971A8
// Address: 0x1971a8 - 0x197430
void func_001971A8_0x1971a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001971A8_0x1971a8");
#endif

    switch (ctx->pc) {
        case 0x19729cu: goto label_19729c;
        case 0x1972c0u: goto label_1972c0;
        case 0x1972e0u: goto label_1972e0;
        case 0x1972f4u: goto label_1972f4;
        case 0x197308u: goto label_197308;
        case 0x19731cu: goto label_19731c;
        case 0x197330u: goto label_197330;
        case 0x1973a0u: goto label_1973a0;
        case 0x1973acu: goto label_1973ac;
        case 0x1973b8u: goto label_1973b8;
        case 0x1973c8u: goto label_1973c8;
        case 0x1973d4u: goto label_1973d4;
        case 0x1973e0u: goto label_1973e0;
        case 0x197408u: goto label_197408;
        default: break;
    }

    ctx->pc = 0x1971a8u;

    // 0x1971a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1971a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1971ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1971acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971b0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1971b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1971b4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1971b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1971b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1971b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971bc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1971bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1971c0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1971c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1971c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1971c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1971c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1971ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1971d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1971d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971d4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1971d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1971d8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1971d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1971dc: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1971dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1971e0: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1971E0u;
    {
        const bool branch_taken_0x1971e0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1971E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971E0u;
        // 0x1971e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971e0) {
            ctx->pc = 0x1971ECu;
            goto label_1971ec;
        }
    }
    ctx->pc = 0x1971E8u;
    // 0x1971e8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1971e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1971ec:
    // 0x1971ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1971ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1971f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1971F0u;
    {
        const bool branch_taken_0x1971f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971F0u;
        // 0x1971f4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971f0) {
            ctx->pc = 0x197208u;
            goto label_197208;
        }
    }
    ctx->pc = 0x1971F8u;
    // 0x1971f8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1971f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1971fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1971fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197200u;
    {
        const bool branch_taken_0x197200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197200u;
        // 0x197204: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197200) {
            ctx->pc = 0x19720Cu;
            goto label_19720c;
        }
    }
    ctx->pc = 0x197208u;
label_197208:
    // 0x197208: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x197208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19720c:
    // 0x19720c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x197210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x197210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197214: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x197214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x197218: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x197218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x19721c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x19721cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x197220: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x197220u;
    {
        const bool branch_taken_0x197220 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x197224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197220u;
        // 0x197224: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197220) {
            ctx->pc = 0x197230u;
            goto label_197230;
        }
    }
    ctx->pc = 0x197228u;
    // 0x197228: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x197228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19722c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197230:
    // 0x197230: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x197230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x197234: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197234u;
    {
        const bool branch_taken_0x197234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197234u;
        // 0x197238: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197234) {
            ctx->pc = 0x19724Cu;
            goto label_19724c;
        }
    }
    ctx->pc = 0x19723Cu;
    // 0x19723c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x197240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197244u;
    {
        const bool branch_taken_0x197244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197244u;
        // 0x197248: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197244) {
            ctx->pc = 0x197250u;
            goto label_197250;
        }
    }
    ctx->pc = 0x19724Cu;
label_19724c:
    // 0x19724c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19724cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197250:
    // 0x197250: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x197254: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x197254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197258: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x197258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19725c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19725cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x197260: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x197260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x197264: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x197264u;
    {
        const bool branch_taken_0x197264 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x197268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197264u;
        // 0x197268: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197264) {
            ctx->pc = 0x197274u;
            goto label_197274;
        }
    }
    ctx->pc = 0x19726Cu;
    // 0x19726c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19726cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197274:
    // 0x197274: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x197274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x197278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197278u;
    {
        const bool branch_taken_0x197278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197278u;
        // 0x19727c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197278) {
            ctx->pc = 0x197290u;
            goto label_197290;
        }
    }
    ctx->pc = 0x197280u;
    // 0x197280: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x197280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x197284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197288u;
    {
        const bool branch_taken_0x197288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197288u;
        // 0x19728c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197288) {
            ctx->pc = 0x197294u;
            goto label_197294;
        }
    }
    ctx->pc = 0x197290u;
label_197290:
    // 0x197290: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x197290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197294:
    // 0x197294: 0xc054074  jal         func_1501D0
    ctx->pc = 0x197294u;
    SET_GPR_U32(ctx, 31, 0x19729Cu);
    ctx->pc = 0x197298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197294u;
    // 0x197298: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x197294u, 0x19729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19729Cu;
label_19729c:
    // 0x19729c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19729cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1972a0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1972a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1972a4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1972a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1972a8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1972a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1972ac: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1972acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1972b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1972b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1972b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1972b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1972b8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1972B8u;
    SET_GPR_U32(ctx, 31, 0x1972C0u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1972B8u, 0x1972C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972C0u;
label_1972c0:
    // 0x1972c0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1972c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1972c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1972c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1972c8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1972c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1972cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1972ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1972d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1972d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1972d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1972d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1972d8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1972D8u;
    SET_GPR_U32(ctx, 31, 0x1972E0u);
    ctx->pc = 0x1972DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972D8u;
    // 0x1972dc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1972D8u, 0x1972E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972E0u;
label_1972e0:
    // 0x1972e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1972e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1972e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1972e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1972e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1972e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1972ec: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1972ECu;
    SET_GPR_U32(ctx, 31, 0x1972F4u);
    ctx->pc = 0x1972F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972ECu;
    // 0x1972f0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1972ECu, 0x1972F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972F4u;
label_1972f4:
    // 0x1972f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1972f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1972f8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1972f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1972fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1972fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x197300: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x197300u;
    SET_GPR_U32(ctx, 31, 0x197308u);
    ctx->pc = 0x197304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197300u;
    // 0x197304: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x197300u, 0x197308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197308u;
label_197308:
    // 0x197308: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x197308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19730c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x19730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197310: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x197310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x197314: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x197314u;
    SET_GPR_U32(ctx, 31, 0x19731Cu);
    ctx->pc = 0x197318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197314u;
    // 0x197318: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x197314u, 0x19731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19731Cu;
label_19731c:
    // 0x19731c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19731cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x197320: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x197320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197324: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x197324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x197328: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x197328u;
    SET_GPR_U32(ctx, 31, 0x197330u);
    ctx->pc = 0x19732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197328u;
    // 0x19732c: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x197328u, 0x197330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197330u;
label_197330:
    // 0x197330: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x197330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x197334: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x197334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197338: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x197338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19733c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19733cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197340: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x197340u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x197344: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x197344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x197348: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x197348u;
    {
        const bool branch_taken_0x197348 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197348u;
        // 0x19734c: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x197348) {
            ctx->pc = 0x197354u;
            goto label_197354;
        }
    }
    ctx->pc = 0x197350u;
    // 0x197350: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x197350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_197354:
    // 0x197354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x197354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x197358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197358u;
    {
        const bool branch_taken_0x197358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197358u;
        // 0x19735c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197358) {
            ctx->pc = 0x197370u;
            goto label_197370;
        }
    }
    ctx->pc = 0x197360u;
    // 0x197360: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x197360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x197364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197368u;
    {
        const bool branch_taken_0x197368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197368u;
        // 0x19736c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197368) {
            ctx->pc = 0x197374u;
            goto label_197374;
        }
    }
    ctx->pc = 0x197370u;
label_197370:
    // 0x197370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197374:
    // 0x197374: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x197374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x197378: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x197378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x19737c: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x19737cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197384: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x197384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x197388: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x197388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x19738c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19738cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x197390: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x197394: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x197394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x197398: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x197398u;
    SET_GPR_U32(ctx, 31, 0x1973A0u);
    ctx->pc = 0x19739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197398u;
    // 0x19739c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x197398u, 0x1973A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973A0u;
label_1973a0:
    // 0x1973a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1973a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973a4: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1973A4u;
    SET_GPR_U32(ctx, 31, 0x1973ACu);
    ctx->pc = 0x1973A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973A4u;
    // 0x1973a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1973A4u, 0x1973ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973ACu;
label_1973ac:
    // 0x1973ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1973acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973b0: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1973B0u;
    SET_GPR_U32(ctx, 31, 0x1973B8u);
    ctx->pc = 0x1973B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973B0u;
    // 0x1973b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1973B0u, 0x1973B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973B8u;
label_1973b8:
    // 0x1973b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1973b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1973bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973c0: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1973C0u;
    SET_GPR_U32(ctx, 31, 0x1973C8u);
    ctx->pc = 0x1973C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973C0u;
    // 0x1973c4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1973C0u, 0x1973C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973C8u;
label_1973c8:
    // 0x1973c8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1973cc: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1973CCu;
    SET_GPR_U32(ctx, 31, 0x1973D4u);
    ctx->pc = 0x1973D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973CCu;
    // 0x1973d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1973CCu, 0x1973D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973D4u;
label_1973d4:
    // 0x1973d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1973d8: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1973D8u;
    SET_GPR_U32(ctx, 31, 0x1973E0u);
    ctx->pc = 0x1973DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973D8u;
    // 0x1973dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1973D8u, 0x1973E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973E0u;
label_1973e0:
    // 0x1973e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1973e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1973e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1973e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1973e8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1973e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1973ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1973ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1973f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1973f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1973f8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1973f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1973fc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1973fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x197400: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x197400u;
    SET_GPR_U32(ctx, 31, 0x197408u);
    ctx->pc = 0x197404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197400u;
    // 0x197404: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x197400u, 0x197408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197408u;
label_197408:
    // 0x197408: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x197408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x19740c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19740cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x197410: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x197410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x197414: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x197414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197418: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x197418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19741c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19741cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197420: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x197420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x197424: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x197424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x197428: 0x3e00008  jr          $ra
    ctx->pc = 0x197428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197428u;
        // 0x19742c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197430u;
}
