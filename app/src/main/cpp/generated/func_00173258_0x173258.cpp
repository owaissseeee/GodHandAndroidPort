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

// Function: func_00173258
// Address: 0x173258 - 0x1733b0
void func_00173258_0x173258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00173258_0x173258");
#endif

    switch (ctx->pc) {
        case 0x173258u: goto label_173258;
        case 0x17325cu: goto label_17325c;
        case 0x173260u: goto label_173260;
        case 0x173264u: goto label_173264;
        case 0x173268u: goto label_173268;
        case 0x17326cu: goto label_17326c;
        case 0x173270u: goto label_173270;
        case 0x173274u: goto label_173274;
        case 0x173278u: goto label_173278;
        case 0x17327cu: goto label_17327c;
        case 0x173280u: goto label_173280;
        case 0x173284u: goto label_173284;
        case 0x173288u: goto label_173288;
        case 0x17328cu: goto label_17328c;
        case 0x173290u: goto label_173290;
        case 0x173294u: goto label_173294;
        case 0x173298u: goto label_173298;
        case 0x17329cu: goto label_17329c;
        case 0x1732a0u: goto label_1732a0;
        case 0x1732a4u: goto label_1732a4;
        case 0x1732a8u: goto label_1732a8;
        case 0x1732acu: goto label_1732ac;
        case 0x1732b0u: goto label_1732b0;
        case 0x1732b4u: goto label_1732b4;
        case 0x1732b8u: goto label_1732b8;
        case 0x1732bcu: goto label_1732bc;
        case 0x1732c0u: goto label_1732c0;
        case 0x1732c4u: goto label_1732c4;
        case 0x1732c8u: goto label_1732c8;
        case 0x1732ccu: goto label_1732cc;
        case 0x1732d0u: goto label_1732d0;
        case 0x1732d4u: goto label_1732d4;
        case 0x1732d8u: goto label_1732d8;
        case 0x1732dcu: goto label_1732dc;
        case 0x1732e0u: goto label_1732e0;
        case 0x1732e4u: goto label_1732e4;
        case 0x1732e8u: goto label_1732e8;
        case 0x1732ecu: goto label_1732ec;
        case 0x1732f0u: goto label_1732f0;
        case 0x1732f4u: goto label_1732f4;
        case 0x1732f8u: goto label_1732f8;
        case 0x1732fcu: goto label_1732fc;
        case 0x173300u: goto label_173300;
        case 0x173304u: goto label_173304;
        case 0x173308u: goto label_173308;
        case 0x17330cu: goto label_17330c;
        case 0x173310u: goto label_173310;
        case 0x173314u: goto label_173314;
        case 0x173318u: goto label_173318;
        case 0x17331cu: goto label_17331c;
        case 0x173320u: goto label_173320;
        case 0x173324u: goto label_173324;
        case 0x173328u: goto label_173328;
        case 0x17332cu: goto label_17332c;
        case 0x173330u: goto label_173330;
        case 0x173334u: goto label_173334;
        case 0x173338u: goto label_173338;
        case 0x17333cu: goto label_17333c;
        case 0x173340u: goto label_173340;
        case 0x173344u: goto label_173344;
        case 0x173348u: goto label_173348;
        case 0x17334cu: goto label_17334c;
        case 0x173350u: goto label_173350;
        case 0x173354u: goto label_173354;
        case 0x173358u: goto label_173358;
        case 0x17335cu: goto label_17335c;
        case 0x173360u: goto label_173360;
        case 0x173364u: goto label_173364;
        case 0x173368u: goto label_173368;
        case 0x17336cu: goto label_17336c;
        case 0x173370u: goto label_173370;
        case 0x173374u: goto label_173374;
        case 0x173378u: goto label_173378;
        case 0x17337cu: goto label_17337c;
        case 0x173380u: goto label_173380;
        case 0x173384u: goto label_173384;
        case 0x173388u: goto label_173388;
        case 0x17338cu: goto label_17338c;
        case 0x173390u: goto label_173390;
        case 0x173394u: goto label_173394;
        case 0x173398u: goto label_173398;
        case 0x17339cu: goto label_17339c;
        case 0x1733a0u: goto label_1733a0;
        case 0x1733a4u: goto label_1733a4;
        case 0x1733a8u: goto label_1733a8;
        case 0x1733acu: goto label_1733ac;
        default: break;
    }

    ctx->pc = 0x173258u;

label_173258:
    // 0x173258: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x173258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_17325c:
    // 0x17325c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_173260:
    // 0x173260: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x173260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_173264:
    // 0x173264: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x173264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173268:
    // 0x173268: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x173268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_17326c:
    // 0x17326c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_173270:
    // 0x173270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_173274:
    // 0x173274: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x173274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_173278:
    // 0x173278: 0x86620da0  lh          $v0, 0xDA0($s3)
    ctx->pc = 0x173278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 3488)));
label_17327c:
    // 0x17327c: 0x18400043  blez        $v0, . + 4 + (0x43 << 2)
label_173280:
    if (ctx->pc == 0x173280u) {
        ctx->pc = 0x173280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17327Cu;
        // 0x173280: 0x96630da0  lhu         $v1, 0xDA0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 3488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173284u;
        goto label_173284;
    }
    ctx->pc = 0x17327Cu;
    {
        const bool branch_taken_0x17327c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x173280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17327Cu;
        // 0x173280: 0x96630da0  lhu         $v1, 0xDA0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 3488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17327c) {
            ctx->pc = 0x17338Cu;
            goto label_17338c;
        }
    }
    ctx->pc = 0x173284u;
label_173284:
    // 0x173284: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x173284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_173288:
    // 0x173288: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x173288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17328c:
    // 0x17328c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_173290:
    if (ctx->pc == 0x173290u) {
        ctx->pc = 0x173290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17328Cu;
        // 0x173290: 0xa6620da0  sh          $v0, 0xDA0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3488), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173294u;
        goto label_173294;
    }
    ctx->pc = 0x17328Cu;
    {
        const bool branch_taken_0x17328c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17328Cu;
        // 0x173290: 0xa6620da0  sh          $v0, 0xDA0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3488), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17328c) {
            ctx->pc = 0x173320u;
            goto label_173320;
        }
    }
    ctx->pc = 0x173294u;
label_173294:
    // 0x173294: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x173294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_173298:
    // 0x173298: 0x84700070  lh          $s0, 0x70($v1)
    ctx->pc = 0x173298u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_17329c:
    // 0x17329c: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x17329cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1732a0:
    // 0x1732a0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1732a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1732a4:
    // 0x1732a4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1732a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1732a8:
    // 0x1732a8: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1732a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1732ac:
    // 0x1732ac: 0x40f809  jalr        $v0
label_1732b0:
    if (ctx->pc == 0x1732B0u) {
        ctx->pc = 0x1732B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732ACu;
        // 0x1732b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1732B4u;
        goto label_1732b4;
    }
    ctx->pc = 0x1732ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1732B4u);
        ctx->pc = 0x1732B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732ACu;
        // 0x1732b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1732ACu, 0x1732B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1732B4u;
label_1732b4:
    // 0x1732b4: 0xc0c7408  jal         func_31D020
label_1732b8:
    if (ctx->pc == 0x1732B8u) {
        ctx->pc = 0x1732B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732B4u;
        // 0x1732b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1732BCu;
        goto label_1732bc;
    }
    ctx->pc = 0x1732B4u;
    SET_GPR_U32(ctx, 31, 0x1732BCu);
    ctx->pc = 0x1732B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1732B4u;
    // 0x1732b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1732B4u, 0x1732BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1732BCu;
label_1732bc:
    // 0x1732bc: 0x3c013cd6  lui         $at, 0x3CD6
    ctx->pc = 0x1732bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15574 << 16));
label_1732c0:
    // 0x1732c0: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1732c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
label_1732c4:
    // 0x1732c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1732c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1732c8:
    // 0x1732c8: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x1732c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1732cc:
    // 0x1732cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1732ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1732d0:
    // 0x1732d0: 0xc6740da4  lwc1        $f20, 0xDA4($s3)
    ctx->pc = 0x1732d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1732d4:
    // 0x1732d4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1732d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1732d8:
    // 0x1732d8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1732d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1732dc:
    // 0x1732dc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1732dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1732e0:
    // 0x1732e0: 0x40f809  jalr        $v0
label_1732e4:
    if (ctx->pc == 0x1732E4u) {
        ctx->pc = 0x1732E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732E0u;
        // 0x1732e4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1732E8u;
        goto label_1732e8;
    }
    ctx->pc = 0x1732E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1732E8u);
        ctx->pc = 0x1732E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732E0u;
        // 0x1732e4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1732E0u, 0x1732E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1732E8u;
label_1732e8:
    // 0x1732e8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1732e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1732ec:
    // 0x1732ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1732ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1732f0:
    // 0x1732f0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1732f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1732f4:
    // 0x1732f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1732f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1732f8:
    // 0x1732f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1732f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1732fc:
    // 0x1732fc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1732fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_173300:
    // 0x173300: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x173300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_173304:
    // 0x173304: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x173304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_173308:
    // 0x173308: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x173308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17330c:
    // 0x17330c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x17330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_173310:
    // 0x173310: 0x40f809  jalr        $v0
label_173314:
    if (ctx->pc == 0x173314u) {
        ctx->pc = 0x173314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173310u;
        // 0x173314: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173318u;
        goto label_173318;
    }
    ctx->pc = 0x173310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173318u);
        ctx->pc = 0x173314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173310u;
        // 0x173314: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173310u, 0x173318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173318u;
label_173318:
    // 0x173318: 0x1000001d  b           . + 4 + (0x1D << 2)
label_17331c:
    if (ctx->pc == 0x17331Cu) {
        ctx->pc = 0x17331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173318u;
        // 0x17331c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173320u;
        goto label_173320;
    }
    ctx->pc = 0x173318u;
    {
        const bool branch_taken_0x173318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173318u;
        // 0x17331c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173318) {
            ctx->pc = 0x173390u;
            goto label_173390;
        }
    }
    ctx->pc = 0x173320u;
label_173320:
    // 0x173320: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x173320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_173324:
    // 0x173324: 0x84700070  lh          $s0, 0x70($v1)
    ctx->pc = 0x173324u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_173328:
    // 0x173328: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x173328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17332c:
    // 0x17332c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x17332cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_173330:
    // 0x173330: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x173330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_173334:
    // 0x173334: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x173334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_173338:
    // 0x173338: 0x40f809  jalr        $v0
label_17333c:
    if (ctx->pc == 0x17333Cu) {
        ctx->pc = 0x17333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173338u;
        // 0x17333c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173340u;
        goto label_173340;
    }
    ctx->pc = 0x173338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173340u);
        ctx->pc = 0x17333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173338u;
        // 0x17333c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173338u, 0x173340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173340u;
label_173340:
    // 0x173340: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x173340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_173344:
    // 0x173344: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x173344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173348:
    // 0x173348: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x173348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17334c:
    // 0x17334c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x17334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_173350:
    // 0x173350: 0x40f809  jalr        $v0
label_173354:
    if (ctx->pc == 0x173354u) {
        ctx->pc = 0x173354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173350u;
        // 0x173354: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173358u;
        goto label_173358;
    }
    ctx->pc = 0x173350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173358u);
        ctx->pc = 0x173354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173350u;
        // 0x173354: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173350u, 0x173358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173358u;
label_173358:
    // 0x173358: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x173358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17335c:
    // 0x17335c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17335cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173360:
    // 0x173360: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x173360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_173364:
    // 0x173364: 0xc6600da4  lwc1        $f0, 0xDA4($s3)
    ctx->pc = 0x173364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173368:
    // 0x173368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x173368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17336c:
    // 0x17336c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17336cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173370:
    // 0x173370: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x173370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_173374:
    // 0x173374: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x173374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_173378:
    // 0x173378: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x173378u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17337c:
    // 0x17337c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x17337cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_173380:
    // 0x173380: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x173380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_173384:
    // 0x173384: 0x40f809  jalr        $v0
label_173388:
    if (ctx->pc == 0x173388u) {
        ctx->pc = 0x173388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173384u;
        // 0x173388: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17338Cu;
        goto label_17338c;
    }
    ctx->pc = 0x173384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17338Cu);
        ctx->pc = 0x173388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173384u;
        // 0x173388: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173384u, 0x17338Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17338Cu;
label_17338c:
    // 0x17338c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17338cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_173390:
    // 0x173390: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x173390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_173394:
    // 0x173394: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173398:
    // 0x173398: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x173398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17339c:
    // 0x17339c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17339cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1733a0:
    // 0x1733a0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1733a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1733a4:
    // 0x1733a4: 0x3e00008  jr          $ra
label_1733a8:
    if (ctx->pc == 0x1733A8u) {
        ctx->pc = 0x1733A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733A4u;
        // 0x1733a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1733ACu;
        goto label_1733ac;
    }
    ctx->pc = 0x1733A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1733A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733A4u;
        // 0x1733a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1733A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1733ACu;
label_1733ac:
    // 0x1733ac: 0x0  nop
    ctx->pc = 0x1733acu;
    // NOP
    ctx->pc = 0x1733b0u;
}
