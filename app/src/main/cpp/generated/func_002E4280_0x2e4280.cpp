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

// Function: func_002E4280
// Address: 0x2e4280 - 0x2e4e70
void func_002E4280_0x2e4280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E4280_0x2e4280");
#endif

    switch (ctx->pc) {
        case 0x2e42b4u: goto label_2e42b4;
        case 0x2e44e8u: goto label_2e44e8;
        case 0x2e4508u: goto label_2e4508;
        case 0x2e4558u: goto label_2e4558;
        case 0x2e4568u: goto label_2e4568;
        case 0x2e4574u: goto label_2e4574;
        case 0x2e4584u: goto label_2e4584;
        case 0x2e4590u: goto label_2e4590;
        case 0x2e45a0u: goto label_2e45a0;
        case 0x2e45b8u: goto label_2e45b8;
        case 0x2e4748u: goto label_2e4748;
        case 0x2e47ecu: goto label_2e47ec;
        case 0x2e4800u: goto label_2e4800;
        case 0x2e4854u: goto label_2e4854;
        case 0x2e4864u: goto label_2e4864;
        case 0x2e4870u: goto label_2e4870;
        case 0x2e4880u: goto label_2e4880;
        case 0x2e488cu: goto label_2e488c;
        case 0x2e48a0u: goto label_2e48a0;
        case 0x2e48bcu: goto label_2e48bc;
        case 0x2e4b38u: goto label_2e4b38;
        case 0x2e4b98u: goto label_2e4b98;
        case 0x2e4bd0u: goto label_2e4bd0;
        default: break;
    }

    ctx->pc = 0x2e4280u;

    // 0x2e4280: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2e4280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2e4284: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2e4284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x2e4288: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e428c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2e428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x2e4290: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2e4290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x2e4294: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2e4294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x2e4298: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2e4298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x2e429c: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2e429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x2e42a0: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2e42a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x2e42a4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2e42a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2e42a8: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x2e42a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2e42ac: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2E42ACu;
    SET_GPR_U32(ctx, 31, 0x2E42B4u);
    ctx->pc = 0x2E42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42ACu;
    // 0x2e42b0: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2E42ACu, 0x2E42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42B4u;
label_2e42b4:
    // 0x2e42b4: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e42b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e42b8: 0x108002e1  beqz        $a0, . + 4 + (0x2E1 << 2)
    ctx->pc = 0x2E42B8u;
    {
        const bool branch_taken_0x2e42b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42B8u;
        // 0x2e42bc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42b8) {
            ctx->pc = 0x2E4E40u;
            goto label_2e4e40;
        }
    }
    ctx->pc = 0x2E42C0u;
    // 0x2e42c0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2e42c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e42c4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2e42c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e42c8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2e42c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e42cc: 0x8e23032c  lw          $v1, 0x32C($s1)
    ctx->pc = 0x2e42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x2e42d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E42D0u;
    {
        const bool branch_taken_0x2e42d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42D0u;
        // 0x2e42d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42d0) {
            ctx->pc = 0x2E42E0u;
            goto label_2e42e0;
        }
    }
    ctx->pc = 0x2E42D8u;
    // 0x2e42d8: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E42D8u;
    {
        const bool branch_taken_0x2e42d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e42d8) {
            ctx->pc = 0x2E42DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E42D8u;
            // 0x2e42dc: 0x908302b4  lbu         $v1, 0x2B4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E43A0u;
            goto label_2e43a0;
        }
    }
    ctx->pc = 0x2E42E0u;
label_2e42e0:
    // 0x2e42e0: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e42e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e42e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e42e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e42e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e42ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E42ECu;
    {
        const bool branch_taken_0x2e42ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42ECu;
        // 0x2e42f0: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42ec) {
            ctx->pc = 0x2E4300u;
            goto label_2e4300;
        }
    }
    ctx->pc = 0x2E42F4u;
    // 0x2e42f4: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e42f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E42F8u;
    {
        const bool branch_taken_0x2e42f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42F8u;
        // 0x2e42fc: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42f8) {
            ctx->pc = 0x2E4304u;
            goto label_2e4304;
        }
    }
    ctx->pc = 0x2E4300u;
label_2e4300:
    // 0x2e4300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4304:
    // 0x2e4304: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e4304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e430c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e430cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4310: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4314: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2e4314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e4318: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2e4318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e431c: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2e431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4320: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2e4320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e4324: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2e4324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2e4328: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2e4328u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e432c: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E432Cu;
    {
        const bool branch_taken_0x2e432c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E432Cu;
        // 0x2e4330: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e432c) {
            ctx->pc = 0x2E434Cu;
            goto label_2e434c;
        }
    }
    ctx->pc = 0x2E4334u;
    // 0x2e4334: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2e4334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4338: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2e4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e433c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2e433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4340: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e4340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e4344: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e4344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e4348: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e4348u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e434c:
    // 0x2e434c: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e434cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e4350: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e4350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e4354: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e4354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e4358: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e4358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e435c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E435Cu;
    {
        const bool branch_taken_0x2e435c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E435Cu;
        // 0x2e4360: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e435c) {
            ctx->pc = 0x2E4370u;
            goto label_2e4370;
        }
    }
    ctx->pc = 0x2E4364u;
    // 0x2e4364: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e4364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e4368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4368u;
    {
        const bool branch_taken_0x2e4368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4368u;
        // 0x2e436c: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4368) {
            ctx->pc = 0x2E4374u;
            goto label_2e4374;
        }
    }
    ctx->pc = 0x2E4370u;
label_2e4370:
    // 0x2e4370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4374:
    // 0x2e4374: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e4374u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e437c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e437cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4380: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e4380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4384: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2e4384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4388: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2e4388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e438c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e4390: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2e4390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e4394: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2e4394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e4398: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E4398u;
    {
        const bool branch_taken_0x2e4398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4398u;
        // 0x2e439c: 0xe7a3007c  swc1        $f3, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4398) {
            ctx->pc = 0x2E445Cu;
            goto label_2e445c;
        }
    }
    ctx->pc = 0x2E43A0u;
label_2e43a0:
    // 0x2e43a0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e43a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e43a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e43a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E43A8u;
    {
        const bool branch_taken_0x2e43a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43A8u;
        // 0x2e43ac: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43a8) {
            ctx->pc = 0x2E43BCu;
            goto label_2e43bc;
        }
    }
    ctx->pc = 0x2E43B0u;
    // 0x2e43b0: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e43b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E43B4u;
    {
        const bool branch_taken_0x2e43b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43B4u;
        // 0x2e43b8: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43b4) {
            ctx->pc = 0x2E43C0u;
            goto label_2e43c0;
        }
    }
    ctx->pc = 0x2E43BCu;
label_2e43bc:
    // 0x2e43bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e43bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e43c0:
    // 0x2e43c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e43c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e43c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e43c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e43c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e43cc: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e43ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e43d0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2e43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e43d4: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x2e43d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e43d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e43d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43dc: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x2e43dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e43e0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2e43e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e43e4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2e43e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e43e8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2e43e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e43ec: 0x13a50007  beq         $sp, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E43ECu;
    {
        const bool branch_taken_0x2e43ec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43ECu;
        // 0x2e43f0: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43ec) {
            ctx->pc = 0x2E440Cu;
            goto label_2e440c;
        }
    }
    ctx->pc = 0x2E43F4u;
    // 0x2e43f4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2e43f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e43f8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2e43f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e43fc: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2e43fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4400: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e4400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e4404: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e4404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e4408: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e4408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e440c:
    // 0x2e440c: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e440cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e4410: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2e4410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e4414: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e4414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e4418: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e4418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e441c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E441Cu;
    {
        const bool branch_taken_0x2e441c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E441Cu;
        // 0x2e4420: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e441c) {
            ctx->pc = 0x2E4430u;
            goto label_2e4430;
        }
    }
    ctx->pc = 0x2E4424u;
    // 0x2e4424: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e4424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e4428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4428u;
    {
        const bool branch_taken_0x2e4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4428u;
        // 0x2e442c: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4428) {
            ctx->pc = 0x2E4434u;
            goto label_2e4434;
        }
    }
    ctx->pc = 0x2E4430u;
label_2e4430:
    // 0x2e4430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4434:
    // 0x2e4434: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e4434u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e443c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e443cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4440: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e4440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4444: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2e4444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4448: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2e4448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e444c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e444cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e4450: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2e4450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e4454: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2e4454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e4458: 0xe4a3000c  swc1        $f3, 0xC($a1)
    ctx->pc = 0x2e4458u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_2e445c:
    // 0x2e445c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e445cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e4460: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e4460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e4464: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2e4464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e4468: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2e4468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e446c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2e446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e4470: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2e4470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e4474: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2e4474u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4478: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2e4478u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e447c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e447cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e4480: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e4480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4484: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e4484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4488: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2e4488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e448c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2e448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4490: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x2e4490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e4494: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2e4494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2e4498: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2e4498u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2e449c: 0x46030880  add.s       $f2, $f1, $f3
    ctx->pc = 0x2e449cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2e44a0: 0x0  nop
    ctx->pc = 0x2e44a0u;
    // NOP
    // 0x2e44a4: 0x0  nop
    ctx->pc = 0x2e44a4u;
    // NOP
    // 0x2e44a8: 0x46020544  c1          0x20544
    ctx->pc = 0x2e44a8u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[2]);
    // 0x2e44ac: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2e44acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e44b0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2e44b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e44b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e44b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e44b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2e44b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2e44bc: 0x0  nop
    ctx->pc = 0x2e44bcu;
    // NOP
    // 0x2e44c0: 0x0  nop
    ctx->pc = 0x2e44c0u;
    // NOP
    // 0x2e44c4: 0x46010504  c1          0x10504
    ctx->pc = 0x2e44c4u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x2e44c8: 0x8e2602f8  lw          $a2, 0x2F8($s1)
    ctx->pc = 0x2e44c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e44cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e44ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44d0: 0x8e2402bc  lw          $a0, 0x2BC($s1)
    ctx->pc = 0x2e44d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2e44d4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2e44d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44d8: 0x631c0  sll         $a2, $a2, 7
    ctx->pc = 0x2e44d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x2e44dc: 0x8e25030c  lw          $a1, 0x30C($s1)
    ctx->pc = 0x2e44dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e44e0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x2E44E0u;
    SET_GPR_U32(ctx, 31, 0x2E44E8u);
    ctx->pc = 0x2E44E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44E0u;
    // 0x2e44e4: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x2E44E0u, 0x2E44E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44E8u;
label_2e44e8:
    // 0x2e44e8: 0x8e2202f8  lw          $v0, 0x2F8($s1)
    ctx->pc = 0x2e44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e44ec: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2e44ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e44f0: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2e44f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e44f4: 0x28042  srl         $s0, $v0, 1
    ctx->pc = 0x2e44f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e44f8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2e44f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e44fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E44FCu;
    {
        const bool branch_taken_0x2e44fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44FCu;
        // 0x2e4500: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44fc) {
            ctx->pc = 0x2E4528u;
            goto label_2e4528;
        }
    }
    ctx->pc = 0x2E4504u;
    // 0x2e4504: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2e4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_2e4508:
    // 0x2e4508: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2e4508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2e450c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e450cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e4510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e4510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e4514: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x2e4514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e4518: 0x8e2202f8  lw          $v0, 0x2F8($s1)
    ctx->pc = 0x2e4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e451c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2e451cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e4520: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E4520u;
    {
        const bool branch_taken_0x2e4520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4520) {
            ctx->pc = 0x2E4524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4520u;
            // 0x2e4524: 0x8e2202bc  lw          $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4508;
        }
    }
    ctx->pc = 0x2E4528u;
label_2e4528:
    // 0x2e4528: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2e4528u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e452c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2e452cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e4530: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2e4530u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2e4534: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2e4534u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2e4538: 0xfa440030  sqc2        $vf4, 0x30($s2)
    ctx->pc = 0x2e4538u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e453c: 0xfa450020  sqc2        $vf5, 0x20($s2)
    ctx->pc = 0x2e453cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2e4540: 0xfa460010  sqc2        $vf6, 0x10($s2)
    ctx->pc = 0x2e4540u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2e4544: 0xfa470000  sqc2        $vf7, 0x0($s2)
    ctx->pc = 0x2e4544u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2e4548: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x2e4548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e454c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e454cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2e4550: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2E4550u;
    SET_GPR_U32(ctx, 31, 0x2E4558u);
    ctx->pc = 0x2E4554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4550u;
    // 0x2e4554: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2E4550u, 0x2E4558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4558u;
label_2e4558:
    // 0x2e4558: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2e4558u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2e455c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e455cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4560: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x2E4560u;
    SET_GPR_U32(ctx, 31, 0x2E4568u);
    ctx->pc = 0x2E4564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4560u;
    // 0x2e4564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x2E4560u, 0x2E4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4568u;
label_2e4568:
    // 0x2e4568: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2e4568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e456c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2E456Cu;
    SET_GPR_U32(ctx, 31, 0x2E4574u);
    ctx->pc = 0x2E4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E456Cu;
    // 0x2e4570: 0xc7ad0078  lwc1        $f13, 0x78($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2E456Cu, 0x2E4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4574u;
label_2e4574:
    // 0x2e4574: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e4574u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e4578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e457c: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x2E457Cu;
    SET_GPR_U32(ctx, 31, 0x2E4584u);
    ctx->pc = 0x2E4580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E457Cu;
    // 0x2e4580: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x2E457Cu, 0x2E4584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4584u;
label_2e4584:
    // 0x2e4584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e4584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4588: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2E4588u;
    SET_GPR_U32(ctx, 31, 0x2E4590u);
    ctx->pc = 0x2E458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4588u;
    // 0x2e458c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2E4588u, 0x2E4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4590u;
label_2e4590:
    // 0x2e4590: 0x8e2202f8  lw          $v0, 0x2F8($s1)
    ctx->pc = 0x2e4590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e4594: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2E4594u;
    {
        const bool branch_taken_0x2e4594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4594) {
            ctx->pc = 0x2E4598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4594u;
            // 0x2e4598: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E45CCu;
            goto label_2e45cc;
        }
    }
    ctx->pc = 0x2E459Cu;
    // 0x2e459c: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2e459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_2e45a0:
    // 0x2e45a0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2e45a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2e45a4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e45a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e45a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e45a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e45ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e45acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e45b0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E45B0u;
    SET_GPR_U32(ctx, 31, 0x2E45B8u);
    ctx->pc = 0x2E45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45B0u;
    // 0x2e45b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E45B0u, 0x2E45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45B8u;
label_2e45b8:
    // 0x2e45b8: 0x8e2202f8  lw          $v0, 0x2F8($s1)
    ctx->pc = 0x2e45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e45bc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2e45bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e45c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E45C0u;
    {
        const bool branch_taken_0x2e45c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e45c0) {
            ctx->pc = 0x2E45C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E45C0u;
            // 0x2e45c4: 0x8e2202bc  lw          $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E45A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e45a0;
        }
    }
    ctx->pc = 0x2E45C8u;
    // 0x2e45c8: 0x8e220308  lw          $v0, 0x308($s1)
    ctx->pc = 0x2e45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_2e45cc:
    // 0x2e45cc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e45ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e45d0: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2E45D0u;
    {
        const bool branch_taken_0x2e45d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45D0u;
        // 0x2e45d4: 0x8e23032c  lw          $v1, 0x32C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45d0) {
            ctx->pc = 0x2E48D0u;
            goto label_2e48d0;
        }
    }
    ctx->pc = 0x2E45D8u;
    // 0x2e45d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E45D8u;
    {
        const bool branch_taken_0x2e45d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45D8u;
        // 0x2e45dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45d8) {
            ctx->pc = 0x2E45E8u;
            goto label_2e45e8;
        }
    }
    ctx->pc = 0x2E45E0u;
    // 0x2e45e0: 0x5062002b  beql        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E45E0u;
    {
        const bool branch_taken_0x2e45e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e45e0) {
            ctx->pc = 0x2E45E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E45E0u;
            // 0x2e45e4: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4690u;
            goto label_2e4690;
        }
    }
    ctx->pc = 0x2E45E8u;
label_2e45e8:
    // 0x2e45e8: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e45e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e45ec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e45f0: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e45f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e45f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e45f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e45f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E45F8u;
    {
        const bool branch_taken_0x2e45f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45F8u;
        // 0x2e45fc: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45f8) {
            ctx->pc = 0x2E460Cu;
            goto label_2e460c;
        }
    }
    ctx->pc = 0x2E4600u;
    // 0x2e4600: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e4600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e4604: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4604u;
    {
        const bool branch_taken_0x2e4604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4604u;
        // 0x2e4608: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4604) {
            ctx->pc = 0x2E4610u;
            goto label_2e4610;
        }
    }
    ctx->pc = 0x2E460Cu;
label_2e460c:
    // 0x2e460c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e460cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4610:
    // 0x2e4610: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e4610u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4614: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4618: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e4618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e461c: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4620: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2e4620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4624: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2e4624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4628: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e4628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e462c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e462cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e4630: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e4630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e4634: 0x13b30007  beq         $sp, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4634u;
    {
        const bool branch_taken_0x2e4634 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4634u;
        // 0x2e4638: 0xe663000c  swc1        $f3, 0xC($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4634) {
            ctx->pc = 0x2E4654u;
            goto label_2e4654;
        }
    }
    ctx->pc = 0x2E463Cu;
    // 0x2e463c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2e463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4640: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2e4640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4644: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2e4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4648: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e4648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e464c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e464cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e4650: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e4650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e4654:
    // 0x2e4654: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x2e4654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x2e4658: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e4658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e465c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e465cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4660: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e4660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e4664: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2e4664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2e4668: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e4668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e466c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2e466cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2e4670: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e4670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e4674: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x2e4674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e4678: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2e4678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e467c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E467Cu;
    {
        const bool branch_taken_0x2e467c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E467Cu;
        // 0x2e4680: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e467c) {
            ctx->pc = 0x2E4734u;
            goto label_2e4734;
        }
    }
    ctx->pc = 0x2E4684u;
    // 0x2e4684: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e4684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e4688: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2E4688u;
    {
        const bool branch_taken_0x2e4688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4688u;
        // 0x2e468c: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4688) {
            ctx->pc = 0x2E4738u;
            goto label_2e4738;
        }
    }
    ctx->pc = 0x2E4690u;
label_2e4690:
    // 0x2e4690: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2e4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e4694: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e4694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e4698: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e4698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e469c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E469Cu;
    {
        const bool branch_taken_0x2e469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E469Cu;
        // 0x2e46a0: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e469c) {
            ctx->pc = 0x2E46B0u;
            goto label_2e46b0;
        }
    }
    ctx->pc = 0x2E46A4u;
    // 0x2e46a4: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e46a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E46A8u;
    {
        const bool branch_taken_0x2e46a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46A8u;
        // 0x2e46ac: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e46a8) {
            ctx->pc = 0x2E46B4u;
            goto label_2e46b4;
        }
    }
    ctx->pc = 0x2E46B0u;
label_2e46b0:
    // 0x2e46b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e46b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e46b4:
    // 0x2e46b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e46b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e46b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e46bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e46bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e46c0: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e46c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e46c4: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2e46c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e46c8: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2e46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e46cc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e46ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e46d0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e46d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e46d4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e46d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e46d8: 0x13b30007  beq         $sp, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E46D8u;
    {
        const bool branch_taken_0x2e46d8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46D8u;
        // 0x2e46dc: 0xe663000c  swc1        $f3, 0xC($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e46d8) {
            ctx->pc = 0x2E46F8u;
            goto label_2e46f8;
        }
    }
    ctx->pc = 0x2E46E0u;
    // 0x2e46e0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2e46e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e46e4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2e46e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e46e8: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2e46e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e46ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e46ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e46f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e46f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e46f4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e46f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e46f8:
    // 0x2e46f8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e46f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2e46fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e46fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e4700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4704: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e4704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e4708: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2e4708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2e470c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e4710: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2e4710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2e4714: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e4714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e4718: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x2e4718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e471c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2e471cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e4720: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4720u;
    {
        const bool branch_taken_0x2e4720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4720u;
        // 0x2e4724: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4720) {
            ctx->pc = 0x2E4734u;
            goto label_2e4734;
        }
    }
    ctx->pc = 0x2E4728u;
    // 0x2e4728: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e472c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E472Cu;
    {
        const bool branch_taken_0x2e472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E472Cu;
        // 0x2e4730: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e472c) {
            ctx->pc = 0x2E4738u;
            goto label_2e4738;
        }
    }
    ctx->pc = 0x2E4734u;
label_2e4734:
    // 0x2e4734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4738:
    // 0x2e4738: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e4738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e473c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2e473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2e4740: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E4740u;
    SET_GPR_U32(ctx, 31, 0x2E4748u);
    ctx->pc = 0x2E4744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4740u;
    // 0x2e4744: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E4740u, 0x2E4748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4748u;
label_2e4748:
    // 0x2e4748: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2e4748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e474c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2e474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4750: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2e4750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4754: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e4754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e4758: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e4758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e475c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2e475cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e4760: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2e4760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e4764: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x2e4764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e4768: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2e4768u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2e476c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2e476cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4770: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e4770u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e4774: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e4774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4778: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e4778u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e477c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4780: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2e4780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4784: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2e4784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4788: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2e4788u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e478c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2e478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4790: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x2e4790u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2e4794: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e4794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e4798: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2e4798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e479c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2e479cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e47a0: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x2e47a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2e47a4: 0x0  nop
    ctx->pc = 0x2e47a4u;
    // NOP
    // 0x2e47a8: 0x0  nop
    ctx->pc = 0x2e47a8u;
    // NOP
    // 0x2e47ac: 0x46000544  c1          0x544
    ctx->pc = 0x2e47acu;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2e47b0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2e47b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2e47b4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2e47b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2e47b8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2e47b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2e47bc: 0x0  nop
    ctx->pc = 0x2e47bcu;
    // NOP
    // 0x2e47c0: 0x0  nop
    ctx->pc = 0x2e47c0u;
    // NOP
    // 0x2e47c4: 0x46030504  c1          0x30504
    ctx->pc = 0x2e47c4u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[3]);
    // 0x2e47c8: 0x8e2602f8  lw          $a2, 0x2F8($s1)
    ctx->pc = 0x2e47c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e47cc: 0x8e2402bc  lw          $a0, 0x2BC($s1)
    ctx->pc = 0x2e47ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2e47d0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2e47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e47d4: 0x8e25030c  lw          $a1, 0x30C($s1)
    ctx->pc = 0x2e47d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e47d8: 0x631c0  sll         $a2, $a2, 7
    ctx->pc = 0x2e47d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x2e47dc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2e47dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e47e0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2e47e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e47e4: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x2E47E4u;
    SET_GPR_U32(ctx, 31, 0x2E47ECu);
    ctx->pc = 0x2E47E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47E4u;
    // 0x2e47e8: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x2E47E4u, 0x2E47ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47ECu;
label_2e47ec:
    // 0x2e47ec: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x2e47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e47f0: 0x38042  srl         $s0, $v1, 1
    ctx->pc = 0x2e47f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2e47f4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2e47f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e47f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E47F8u;
    {
        const bool branch_taken_0x2e47f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47F8u;
        // 0x2e47fc: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47f8) {
            ctx->pc = 0x2E4824u;
            goto label_2e4824;
        }
    }
    ctx->pc = 0x2E4800u;
label_2e4800:
    // 0x2e4800: 0x8e2302bc  lw          $v1, 0x2BC($s1)
    ctx->pc = 0x2e4800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2e4804: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e4804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e4808: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e4808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e480c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4810: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2e4810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e4814: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x2e4814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e4818: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2e4818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e481c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E481Cu;
    {
        const bool branch_taken_0x2e481c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E481Cu;
        // 0x2e4820: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e481c) {
            ctx->pc = 0x2E4800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4800;
        }
    }
    ctx->pc = 0x2E4824u;
label_2e4824:
    // 0x2e4824: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2e4824u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e4828: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2e4828u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e482c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2e482cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2e4830: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2e4830u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2e4834: 0xfa440030  sqc2        $vf4, 0x30($s2)
    ctx->pc = 0x2e4834u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4838: 0xfa450020  sqc2        $vf5, 0x20($s2)
    ctx->pc = 0x2e4838u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2e483c: 0xfa460010  sqc2        $vf6, 0x10($s2)
    ctx->pc = 0x2e483cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2e4840: 0xfa470000  sqc2        $vf7, 0x0($s2)
    ctx->pc = 0x2e4840u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2e4844: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x2e4844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4848: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e4848u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2e484c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2E484Cu;
    SET_GPR_U32(ctx, 31, 0x2E4854u);
    ctx->pc = 0x2E4850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E484Cu;
    // 0x2e4850: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2E484Cu, 0x2E4854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4854u;
label_2e4854:
    // 0x2e4854: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2e4854u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2e4858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e485c: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x2E485Cu;
    SET_GPR_U32(ctx, 31, 0x2E4864u);
    ctx->pc = 0x2E4860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E485Cu;
    // 0x2e4860: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x2E485Cu, 0x2E4864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4864u;
label_2e4864:
    // 0x2e4864: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2e4864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4868: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2E4868u;
    SET_GPR_U32(ctx, 31, 0x2E4870u);
    ctx->pc = 0x2E486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4868u;
    // 0x2e486c: 0xc7ad0078  lwc1        $f13, 0x78($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2E4868u, 0x2E4870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4870u;
label_2e4870:
    // 0x2e4870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4874: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e4874u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e4878: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x2E4878u;
    SET_GPR_U32(ctx, 31, 0x2E4880u);
    ctx->pc = 0x2E487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4878u;
    // 0x2e487c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x2E4878u, 0x2E4880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4880u;
label_2e4880:
    // 0x2e4880: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e4880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4884: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2E4884u;
    SET_GPR_U32(ctx, 31, 0x2E488Cu);
    ctx->pc = 0x2E4888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4884u;
    // 0x2e4888: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2E4884u, 0x2E488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E488Cu;
label_2e488c:
    // 0x2e488c: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x2e488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e4890: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E4890u;
    {
        const bool branch_taken_0x2e4890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4890) {
            ctx->pc = 0x2E4894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4890u;
            // 0x2e4894: 0x8e23032c  lw          $v1, 0x32C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E48D0u;
            goto label_2e48d0;
        }
    }
    ctx->pc = 0x2E4898u;
    // 0x2e4898: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2e4898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e489c: 0x0  nop
    ctx->pc = 0x2e489cu;
    // NOP
label_2e48a0:
    // 0x2e48a0: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2e48a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2e48a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e48a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e48a8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e48a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e48ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e48acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e48b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e48b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e48b4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E48B4u;
    SET_GPR_U32(ctx, 31, 0x2E48BCu);
    ctx->pc = 0x2E48B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48B4u;
    // 0x2e48b8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E48B4u, 0x2E48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48BCu;
label_2e48bc:
    // 0x2e48bc: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x2e48bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e48c0: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2e48c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e48c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E48C4u;
    {
        const bool branch_taken_0x2e48c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48C4u;
        // 0x2e48c8: 0x2032021  addu        $a0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48c4) {
            ctx->pc = 0x2E48A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e48a0;
        }
    }
    ctx->pc = 0x2E48CCu;
    // 0x2e48cc: 0x8e23032c  lw          $v1, 0x32C($s1)
    ctx->pc = 0x2e48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_2e48d0:
    // 0x2e48d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E48D0u;
    {
        const bool branch_taken_0x2e48d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48D0u;
        // 0x2e48d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48d0) {
            ctx->pc = 0x2E48E0u;
            goto label_2e48e0;
        }
    }
    ctx->pc = 0x2E48D8u;
    // 0x2e48d8: 0x5062004a  beql        $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2E48D8u;
    {
        const bool branch_taken_0x2e48d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e48d8) {
            ctx->pc = 0x2E48DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E48D8u;
            // 0x2e48dc: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4A04u;
            goto label_2e4a04;
        }
    }
    ctx->pc = 0x2E48E0u;
label_2e48e0:
    // 0x2e48e0: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e48e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e48e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e48e8: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e48e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e48ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e48ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e48f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E48F0u;
    {
        const bool branch_taken_0x2e48f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48F0u;
        // 0x2e48f4: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48f0) {
            ctx->pc = 0x2E4904u;
            goto label_2e4904;
        }
    }
    ctx->pc = 0x2E48F8u;
    // 0x2e48f8: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e48fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E48FCu;
    {
        const bool branch_taken_0x2e48fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48FCu;
        // 0x2e4900: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48fc) {
            ctx->pc = 0x2E4908u;
            goto label_2e4908;
        }
    }
    ctx->pc = 0x2E4904u;
label_2e4904:
    // 0x2e4904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4908:
    // 0x2e4908: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e4908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e490c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e490cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4910: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e4910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4914: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e4914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4918: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2e4918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e491c: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2e491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4920: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4924: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e4924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e4928: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e4928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e492c: 0x24620240  addiu       $v0, $v1, 0x240
    ctx->pc = 0x2e492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x2e4930: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e4930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e4934: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4934u;
    {
        const bool branch_taken_0x2e4934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4934u;
        // 0x2e4938: 0xe663000c  swc1        $f3, 0xC($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4934) {
            ctx->pc = 0x2E4954u;
            goto label_2e4954;
        }
    }
    ctx->pc = 0x2E493Cu;
    // 0x2e493c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2e493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4940: 0xe4600240  swc1        $f0, 0x240($v1)
    ctx->pc = 0x2e4940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
    // 0x2e4944: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2e4944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4948: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e494c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2e494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4950: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4954:
    // 0x2e4954: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e4954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e4958: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e495c: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e495cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e4960: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e4960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4964u;
    {
        const bool branch_taken_0x2e4964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4964u;
        // 0x2e4968: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4964) {
            ctx->pc = 0x2E4978u;
            goto label_2e4978;
        }
    }
    ctx->pc = 0x2E496Cu;
    // 0x2e496c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e4970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4970u;
    {
        const bool branch_taken_0x2e4970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4970u;
        // 0x2e4974: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4970) {
            ctx->pc = 0x2E497Cu;
            goto label_2e497c;
        }
    }
    ctx->pc = 0x2E4978u;
label_2e4978:
    // 0x2e4978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e497c:
    // 0x2e497c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e497cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4984: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e4984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4988: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e4988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e498c: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2e498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4990: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2e4990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4994: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4998: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e4998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e499c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e499cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e49a0: 0x24620250  addiu       $v0, $v1, 0x250
    ctx->pc = 0x2e49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 592));
    // 0x2e49a4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e49a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e49a8: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E49A8u;
    {
        const bool branch_taken_0x2e49a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49A8u;
        // 0x2e49ac: 0xe663000c  swc1        $f3, 0xC($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49a8) {
            ctx->pc = 0x2E49C8u;
            goto label_2e49c8;
        }
    }
    ctx->pc = 0x2E49B0u;
    // 0x2e49b0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2e49b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e49b4: 0xe4600250  swc1        $f0, 0x250($v1)
    ctx->pc = 0x2e49b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 592), bits); }
    // 0x2e49b8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2e49b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e49bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e49bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e49c0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2e49c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e49c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e49c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e49c8:
    // 0x2e49c8: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x2e49c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x2e49cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e49ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e49d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e49d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e49d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e49d8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2e49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2e49dc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e49dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e49e0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2e49e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2e49e4: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e49e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e49e8: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x2e49e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e49ec: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2e49ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e49f0: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2E49F0u;
    {
        const bool branch_taken_0x2e49f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49F0u;
        // 0x2e49f4: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49f0) {
            ctx->pc = 0x2E4B24u;
            goto label_2e4b24;
        }
    }
    ctx->pc = 0x2E49F8u;
    // 0x2e49f8: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e49fc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2E49FCu;
    {
        const bool branch_taken_0x2e49fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49FCu;
        // 0x2e4a00: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49fc) {
            ctx->pc = 0x2E4B28u;
            goto label_2e4b28;
        }
    }
    ctx->pc = 0x2E4A04u;
label_2e4a04:
    // 0x2e4a04: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e4a08: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e4a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e4a0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e4a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4a10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4A10u;
    {
        const bool branch_taken_0x2e4a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A10u;
        // 0x2e4a14: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a10) {
            ctx->pc = 0x2E4A24u;
            goto label_2e4a24;
        }
    }
    ctx->pc = 0x2E4A18u;
    // 0x2e4a18: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e4a1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4A1Cu;
    {
        const bool branch_taken_0x2e4a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A1Cu;
        // 0x2e4a20: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a1c) {
            ctx->pc = 0x2E4A28u;
            goto label_2e4a28;
        }
    }
    ctx->pc = 0x2E4A24u;
label_2e4a24:
    // 0x2e4a24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4a28:
    // 0x2e4a28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e4a28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4a30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e4a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4a34: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e4a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4a38: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2e4a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4a3c: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2e4a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a40: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4a44: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e4a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e4a48: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e4a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e4a4c: 0x24620240  addiu       $v0, $v1, 0x240
    ctx->pc = 0x2e4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x2e4a50: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e4a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e4a54: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4A54u;
    {
        const bool branch_taken_0x2e4a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E4A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A54u;
        // 0x2e4a58: 0xe663000c  swc1        $f3, 0xC($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a54) {
            ctx->pc = 0x2E4A74u;
            goto label_2e4a74;
        }
    }
    ctx->pc = 0x2E4A5Cu;
    // 0x2e4a5c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2e4a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4a60: 0xe4600240  swc1        $f0, 0x240($v1)
    ctx->pc = 0x2e4a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
    // 0x2e4a64: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2e4a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a68: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4a6c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2e4a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4a70: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4a74:
    // 0x2e4a74: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e4a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e4a78: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2e4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e4a7c: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e4a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e4a80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e4a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4a84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4A84u;
    {
        const bool branch_taken_0x2e4a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A84u;
        // 0x2e4a88: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a84) {
            ctx->pc = 0x2E4A98u;
            goto label_2e4a98;
        }
    }
    ctx->pc = 0x2E4A8Cu;
    // 0x2e4a8c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e4a90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4A90u;
    {
        const bool branch_taken_0x2e4a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A90u;
        // 0x2e4a94: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a90) {
            ctx->pc = 0x2E4A9Cu;
            goto label_2e4a9c;
        }
    }
    ctx->pc = 0x2E4A98u;
label_2e4a98:
    // 0x2e4a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4a9c:
    // 0x2e4a9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e4a9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4aa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4aa4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e4aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4aa8: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x2e4aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4aac: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x2e4aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4ab0: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2e4ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4ab4: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4ab8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e4ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e4abc: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e4abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e4ac0: 0x24620250  addiu       $v0, $v1, 0x250
    ctx->pc = 0x2e4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 592));
    // 0x2e4ac4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e4ac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e4ac8: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4AC8u;
    {
        const bool branch_taken_0x2e4ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4AC8u;
        // 0x2e4acc: 0xe663000c  swc1        $f3, 0xC($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ac8) {
            ctx->pc = 0x2E4AE8u;
            goto label_2e4ae8;
        }
    }
    ctx->pc = 0x2E4AD0u;
    // 0x2e4ad0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2e4ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4ad4: 0xe4600250  swc1        $f0, 0x250($v1)
    ctx->pc = 0x2e4ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 592), bits); }
    // 0x2e4ad8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2e4ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4adc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4ae0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2e4ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4ae4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4ae8:
    // 0x2e4ae8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e4ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2e4aec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e4aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e4af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4af4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e4af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e4af8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2e4af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2e4afc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e4afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e4b00: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2e4b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2e4b04: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2e4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e4b08: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x2e4b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e4b0c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2e4b0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e4b10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4B10u;
    {
        const bool branch_taken_0x2e4b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B10u;
        // 0x2e4b14: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b10) {
            ctx->pc = 0x2E4B24u;
            goto label_2e4b24;
        }
    }
    ctx->pc = 0x2E4B18u;
    // 0x2e4b18: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e4b1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4B1Cu;
    {
        const bool branch_taken_0x2e4b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B1Cu;
        // 0x2e4b20: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b1c) {
            ctx->pc = 0x2E4B28u;
            goto label_2e4b28;
        }
    }
    ctx->pc = 0x2E4B24u;
label_2e4b24:
    // 0x2e4b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4b28:
    // 0x2e4b28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4b2c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2e4b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2e4b30: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E4B30u;
    SET_GPR_U32(ctx, 31, 0x2E4B38u);
    ctx->pc = 0x2E4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B30u;
    // 0x2e4b34: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E4B30u, 0x2E4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B38u;
label_2e4b38:
    // 0x2e4b38: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4b3c: 0x24620260  addiu       $v0, $v1, 0x260
    ctx->pc = 0x2e4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 608));
    // 0x2e4b40: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4B40u;
    {
        const bool branch_taken_0x2e4b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2E4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B40u;
        // 0x2e4b44: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b40) {
            ctx->pc = 0x2E4B5Cu;
            goto label_2e4b5c;
        }
    }
    ctx->pc = 0x2E4B48u;
    // 0x2e4b48: 0xe4600260  swc1        $f0, 0x260($v1)
    ctx->pc = 0x2e4b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 608), bits); }
    // 0x2e4b4c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2e4b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4b50: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4b54: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2e4b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4b58: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4b5c:
    // 0x2e4b5c: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x2e4b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x2e4b60: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2e4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2e4b64: 0x2448e2f0  addiu       $t0, $v0, -0x1D10
    ctx->pc = 0x2e4b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959856));
    // 0x2e4b68: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x2e4b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2e4b6c: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x2e4b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2e4b70: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x2e4b70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x44E2F8u));
    // 0x2e4b74: 0xb3a40097  sdl         $a0, 0x97($sp)
    ctx->pc = 0x2e4b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4b78: 0xb7a40090  sdr         $a0, 0x90($sp)
    ctx->pc = 0x2e4b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4b7c: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x2e4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x2e4b80: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x2E4B80u;
    {
        const bool branch_taken_0x2e4b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B80u;
        // 0x2e4b84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b80) {
            ctx->pc = 0x2E4E3Cu;
            goto label_2e4e3c;
        }
    }
    ctx->pc = 0x2E4B88u;
    // 0x2e4b88: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x2e4b88u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b8c: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x2e4b8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e4b90: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2e4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e4b94: 0x0  nop
    ctx->pc = 0x2e4b94u;
    // NOP
label_2e4b98:
    // 0x2e4b98: 0xce5018  mult        $t2, $a2, $t6
    ctx->pc = 0x2e4b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2e4b9c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x2e4b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x2e4ba0: 0x8e24031c  lw          $a0, 0x31C($s1)
    ctx->pc = 0x2e4ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
    // 0x2e4ba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e4ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4ba8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e4ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4bac: 0x24cc0001  addiu       $t4, $a2, 0x1
    ctx->pc = 0x2e4bacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e4bb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e4bb4: 0x8a5818  mult        $t3, $a0, $t2
    ctx->pc = 0x2e4bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2e4bb8: 0x1080009b  beqz        $a0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2E4BB8u;
    {
        const bool branch_taken_0x2e4bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BB8u;
        // 0x2e4bbc: 0x834018  mult        $t0, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4bb8) {
            ctx->pc = 0x2E4E28u;
            goto label_2e4e28;
        }
    }
    ctx->pc = 0x2E4BC0u;
    // 0x2e4bc0: 0x65100  sll         $t2, $a2, 4
    ctx->pc = 0x2e4bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e4bc4: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2e4bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e4bc8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e4bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e4bcc: 0x0  nop
    ctx->pc = 0x2e4bccu;
    // NOP
label_2e4bd0:
    // 0x2e4bd0: 0x8e22030c  lw          $v0, 0x30C($s1)
    ctx->pc = 0x2e4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4bd4: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x2e4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2e4bd8: 0x8e230324  lw          $v1, 0x324($s1)
    ctx->pc = 0x2e4bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x2e4bdc: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2e4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2e4be0: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x2e4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x2e4be4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e4be8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2e4be8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4bec: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4bf0: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4bf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e4bf4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2e4bf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4bf8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e4bf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e4bfc: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4c00: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2e4c00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e4c04: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e4c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4c08: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x2e4c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2e4c0c: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x2e4c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2e4c10: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e4c14: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4C14u;
    {
        const bool branch_taken_0x2e4c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2E4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C14u;
        // 0x2e4c18: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c14) {
            ctx->pc = 0x2E4C30u;
            goto label_2e4c30;
        }
    }
    ctx->pc = 0x2E4C1Cu;
    // 0x2e4c1c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e4c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e4c20: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e4c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4c24: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4c28: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e4c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4c2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4c30:
    // 0x2e4c30: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x2e4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x2e4c34: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4c38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e4c3c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2e4c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2e4c40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2e4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e4c44: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x2e4c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x2e4c48: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e4c48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4c4c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4c50: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4c50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e4c54: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2e4c54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4c58: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e4c58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e4c5c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4c60: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2e4c60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e4c64: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e4c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4c68: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x2e4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2e4c6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e4c70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2e4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e4c74: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4C74u;
    {
        const bool branch_taken_0x2e4c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2E4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C74u;
        // 0x2e4c78: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c74) {
            ctx->pc = 0x2E4C90u;
            goto label_2e4c90;
        }
    }
    ctx->pc = 0x2E4C7Cu;
    // 0x2e4c7c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e4c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e4c80: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e4c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4c84: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4c88: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e4c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4c8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4c90:
    // 0x2e4c90: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x2e4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x2e4c94: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4c98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e4c9c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2e4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2e4ca0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e4ca4: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x2e4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x2e4ca8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e4ca8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4cac: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4cb0: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4cb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e4cb4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2e4cb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4cb8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e4cb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e4cbc: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4cc0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2e4cc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e4cc4: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e4cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4cc8: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x2e4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2e4ccc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e4cd0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e4cd4: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4CD4u;
    {
        const bool branch_taken_0x2e4cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2E4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CD4u;
        // 0x2e4cd8: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cd4) {
            ctx->pc = 0x2E4CF0u;
            goto label_2e4cf0;
        }
    }
    ctx->pc = 0x2E4CDCu;
    // 0x2e4cdc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e4cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e4ce0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e4ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4ce4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4ce8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e4ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4cec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4cf0:
    // 0x2e4cf0: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x2e4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x2e4cf4: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4cf8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e4cfc: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2e4cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2e4d00: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2e4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e4d04: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x2e4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x2e4d08: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e4d08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4d0c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4d10: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4d10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e4d14: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2e4d14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4d18: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e4d18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e4d1c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4d20: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2e4d20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e4d24: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e4d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4d28: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x2e4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2e4d2c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e4d30: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2e4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2e4d34: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4D34u;
    {
        const bool branch_taken_0x2e4d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2E4D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D34u;
        // 0x2e4d38: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d34) {
            ctx->pc = 0x2E4D50u;
            goto label_2e4d50;
        }
    }
    ctx->pc = 0x2E4D3Cu;
    // 0x2e4d3c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e4d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e4d40: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e4d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4d44: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4d48: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e4d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4d4c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4d50:
    // 0x2e4d50: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x2e4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x2e4d54: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4d58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e4d5c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2e4d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2e4d60: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e4d64: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x2e4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x2e4d68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e4d68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4d6c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4d70: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4d70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e4d74: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2e4d74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4d78: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e4d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e4d7c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4d80: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2e4d80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e4d84: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e4d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4d88: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x2e4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2e4d8c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e4d90: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2e4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2e4d94: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4D94u;
    {
        const bool branch_taken_0x2e4d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2E4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D94u;
        // 0x2e4d98: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d94) {
            ctx->pc = 0x2E4DB0u;
            goto label_2e4db0;
        }
    }
    ctx->pc = 0x2E4D9Cu;
    // 0x2e4d9c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e4d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e4da0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e4da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4da4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4da8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e4da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4dac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4db0:
    // 0x2e4db0: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x2e4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x2e4db4: 0x8e23030c  lw          $v1, 0x30C($s1)
    ctx->pc = 0x2e4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x2e4db8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e4dbc: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2e4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2e4dc0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2e4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2e4dc4: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x2e4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x2e4dc8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e4dc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4dcc: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4dd0: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4dd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e4dd4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2e4dd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4dd8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e4dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e4ddc: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4de0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2e4de0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e4de4: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e4de8: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x2e4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2e4dec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e4decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e4df0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4df4: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4DF4u;
    {
        const bool branch_taken_0x2e4df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2E4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DF4u;
        // 0x2e4df8: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4df4) {
            ctx->pc = 0x2E4E10u;
            goto label_2e4e10;
        }
    }
    ctx->pc = 0x2E4DFCu;
    // 0x2e4dfc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e4dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e4e00: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e4e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4e04: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4e08: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e4e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4e0c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4e10:
    // 0x2e4e10: 0x8e22031c  lw          $v0, 0x31C($s1)
    ctx->pc = 0x2e4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
    // 0x2e4e14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e4e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e4e18: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2e4e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2e4e1c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2e4e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e4e20: 0x1440ff6b  bnez        $v0, . + 4 + (-0x95 << 2)
    ctx->pc = 0x2E4E20u;
    {
        const bool branch_taken_0x2e4e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E20u;
        // 0x2e4e24: 0x256b0006  addiu       $t3, $t3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e20) {
            ctx->pc = 0x2E4BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4bd0;
        }
    }
    ctx->pc = 0x2E4E28u;
label_2e4e28:
    // 0x2e4e28: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x2e4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x2e4e2c: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x2e4e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e30: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2e4e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e4e34: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x2E4E34u;
    {
        const bool branch_taken_0x2e4e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E34u;
        // 0x2e4e38: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e34) {
            ctx->pc = 0x2E4B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4b98;
        }
    }
    ctx->pc = 0x2E4E3Cu;
label_2e4e3c:
    // 0x2e4e3c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2e4e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2e4e40:
    // 0x2e4e40: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2e4e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2e4e44: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2e4e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2e4e48: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2e4e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e4e4c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2e4e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e4e50: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2e4e50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4e54: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2e4e54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e4e58: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2e4e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e4e5c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x2e4e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e4e60: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2e4e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e4e64: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E64u;
        // 0x2e4e68: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4E6Cu;
    // 0x2e4e6c: 0x0  nop
    ctx->pc = 0x2e4e6cu;
    // NOP
    ctx->pc = 0x2e4e70u;
}
