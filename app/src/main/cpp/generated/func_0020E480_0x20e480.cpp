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

// Function: func_0020E480
// Address: 0x20e480 - 0x20ef08
void func_0020E480_0x20e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020E480_0x20e480");
#endif

    switch (ctx->pc) {
        case 0x20e4a4u: goto label_20e4a4;
        case 0x20e4b8u: goto label_20e4b8;
        case 0x20e4d4u: goto label_20e4d4;
        case 0x20e514u: goto label_20e514;
        case 0x20e51cu: goto label_20e51c;
        case 0x20e59cu: goto label_20e59c;
        case 0x20e5c4u: goto label_20e5c4;
        case 0x20e66cu: goto label_20e66c;
        case 0x20e778u: goto label_20e778;
        case 0x20e834u: goto label_20e834;
        case 0x20e858u: goto label_20e858;
        case 0x20e884u: goto label_20e884;
        case 0x20e8d0u: goto label_20e8d0;
        case 0x20e8f8u: goto label_20e8f8;
        case 0x20e92cu: goto label_20e92c;
        case 0x20e93cu: goto label_20e93c;
        case 0x20e9a8u: goto label_20e9a8;
        case 0x20ea70u: goto label_20ea70;
        case 0x20ea84u: goto label_20ea84;
        case 0x20eaccu: goto label_20eacc;
        case 0x20eadcu: goto label_20eadc;
        case 0x20eb94u: goto label_20eb94;
        case 0x20ebdcu: goto label_20ebdc;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec48u: goto label_20ec48;
        case 0x20ecdcu: goto label_20ecdc;
        case 0x20ecf0u: goto label_20ecf0;
        case 0x20ed00u: goto label_20ed00;
        case 0x20ed10u: goto label_20ed10;
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed70u: goto label_20ed70;
        case 0x20edb4u: goto label_20edb4;
        case 0x20edf8u: goto label_20edf8;
        default: break;
    }

    ctx->pc = 0x20e480u;

    // 0x20e480: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x20e484: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20e484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x20e488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20e488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e48c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x20e490: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x20e494: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20e494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x20e498: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20e49c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20E49Cu;
    SET_GPR_U32(ctx, 31, 0x20E4A4u);
    ctx->pc = 0x20E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E49Cu;
    // 0x20e4a0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20E49Cu, 0x20E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4A4u;
label_20e4a4:
    // 0x20e4a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20e4a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4a8: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x20e4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x20e4ac: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20e4b0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20E4B0u;
    SET_GPR_U32(ctx, 31, 0x20E4B8u);
    ctx->pc = 0x20E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4B0u;
    // 0x20e4b4: 0x8c520034  lw          $s2, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20E4B0u, 0x20E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4B8u;
label_20e4b8:
    // 0x20e4b8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x20e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x20e4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4c0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20e4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x20e4c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e4c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20e4c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20e4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20e4cc: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x20E4CCu;
    SET_GPR_U32(ctx, 31, 0x20E4D4u);
    ctx->pc = 0x20E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4CCu;
    // 0x20e4d0: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x20E4CCu, 0x20E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4D4u;
label_20e4d4:
    // 0x20e4d4: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20e4d8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x20e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20e4dc: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20e4dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20e4e0: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E4E0u;
    {
        const bool branch_taken_0x20e4e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4E0u;
        // 0x20e4e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4e0) {
            ctx->pc = 0x20E524u;
            goto label_20e524;
        }
    }
    ctx->pc = 0x20E4E8u;
    // 0x20e4e8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20e4e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20e4ec: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E4ECu;
    {
        const bool branch_taken_0x20e4ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4ECu;
        // 0x20e4f0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4ec) {
            ctx->pc = 0x20E508u;
            goto label_20e508;
        }
    }
    ctx->pc = 0x20E4F4u;
    // 0x20e4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e4f8: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e4fc: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e500: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20E500u;
    {
        const bool branch_taken_0x20e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E500u;
        // 0x20e504: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e500) {
            ctx->pc = 0x20E518u;
            goto label_20e518;
        }
    }
    ctx->pc = 0x20E508u;
label_20e508:
    // 0x20e508: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e50c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20e50cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e510: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x20e510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_20e514:
    // 0x20e514: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
label_20e518:
    // 0x20e518: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20e518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_20e51c:
    // 0x20e51c: 0x10000271  b           . + 4 + (0x271 << 2)
    ctx->pc = 0x20E51Cu;
    {
        const bool branch_taken_0x20e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E51Cu;
        // 0x20e520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e51c) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20E524u;
label_20e524:
    // 0x20e524: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x20e524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20e528: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E528u;
    {
        const bool branch_taken_0x20e528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E528u;
        // 0x20e52c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e528) {
            ctx->pc = 0x20E548u;
            goto label_20e548;
        }
    }
    ctx->pc = 0x20E530u;
    // 0x20e530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e534: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20e534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20e538: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e53c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e53cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e540: 0x10000267  b           . + 4 + (0x267 << 2)
    ctx->pc = 0x20E540u;
    {
        const bool branch_taken_0x20e540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E540u;
        // 0x20e544: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e540) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E548u;
label_20e548:
    // 0x20e548: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E548u;
    {
        const bool branch_taken_0x20e548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E548u;
        // 0x20e54c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e548) {
            ctx->pc = 0x20E568u;
            goto label_20e568;
        }
    }
    ctx->pc = 0x20E550u;
    // 0x20e550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e554: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x20e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20e558: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e558u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e55c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e55cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e560: 0x1000025f  b           . + 4 + (0x25F << 2)
    ctx->pc = 0x20E560u;
    {
        const bool branch_taken_0x20e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E560u;
        // 0x20e564: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e560) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E568u;
label_20e568:
    // 0x20e568: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E568u;
    {
        const bool branch_taken_0x20e568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E568u;
        // 0x20e56c: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e568) {
            ctx->pc = 0x20E58Cu;
            goto label_20e58c;
        }
    }
    ctx->pc = 0x20E570u;
    // 0x20e570: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20e570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e574: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20e578: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20e578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e580: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e584: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x20E584u;
    {
        const bool branch_taken_0x20e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E584u;
        // 0x20e588: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e584) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E58Cu;
label_20e58c:
    // 0x20e58c: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E58Cu;
    {
        const bool branch_taken_0x20e58c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E58Cu;
        // 0x20e590: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e58c) {
            ctx->pc = 0x20E5B4u;
            goto label_20e5b4;
        }
    }
    ctx->pc = 0x20E594u;
    // 0x20e594: 0xc09a8ce  jal         func_26A338
    ctx->pc = 0x20E594u;
    SET_GPR_U32(ctx, 31, 0x20E59Cu);
    ctx->pc = 0x20E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E594u;
    // 0x20e598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A338u, 0x20E594u, 0x20E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E59Cu;
label_20e59c:
    // 0x20e59c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20e59cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20e5a0: 0x1c400250  bgtz        $v0, . + 4 + (0x250 << 2)
    ctx->pc = 0x20E5A0u;
    {
        const bool branch_taken_0x20e5a0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5A0u;
        // 0x20e5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5a0) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20E5A8u;
    // 0x20e5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e5ac: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x20E5ACu;
    {
        const bool branch_taken_0x20e5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5ACu;
        // 0x20e5b0: 0xa622054a  sh          $v0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5ac) {
            ctx->pc = 0x20E51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e51c;
        }
    }
    ctx->pc = 0x20E5B4u;
label_20e5b4:
    // 0x20e5b4: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20E5B4u;
    {
        const bool branch_taken_0x20e5b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5B4u;
        // 0x20e5b8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5b4) {
            ctx->pc = 0x20E5F0u;
            goto label_20e5f0;
        }
    }
    ctx->pc = 0x20E5BCu;
    // 0x20e5bc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20E5BCu;
    SET_GPR_U32(ctx, 31, 0x20E5C4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20E5BCu, 0x20E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5C4u;
label_20e5c4:
    // 0x20e5c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e5c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E5C8u;
    {
        const bool branch_taken_0x20e5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5C8u;
        // 0x20e5cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5c8) {
            ctx->pc = 0x20E5DCu;
            goto label_20e5dc;
        }
    }
    ctx->pc = 0x20E5D0u;
    // 0x20e5d0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x20e5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e5d4: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x20E5D4u;
    {
        const bool branch_taken_0x20e5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5D4u;
        // 0x20e5d8: 0xa22202f7  sb          $v0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5d4) {
            ctx->pc = 0x20E514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e514;
        }
    }
    ctx->pc = 0x20E5DCu;
label_20e5dc:
    // 0x20e5dc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20e5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e5e0: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20e5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e5e4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e5e8: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x20E5E8u;
    {
        const bool branch_taken_0x20e5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5E8u;
        // 0x20e5ec: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5e8) {
            ctx->pc = 0x20E51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e51c;
        }
    }
    ctx->pc = 0x20E5F0u;
label_20e5f0:
    // 0x20e5f0: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E5F0u;
    {
        const bool branch_taken_0x20e5f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5F0u;
        // 0x20e5f4: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5f0) {
            ctx->pc = 0x20E634u;
            goto label_20e634;
        }
    }
    ctx->pc = 0x20E5F8u;
    // 0x20e5f8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20e5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20e5fc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E5FCu;
    {
        const bool branch_taken_0x20e5fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5FCu;
        // 0x20e600: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5fc) {
            ctx->pc = 0x20E61Cu;
            goto label_20e61c;
        }
    }
    ctx->pc = 0x20E604u;
    // 0x20e604: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20e604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20e608: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20e608u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e610: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e614: 0x10000232  b           . + 4 + (0x232 << 2)
    ctx->pc = 0x20E614u;
    {
        const bool branch_taken_0x20e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E614u;
        // 0x20e618: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e614) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E61Cu;
label_20e61c:
    // 0x20e61c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e620: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20e620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e624: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e62c: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x20E62Cu;
    {
        const bool branch_taken_0x20e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E62Cu;
        // 0x20e630: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e62c) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E634u;
label_20e634:
    // 0x20e634: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E634u;
    {
        const bool branch_taken_0x20e634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E634u;
        // 0x20e638: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e634) {
            ctx->pc = 0x20E658u;
            goto label_20e658;
        }
    }
    ctx->pc = 0x20E63Cu;
    // 0x20e63c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e640: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20e644: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20e644u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e64c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e64cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e650: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x20E650u;
    {
        const bool branch_taken_0x20e650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E650u;
        // 0x20e654: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e650) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E658u;
label_20e658:
    // 0x20e658: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20E658u;
    {
        const bool branch_taken_0x20e658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E658u;
        // 0x20e65c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e658) {
            ctx->pc = 0x20E6C0u;
            goto label_20e6c0;
        }
    }
    ctx->pc = 0x20E660u;
    // 0x20e660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e664: 0xc0a3b4a  jal         func_28ED28
    ctx->pc = 0x20E664u;
    SET_GPR_U32(ctx, 31, 0x20E66Cu);
    ctx->pc = 0x20E668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E664u;
    // 0x20e668: 0x240503e7  addiu       $a1, $zero, 0x3E7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ED28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED28u, 0x20E664u, 0x20E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E66Cu;
label_20e66c:
    // 0x20e66c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20e66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20e670: 0x1c40000d  bgtz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20E670u;
    {
        const bool branch_taken_0x20e670 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E670u;
        // 0x20e674: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e670) {
            ctx->pc = 0x20E6A8u;
            goto label_20e6a8;
        }
    }
    ctx->pc = 0x20E678u;
    // 0x20e678: 0x8e2217ac  lw          $v0, 0x17AC($s1)
    ctx->pc = 0x20e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20e67c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20e67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20e680: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E680u;
    {
        const bool branch_taken_0x20e680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E680u;
        // 0x20e684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e680) {
            ctx->pc = 0x20E69Cu;
            goto label_20e69c;
        }
    }
    ctx->pc = 0x20E688u;
    // 0x20e688: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e68c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e68cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e690: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e690u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e694: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x20E694u;
    {
        const bool branch_taken_0x20e694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E694u;
        // 0x20e698: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e694) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E69Cu;
label_20e69c:
    // 0x20e69c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e6a0: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x20e6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x20e6a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e6a8:
    // 0x20e6a8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20e6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e6ac: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20e6acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e6b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e6b4: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x20e6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e6b8: 0x1000020a  b           . + 4 + (0x20A << 2)
    ctx->pc = 0x20E6B8u;
    {
        const bool branch_taken_0x20e6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6B8u;
        // 0x20e6bc: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6b8) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20E6C0u;
label_20e6c0:
    // 0x20e6c0: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20E6C0u;
    {
        const bool branch_taken_0x20e6c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e6c0) {
            ctx->pc = 0x20E6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E6C0u;
            // 0x20e6c4: 0x84a30046  lh          $v1, 0x46($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E710u;
            goto label_20e710;
        }
    }
    ctx->pc = 0x20E6C8u;
    // 0x20e6c8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x20e6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x20e6cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e6d0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20e6d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20e6d4: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E6D4u;
    {
        const bool branch_taken_0x20e6d4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6D4u;
        // 0x20e6d8: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6d4) {
            ctx->pc = 0x20E6F4u;
            goto label_20e6f4;
        }
    }
    ctx->pc = 0x20E6DCu;
    // 0x20e6dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e6e0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20e6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e6e4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e6ec: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x20E6ECu;
    {
        const bool branch_taken_0x20e6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6ECu;
        // 0x20e6f0: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6ec) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E6F4u;
label_20e6f4:
    // 0x20e6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e6f8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20e6fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e700: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e704: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20e704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e708: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x20E708u;
    {
        const bool branch_taken_0x20e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E708u;
        // 0x20e70c: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e708) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E710u;
label_20e710:
    // 0x20e710: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x20e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x20e714: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E714u;
    {
        const bool branch_taken_0x20e714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E714u;
        // 0x20e718: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e714) {
            ctx->pc = 0x20E734u;
            goto label_20e734;
        }
    }
    ctx->pc = 0x20E71Cu;
    // 0x20e71c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e720: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20e720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e724: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e724u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e728: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e728u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e72c: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x20E72Cu;
    {
        const bool branch_taken_0x20e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E72Cu;
        // 0x20e730: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e72c) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E734u;
label_20e734:
    // 0x20e734: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E734u;
    {
        const bool branch_taken_0x20e734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E734u;
        // 0x20e738: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e734) {
            ctx->pc = 0x20E754u;
            goto label_20e754;
        }
    }
    ctx->pc = 0x20E73Cu;
    // 0x20e73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e740: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e744: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e748: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e74c: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x20E74Cu;
    {
        const bool branch_taken_0x20e74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E74Cu;
        // 0x20e750: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e74c) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E754u;
label_20e754:
    // 0x20e754: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E754u;
    {
        const bool branch_taken_0x20e754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E754u;
        // 0x20e758: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e754) {
            ctx->pc = 0x20E764u;
            goto label_20e764;
        }
    }
    ctx->pc = 0x20E75Cu;
    // 0x20e75c: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20E75Cu;
    {
        const bool branch_taken_0x20e75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e75c) {
            ctx->pc = 0x20E760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E75Cu;
            // 0x20e760: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E7A4u;
            goto label_20e7a4;
        }
    }
    ctx->pc = 0x20E764u;
label_20e764:
    // 0x20e764: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x20e764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x20e768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e76c: 0xae2017a4  sw          $zero, 0x17A4($s1)
    ctx->pc = 0x20e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6052), GPR_U32(ctx, 0));
    // 0x20e770: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20E770u;
    SET_GPR_U32(ctx, 31, 0x20E778u);
    ctx->pc = 0x20E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E770u;
    // 0x20e774: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20E770u, 0x20E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E778u;
label_20e778:
    // 0x20e778: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e77c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E77Cu;
    {
        const bool branch_taken_0x20e77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E77Cu;
        // 0x20e780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e77c) {
            ctx->pc = 0x20E790u;
            goto label_20e790;
        }
    }
    ctx->pc = 0x20E784u;
    // 0x20e784: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x20e784u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e788: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x20E788u;
    {
        const bool branch_taken_0x20e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E788u;
        // 0x20e78c: 0xa22202f7  sb          $v0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e788) {
            ctx->pc = 0x20E514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e514;
        }
    }
    ctx->pc = 0x20E790u;
label_20e790:
    // 0x20e790: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20e790u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e794: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20e794u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e798: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e798u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e79c: 0x1000ff5f  b           . + 4 + (-0xA1 << 2)
    ctx->pc = 0x20E79Cu;
    {
        const bool branch_taken_0x20e79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E79Cu;
        // 0x20e7a0: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e79c) {
            ctx->pc = 0x20E51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e51c;
        }
    }
    ctx->pc = 0x20E7A4u;
label_20e7a4:
    // 0x20e7a4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x20e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x20e7a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e7ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20e7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20e7b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E7B0u;
    {
        const bool branch_taken_0x20e7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7B0u;
        // 0x20e7b4: 0x9624054a  lhu         $a0, 0x54A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7b0) {
            ctx->pc = 0x20E7D0u;
            goto label_20e7d0;
        }
    }
    ctx->pc = 0x20E7B8u;
    // 0x20e7b8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x20e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x20e7bc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E7BCu;
    {
        const bool branch_taken_0x20e7bc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7BCu;
        // 0x20e7c0: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7bc) {
            ctx->pc = 0x20E7D0u;
            goto label_20e7d0;
        }
    }
    ctx->pc = 0x20E7C4u;
    // 0x20e7c4: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20e7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x20e7c8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x20E7C8u;
    {
        const bool branch_taken_0x20e7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e7c8) {
            ctx->pc = 0x20E82Cu;
            goto label_20e82c;
        }
    }
    ctx->pc = 0x20E7D0u;
label_20e7d0:
    // 0x20e7d0: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x20e7d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20e7d4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x20e7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x20e7d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E7D8u;
    {
        const bool branch_taken_0x20e7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7D8u;
        // 0x20e7dc: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7d8) {
            ctx->pc = 0x20E7FCu;
            goto label_20e7fc;
        }
    }
    ctx->pc = 0x20E7E0u;
    // 0x20e7e0: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20E7E0u;
    {
        const bool branch_taken_0x20e7e0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7E0u;
        // 0x20e7e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7e0) {
            ctx->pc = 0x20E82Cu;
            goto label_20e82c;
        }
    }
    ctx->pc = 0x20E7E8u;
    // 0x20e7e8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20e7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e7ec: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e7f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e7f4: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x20E7F4u;
    {
        const bool branch_taken_0x20e7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7F4u;
        // 0x20e7f8: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7f4) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E7FCu;
label_20e7fc:
    // 0x20e7fc: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E7FCu;
    {
        const bool branch_taken_0x20e7fc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7FCu;
        // 0x20e800: 0x30620024  andi        $v0, $v1, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7fc) {
            ctx->pc = 0x20E81Cu;
            goto label_20e81c;
        }
    }
    ctx->pc = 0x20E804u;
    // 0x20e804: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e808: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20e808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e80c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e80cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e814: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x20E814u;
    {
        const bool branch_taken_0x20e814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E814u;
        // 0x20e818: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e814) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E81Cu;
label_20e81c:
    // 0x20e81c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E81Cu;
    {
        const bool branch_taken_0x20e81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E81Cu;
        // 0x20e820: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e81c) {
            ctx->pc = 0x20E82Cu;
            goto label_20e82c;
        }
    }
    ctx->pc = 0x20E824u;
    // 0x20e824: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E824u;
    {
        const bool branch_taken_0x20e824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E824u;
        // 0x20e828: 0x30a22000  andi        $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e824) {
            ctx->pc = 0x20E83Cu;
            goto label_20e83c;
        }
    }
    ctx->pc = 0x20E82Cu;
label_20e82c:
    // 0x20e82c: 0xc09a8ce  jal         func_26A338
    ctx->pc = 0x20E82Cu;
    SET_GPR_U32(ctx, 31, 0x20E834u);
    ctx->pc = 0x20E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E82Cu;
    // 0x20e830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A338u, 0x20E82Cu, 0x20E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E834u;
label_20e834:
    // 0x20e834: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x20E834u;
    {
        const bool branch_taken_0x20e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E834u;
        // 0x20e838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e834) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20E83Cu;
label_20e83c:
    // 0x20e83c: 0x10400125  beqz        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x20E83Cu;
    {
        const bool branch_taken_0x20e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E83Cu;
        // 0x20e840: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e83c) {
            ctx->pc = 0x20ECD4u;
            goto label_20ecd4;
        }
    }
    ctx->pc = 0x20E844u;
    // 0x20e844: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20e844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x20e848: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E848u;
    {
        const bool branch_taken_0x20e848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E848u;
        // 0x20e84c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e848) {
            ctx->pc = 0x20E860u;
            goto label_20e860;
        }
    }
    ctx->pc = 0x20E850u;
    // 0x20e850: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x20E850u;
    SET_GPR_U32(ctx, 31, 0x20E858u);
    ctx->pc = 0x20E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E850u;
    // 0x20e854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x20E850u, 0x20E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E858u;
label_20e858:
    // 0x20e858: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x20E858u;
    {
        const bool branch_taken_0x20e858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E858u;
        // 0x20e85c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e858) {
            ctx->pc = 0x20E954u;
            goto label_20e954;
        }
    }
    ctx->pc = 0x20E860u;
label_20e860:
    // 0x20e860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e864: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x20e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x20e868: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20e868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e86c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20e86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20e870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e874: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20e874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e878: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20e878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e87c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x20E87Cu;
    SET_GPR_U32(ctx, 31, 0x20E884u);
    ctx->pc = 0x20E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E87Cu;
    // 0x20e880: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x20E87Cu, 0x20E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E884u;
label_20e884:
    // 0x20e884: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x20e884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x20e888: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e88c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x20e88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x20e890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e894: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20e894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x20e898: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20e898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20e89c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E89Cu;
    {
        const bool branch_taken_0x20e89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E89Cu;
        // 0x20e8a0: 0xe6201740  swc1        $f0, 0x1740($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e89c) {
            ctx->pc = 0x20E8B0u;
            goto label_20e8b0;
        }
    }
    ctx->pc = 0x20E8A4u;
    // 0x20e8a4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x20e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x20e8a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E8A8u;
    {
        const bool branch_taken_0x20e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A8u;
        // 0x20e8ac: 0x8c520010  lw          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8a8) {
            ctx->pc = 0x20E8B4u;
            goto label_20e8b4;
        }
    }
    ctx->pc = 0x20E8B0u;
label_20e8b0:
    // 0x20e8b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20e8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e8b4:
    // 0x20e8b4: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x20E8B4u;
    {
        const bool branch_taken_0x20e8b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8B4u;
        // 0x20e8b8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8b4) {
            ctx->pc = 0x20E930u;
            goto label_20e930;
        }
    }
    ctx->pc = 0x20E8BCu;
    // 0x20e8bc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x20e8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20e8c0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x20e8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20e8c4: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x20e8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20e8c8: 0xc051e62  jal         func_147988
    ctx->pc = 0x20E8C8u;
    SET_GPR_U32(ctx, 31, 0x20E8D0u);
    ctx->pc = 0x20E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E8C8u;
    // 0x20e8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x20E8C8u, 0x20E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8D0u;
label_20e8d0:
    // 0x20e8d0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20e8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x20e8d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20e8d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20e8d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e8dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20e8e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20e8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e8e4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x20e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x20e8e8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x20e8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x20e8ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20e8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e8f0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x20E8F0u;
    SET_GPR_U32(ctx, 31, 0x20E8F8u);
    ctx->pc = 0x20E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E8F0u;
    // 0x20e8f4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x20E8F0u, 0x20E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8F8u;
label_20e8f8:
    // 0x20e8f8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x20e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x20e8fc: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x20e8fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e900: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x20e900u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e904: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x20e904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20e908: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x20e908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20e90c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20e90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20e910: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20e910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e914: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20e914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e918: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x20e918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x20e91c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20e91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e920: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x20e920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20e924: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x20E924u;
    SET_GPR_U32(ctx, 31, 0x20E92Cu);
    ctx->pc = 0x20E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E924u;
    // 0x20e928: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x20E924u, 0x20E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E92Cu;
label_20e92c:
    // 0x20e92c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20e930:
    // 0x20e930: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x20e930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20e934: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x20E934u;
    SET_GPR_U32(ctx, 31, 0x20E93Cu);
    ctx->pc = 0x20E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E934u;
    // 0x20e938: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x20E934u, 0x20E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E93Cu;
label_20e93c:
    // 0x20e93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e940: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x20e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20e944: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20e944u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e948: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20e948u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e94c: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x20E94Cu;
    {
        const bool branch_taken_0x20e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E94Cu;
        // 0x20e950: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e94c) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20E954u;
label_20e954:
    // 0x20e954: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20e958: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20e958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20e95c: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x20e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
    // 0x20e960: 0x2c62004d  sltiu       $v0, $v1, 0x4D
    ctx->pc = 0x20e960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)77) ? 1 : 0);
    // 0x20e964: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E964u;
    {
        const bool branch_taken_0x20e964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E964u;
        // 0x20e968: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e964) {
            ctx->pc = 0x20E984u;
            goto label_20e984;
        }
    }
    ctx->pc = 0x20E96Cu;
    // 0x20e96c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20e970: 0x24422830  addiu       $v0, $v0, 0x2830
    ctx->pc = 0x20e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10288));
    // 0x20e974: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20e974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e978: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20e978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e97c: 0x800008  jr          $a0
    ctx->pc = 0x20E97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E984u: goto label_20e984;
            case 0x20EB34u: goto label_20eb34;
            case 0x20EB50u: goto label_20eb50;
            case 0x20EB6Cu: goto label_20eb6c;
            case 0x20EC60u: goto label_20ec60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E97Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20E984u;
label_20e984:
    // 0x20e984: 0x52400019  beql        $s2, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x20E984u;
    {
        const bool branch_taken_0x20e984 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e984) {
            ctx->pc = 0x20E988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E984u;
            // 0x20e988: 0xc6210760  lwc1        $f1, 0x760($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E9ECu;
            goto label_20e9ec;
        }
    }
    ctx->pc = 0x20E98Cu;
    // 0x20e98c: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x20e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x20e990: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x20e990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x20e994: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20e994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x20e998: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20e99c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20e99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20e9a0: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x20E9A0u;
    SET_GPR_U32(ctx, 31, 0x20E9A8u);
    ctx->pc = 0x20E9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E9A0u;
    // 0x20e9a4: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x20E9A0u, 0x20E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9A8u;
label_20e9a8:
    // 0x20e9a8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x20e9a8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x20e9ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e9acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e9b0: 0x0  nop
    ctx->pc = 0x20e9b0u;
    // NOP
    // 0x20e9b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e9b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e9b8: 0x0  nop
    ctx->pc = 0x20e9b8u;
    // NOP
    // 0x20e9bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20E9BCu;
    {
        const bool branch_taken_0x20e9bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9BCu;
        // 0x20e9c0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9bc) {
            ctx->pc = 0x20E9C8u;
            goto label_20e9c8;
        }
    }
    ctx->pc = 0x20E9C4u;
    // 0x20e9c4: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x20e9c4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_20e9c8:
    // 0x20e9c8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x20e9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x20e9cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e9ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20e9d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e9d4: 0x0  nop
    ctx->pc = 0x20e9d4u;
    // NOP
    // 0x20e9d8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20e9d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e9dc: 0x0  nop
    ctx->pc = 0x20e9dcu;
    // NOP
    // 0x20e9e0: 0x450100bc  bc1t        . + 4 + (0xBC << 2)
    ctx->pc = 0x20E9E0u;
    {
        const bool branch_taken_0x20e9e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e9e0) {
            ctx->pc = 0x20ECD4u;
            goto label_20ecd4;
        }
    }
    ctx->pc = 0x20E9E8u;
    // 0x20e9e8: 0xc6210760  lwc1        $f1, 0x760($s1)
    ctx->pc = 0x20e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e9ec:
    // 0x20e9ec: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x20e9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x20e9f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e9f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20e9f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e9f8: 0x0  nop
    ctx->pc = 0x20e9f8u;
    // NOP
    // 0x20e9fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ea00: 0x0  nop
    ctx->pc = 0x20ea00u;
    // NOP
    // 0x20ea04: 0x450000b3  bc1f        . + 4 + (0xB3 << 2)
    ctx->pc = 0x20EA04u;
    {
        const bool branch_taken_0x20ea04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ea04) {
            ctx->pc = 0x20ECD4u;
            goto label_20ecd4;
        }
    }
    ctx->pc = 0x20EA0Cu;
    // 0x20ea0c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20ea10: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x20ea10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x20ea14: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20EA14u;
    {
        const bool branch_taken_0x20ea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ea14) {
            ctx->pc = 0x20EA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EA14u;
            // 0x20ea18: 0xc620173c  lwc1        $f0, 0x173C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EA50u;
            goto label_20ea50;
        }
    }
    ctx->pc = 0x20EA1Cu;
    // 0x20ea1c: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20ea20: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20ea20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20ea24: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20ea24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20ea28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EA28u;
    {
        const bool branch_taken_0x20ea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA28u;
        // 0x20ea2c: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea28) {
            ctx->pc = 0x20EA38u;
            goto label_20ea38;
        }
    }
    ctx->pc = 0x20EA30u;
    // 0x20ea30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20EA30u;
    {
        const bool branch_taken_0x20ea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA30u;
        // 0x20ea34: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea30) {
            ctx->pc = 0x20EA3Cu;
            goto label_20ea3c;
        }
    }
    ctx->pc = 0x20EA38u;
label_20ea38:
    // 0x20ea38: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20ea38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20ea3c:
    // 0x20ea3c: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x20ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20ea40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ea44: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20ea48: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x20EA48u;
    {
        const bool branch_taken_0x20ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA48u;
        // 0x20ea4c: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea48) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20EA50u;
label_20ea50:
    // 0x20ea50: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20ea50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20ea54: 0x0  nop
    ctx->pc = 0x20ea54u;
    // NOP
    // 0x20ea58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x20ea58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ea5c: 0x0  nop
    ctx->pc = 0x20ea5cu;
    // NOP
    // 0x20ea60: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x20EA60u;
    {
        const bool branch_taken_0x20ea60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA60u;
        // 0x20ea64: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea60) {
            ctx->pc = 0x20EAFCu;
            goto label_20eafc;
        }
    }
    ctx->pc = 0x20EA68u;
    // 0x20ea68: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20EA68u;
    SET_GPR_U32(ctx, 31, 0x20EA70u);
    ctx->pc = 0x20EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA68u;
    // 0x20ea6c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20EA68u, 0x20EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA70u;
label_20ea70:
    // 0x20ea70: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20ea70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20ea74: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20EA74u;
    {
        const bool branch_taken_0x20ea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ea74) {
            ctx->pc = 0x20EA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EA74u;
            // 0x20ea78: 0x8e2317ac  lw          $v1, 0x17AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EAA4u;
            goto label_20eaa4;
        }
    }
    ctx->pc = 0x20EA7Cu;
    // 0x20ea7c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20EA7Cu;
    SET_GPR_U32(ctx, 31, 0x20EA84u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20EA7Cu, 0x20EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA84u;
label_20ea84:
    // 0x20ea84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20ea84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20ea88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20ea88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ea8c: 0x0  nop
    ctx->pc = 0x20ea8cu;
    // NOP
    // 0x20ea90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20ea90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ea94: 0x0  nop
    ctx->pc = 0x20ea94u;
    // NOP
    // 0x20ea98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20EA98u;
    {
        const bool branch_taken_0x20ea98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ea98) {
            ctx->pc = 0x20EA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EA98u;
            // 0x20ea9c: 0xe634173c  swc1        $f20, 0x173C($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EAA0u;
            goto label_20eaa0;
        }
    }
    ctx->pc = 0x20EAA0u;
label_20eaa0:
    // 0x20eaa0: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
label_20eaa4:
    // 0x20eaa4: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20eaa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20eaa8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20eaa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20eaac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EAACu;
    {
        const bool branch_taken_0x20eaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAACu;
        // 0x20eab0: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eaac) {
            ctx->pc = 0x20EABCu;
            goto label_20eabc;
        }
    }
    ctx->pc = 0x20EAB4u;
    // 0x20eab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20EAB4u;
    {
        const bool branch_taken_0x20eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAB4u;
        // 0x20eab8: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eab4) {
            ctx->pc = 0x20EAC0u;
            goto label_20eac0;
        }
    }
    ctx->pc = 0x20EABCu;
label_20eabc:
    // 0x20eabc: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20eabcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20eac0:
    // 0x20eac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eac4: 0xc09d08e  jal         func_274238
    ctx->pc = 0x20EAC4u;
    SET_GPR_U32(ctx, 31, 0x20EACCu);
    ctx->pc = 0x20EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAC4u;
    // 0x20eac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274238u, 0x20EAC4u, 0x20EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EACCu;
label_20eacc:
    // 0x20eacc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ead0: 0xa62017c8  sh          $zero, 0x17C8($s1)
    ctx->pc = 0x20ead0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6088), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ead4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20EAD4u;
    SET_GPR_U32(ctx, 31, 0x20EADCu);
    ctx->pc = 0x20EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAD4u;
    // 0x20ead8: 0xae2217c4  sw          $v0, 0x17C4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20EAD4u, 0x20EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EADCu;
label_20eadc:
    // 0x20eadc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20eae0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20eae0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20eae4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20EAE4u;
    {
        const bool branch_taken_0x20eae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eae4) {
            ctx->pc = 0x20EAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EAE4u;
            // 0x20eae8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EAECu;
            goto label_20eaec;
        }
    }
    ctx->pc = 0x20EAECu;
label_20eaec:
    // 0x20eaec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20eaecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eaf0: 0x2010  mfhi        $a0
    ctx->pc = 0x20eaf0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20eaf4: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x20EAF4u;
    {
        const bool branch_taken_0x20eaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAF4u;
        // 0x20eaf8: 0xa22417bf  sb          $a0, 0x17BF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6079), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eaf4) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20EAFCu;
label_20eafc:
    // 0x20eafc: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20eb00: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20eb00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20eb04: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20eb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20eb08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EB08u;
    {
        const bool branch_taken_0x20eb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB08u;
        // 0x20eb0c: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb08) {
            ctx->pc = 0x20EB18u;
            goto label_20eb18;
        }
    }
    ctx->pc = 0x20EB10u;
    // 0x20eb10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20EB10u;
    {
        const bool branch_taken_0x20eb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB10u;
        // 0x20eb14: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb10) {
            ctx->pc = 0x20EB1Cu;
            goto label_20eb1c;
        }
    }
    ctx->pc = 0x20EB18u;
label_20eb18:
    // 0x20eb18: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20eb18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20eb1c:
    // 0x20eb1c: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x20eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x20eb20: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20eb20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20eb24: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x20eb24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x20eb28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb2c: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x20EB2Cu;
    {
        const bool branch_taken_0x20eb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB2Cu;
        // 0x20eb30: 0xa22002f4  sb          $zero, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb2c) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EB34u;
label_20eb34:
    // 0x20eb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb38: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20eb3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20eb40: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20eb40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20eb44: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20eb44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20eb48: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x20EB48u;
    {
        const bool branch_taken_0x20eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB48u;
        // 0x20eb4c: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb48) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EB50u;
label_20eb50:
    // 0x20eb50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20eb58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20eb5c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20eb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20eb60: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20eb60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20eb64: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x20EB64u;
    {
        const bool branch_taken_0x20eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB64u;
        // 0x20eb68: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb64) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EB6Cu;
label_20eb6c:
    // 0x20eb6c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x20eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x20eb70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20eb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb74: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x20eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x20eb78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb7c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20eb7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20eb80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20eb84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20eb88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb8c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x20EB8Cu;
    SET_GPR_U32(ctx, 31, 0x20EB94u);
    ctx->pc = 0x20EB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB8Cu;
    // 0x20eb90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x20EB8Cu, 0x20EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB94u;
label_20eb94:
    // 0x20eb94: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x20eb94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x20eb98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20eb9c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x20eb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x20eba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20eba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eba4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20eba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x20eba8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20eba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20ebac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EBACu;
    {
        const bool branch_taken_0x20ebac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBACu;
        // 0x20ebb0: 0xe6201740  swc1        $f0, 0x1740($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebac) {
            ctx->pc = 0x20EBC0u;
            goto label_20ebc0;
        }
    }
    ctx->pc = 0x20EBB4u;
    // 0x20ebb4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x20ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x20ebb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20EBB8u;
    {
        const bool branch_taken_0x20ebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBB8u;
        // 0x20ebbc: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebb8) {
            ctx->pc = 0x20EBC4u;
            goto label_20ebc4;
        }
    }
    ctx->pc = 0x20EBC0u;
label_20ebc0:
    // 0x20ebc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20ebc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ebc4:
    // 0x20ebc4: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20EBC4u;
    {
        const bool branch_taken_0x20ebc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBC4u;
        // 0x20ebc8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebc4) {
            ctx->pc = 0x20EC3Cu;
            goto label_20ec3c;
        }
    }
    ctx->pc = 0x20EBCCu;
    // 0x20ebcc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x20ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20ebd0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x20ebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ebd4: 0xc051e62  jal         func_147988
    ctx->pc = 0x20EBD4u;
    SET_GPR_U32(ctx, 31, 0x20EBDCu);
    ctx->pc = 0x20EBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBD4u;
    // 0x20ebd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x20EBD4u, 0x20EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBDCu;
label_20ebdc:
    // 0x20ebdc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20ebdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x20ebe0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20ebe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20ebe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20ebe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ebe8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ebec: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x20ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x20ebf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ebf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ebf4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x20ebf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x20ebf8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20ebf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ebfc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x20EBFCu;
    SET_GPR_U32(ctx, 31, 0x20EC04u);
    ctx->pc = 0x20EC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBFCu;
    // 0x20ec00: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x20EBFCu, 0x20EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC04u;
label_20ec04:
    // 0x20ec04: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x20ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x20ec08: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x20ec08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ec0c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x20ec0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ec10: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x20ec10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20ec14: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x20ec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20ec18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20ec18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20ec1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20ec1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ec20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20ec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec24: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x20ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x20ec28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ec28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec2c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x20ec2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ec30: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x20EC30u;
    SET_GPR_U32(ctx, 31, 0x20EC38u);
    ctx->pc = 0x20EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC30u;
    // 0x20ec34: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x20EC30u, 0x20EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC38u;
label_20ec38:
    // 0x20ec38: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20ec3c:
    // 0x20ec3c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x20ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20ec40: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x20EC40u;
    SET_GPR_U32(ctx, 31, 0x20EC48u);
    ctx->pc = 0x20EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC40u;
    // 0x20ec44: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x20EC40u, 0x20EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC48u;
label_20ec48:
    // 0x20ec48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ec4c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x20ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20ec50: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ec50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ec54: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ec54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ec58: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x20EC58u;
    {
        const bool branch_taken_0x20ec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC58u;
        // 0x20ec5c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec58) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EC60u;
label_20ec60:
    // 0x20ec60: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20ec64: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20ec68: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20EC68u;
    {
        const bool branch_taken_0x20ec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC68u;
        // 0x20ec6c: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec68) {
            ctx->pc = 0x20ECBCu;
            goto label_20ecbc;
        }
    }
    ctx->pc = 0x20EC70u;
    // 0x20ec70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20EC70u;
    {
        const bool branch_taken_0x20ec70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC70u;
        // 0x20ec74: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec70) {
            ctx->pc = 0x20EC90u;
            goto label_20ec90;
        }
    }
    ctx->pc = 0x20EC78u;
    // 0x20ec78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20EC78u;
    {
        const bool branch_taken_0x20ec78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC78u;
        // 0x20ec7c: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec78) {
            ctx->pc = 0x20ECA4u;
            goto label_20eca4;
        }
    }
    ctx->pc = 0x20EC80u;
    // 0x20ec80: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20EC80u;
    {
        const bool branch_taken_0x20ec80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC80u;
        // 0x20ec84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec80) {
            ctx->pc = 0x20ECA8u;
            goto label_20eca8;
        }
    }
    ctx->pc = 0x20EC88u;
    // 0x20ec88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20EC88u;
    {
        const bool branch_taken_0x20ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC88u;
        // 0x20ec8c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec88) {
            ctx->pc = 0x20ECC4u;
            goto label_20ecc4;
        }
    }
    ctx->pc = 0x20EC90u;
label_20ec90:
    // 0x20ec90: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20ec90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20ec94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EC94u;
    {
        const bool branch_taken_0x20ec94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC94u;
        // 0x20ec98: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec94) {
            ctx->pc = 0x20ECA4u;
            goto label_20eca4;
        }
    }
    ctx->pc = 0x20EC9Cu;
    // 0x20ec9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20EC9Cu;
    {
        const bool branch_taken_0x20ec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC9Cu;
        // 0x20eca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec9c) {
            ctx->pc = 0x20ECC0u;
            goto label_20ecc0;
        }
    }
    ctx->pc = 0x20ECA4u;
label_20eca4:
    // 0x20eca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20eca8:
    // 0x20eca8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20ecac: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ecb0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ecb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ecb4: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x20ECB4u;
    {
        const bool branch_taken_0x20ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECB4u;
        // 0x20ecb8: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecb4) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20ECBCu;
label_20ecbc:
    // 0x20ecbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ecc0:
    // 0x20ecc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20ecc4:
    // 0x20ecc4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ecc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ecc8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ecc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20eccc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x20ECCCu;
    {
        const bool branch_taken_0x20eccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECCCu;
        // 0x20ecd0: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eccc) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20ECD4u;
label_20ecd4:
    // 0x20ecd4: 0xc08344e  jal         func_20D138
    ctx->pc = 0x20ECD4u;
    SET_GPR_U32(ctx, 31, 0x20ECDCu);
    ctx->pc = 0x20ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECD4u;
    // 0x20ecd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D138u, 0x20ECD4u, 0x20ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECDCu;
label_20ecdc:
    // 0x20ecdc: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x20ECDCu;
    {
        const bool branch_taken_0x20ecdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECDCu;
        // 0x20ece0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecdc) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20ECE4u;
    // 0x20ece4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ece8: 0xc0832b2  jal         func_20CAC8
    ctx->pc = 0x20ECE8u;
    SET_GPR_U32(ctx, 31, 0x20ECF0u);
    ctx->pc = 0x20ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECE8u;
    // 0x20ecec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAC8u, 0x20ECE8u, 0x20ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECF0u;
label_20ecf0:
    // 0x20ecf0: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x20ECF0u;
    {
        const bool branch_taken_0x20ecf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECF0u;
        // 0x20ecf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecf0) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20ECF8u;
    // 0x20ecf8: 0xc083340  jal         func_20CD00
    ctx->pc = 0x20ECF8u;
    SET_GPR_U32(ctx, 31, 0x20ED00u);
    ctx->pc = 0x20ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECF8u;
    // 0x20ecfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CD00u, 0x20ECF8u, 0x20ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED00u;
label_20ed00:
    // 0x20ed00: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x20ED00u;
    {
        const bool branch_taken_0x20ed00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED00u;
        // 0x20ed04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed00) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20ED08u;
    // 0x20ed08: 0xc083450  jal         func_20D140
    ctx->pc = 0x20ED08u;
    SET_GPR_U32(ctx, 31, 0x20ED10u);
    ctx->pc = 0x20ED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED08u;
    // 0x20ed0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D140u, 0x20ED08u, 0x20ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED10u;
label_20ed10:
    // 0x20ed10: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x20ED10u;
    {
        const bool branch_taken_0x20ed10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED10u;
        // 0x20ed14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed10) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20ED18u;
    // 0x20ed18: 0xc0834e6  jal         func_20D398
    ctx->pc = 0x20ED18u;
    SET_GPR_U32(ctx, 31, 0x20ED20u);
    ctx->pc = 0x20ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED18u;
    // 0x20ed1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D398u, 0x20ED18u, 0x20ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED20u;
label_20ed20:
    // 0x20ed20: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x20ED20u;
    {
        const bool branch_taken_0x20ed20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED20u;
        // 0x20ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed20) {
            ctx->pc = 0x20EEE4u;
            goto label_20eee4;
        }
    }
    ctx->pc = 0x20ED28u;
    // 0x20ed28: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20ed2c: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20ed2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20ed30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20ed34: 0x2c620054  sltiu       $v0, $v1, 0x54
    ctx->pc = 0x20ed34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)84) ? 1 : 0);
    // 0x20ed38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20ED38u;
    {
        const bool branch_taken_0x20ed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED38u;
        // 0x20ed3c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed38) {
            ctx->pc = 0x20ED58u;
            goto label_20ed58;
        }
    }
    ctx->pc = 0x20ED40u;
    // 0x20ed40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ed44: 0x24422970  addiu       $v0, $v0, 0x2970
    ctx->pc = 0x20ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10608));
    // 0x20ed48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ed4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ed50: 0x800008  jr          $a0
    ctx->pc = 0x20ED50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20ED58u: goto label_20ed58;
            case 0x20EDACu: goto label_20edac;
            case 0x20EDE0u: goto label_20ede0;
            case 0x20EE34u: goto label_20ee34;
            case 0x20EE4Cu: goto label_20ee4c;
            case 0x20EE6Cu: goto label_20ee6c;
            case 0x20EE84u: goto label_20ee84;
            case 0x20EEA0u: goto label_20eea0;
            case 0x20EEB8u: goto label_20eeb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ED50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20ED58u;
label_20ed58:
    // 0x20ed58: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x20ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x20ed5c: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20ed5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x20ed60: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20ED60u;
    {
        const bool branch_taken_0x20ed60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED60u;
        // 0x20ed64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed60) {
            ctx->pc = 0x20ED88u;
            goto label_20ed88;
        }
    }
    ctx->pc = 0x20ED68u;
    // 0x20ed68: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20ED68u;
    SET_GPR_U32(ctx, 31, 0x20ED70u);
    ctx->pc = 0x20ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED68u;
    // 0x20ed6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20ED68u, 0x20ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED70u;
label_20ed70:
    // 0x20ed70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20ED70u;
    {
        const bool branch_taken_0x20ed70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED70u;
        // 0x20ed74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed70) {
            ctx->pc = 0x20ED88u;
            goto label_20ed88;
        }
    }
    ctx->pc = 0x20ED78u;
    // 0x20ed78: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20ed78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20ed7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20ed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20ed80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20ED80u;
    {
        const bool branch_taken_0x20ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED80u;
        // 0x20ed84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed80) {
            ctx->pc = 0x20ED9Cu;
            goto label_20ed9c;
        }
    }
    ctx->pc = 0x20ED88u;
label_20ed88:
    // 0x20ed88: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20ed88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ed8c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ed8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ed90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ed94: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x20ED94u;
    {
        const bool branch_taken_0x20ed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED94u;
        // 0x20ed98: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed94) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20ED9Cu;
label_20ed9c:
    // 0x20ed9c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20ed9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20eda0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20eda0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20eda4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x20EDA4u;
    {
        const bool branch_taken_0x20eda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDA4u;
        // 0x20eda8: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eda4) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EDACu;
label_20edac:
    // 0x20edac: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20EDACu;
    SET_GPR_U32(ctx, 31, 0x20EDB4u);
    ctx->pc = 0x20EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDACu;
    // 0x20edb0: 0xae2017a4  sw          $zero, 0x17A4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6052), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20EDACu, 0x20EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDB4u;
label_20edb4:
    // 0x20edb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20edb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20edb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EDB8u;
    {
        const bool branch_taken_0x20edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDB8u;
        // 0x20edbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edb8) {
            ctx->pc = 0x20EDCCu;
            goto label_20edcc;
        }
    }
    ctx->pc = 0x20EDC0u;
    // 0x20edc0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x20edc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x20edc4: 0x1000fdd3  b           . + 4 + (-0x22D << 2)
    ctx->pc = 0x20EDC4u;
    {
        const bool branch_taken_0x20edc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDC4u;
        // 0x20edc8: 0xa22202f7  sb          $v0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edc4) {
            ctx->pc = 0x20E514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e514;
        }
    }
    ctx->pc = 0x20EDCCu;
label_20edcc:
    // 0x20edcc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20edccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20edd0: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20edd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20edd4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20edd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20edd8: 0x1000fdd0  b           . + 4 + (-0x230 << 2)
    ctx->pc = 0x20EDD8u;
    {
        const bool branch_taken_0x20edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDD8u;
        // 0x20eddc: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edd8) {
            ctx->pc = 0x20E51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e51c;
        }
    }
    ctx->pc = 0x20EDE0u;
label_20ede0:
    // 0x20ede0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x20ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x20ede4: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20ede4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x20ede8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20EDE8u;
    {
        const bool branch_taken_0x20ede8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDE8u;
        // 0x20edec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ede8) {
            ctx->pc = 0x20EE10u;
            goto label_20ee10;
        }
    }
    ctx->pc = 0x20EDF0u;
    // 0x20edf0: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20EDF0u;
    SET_GPR_U32(ctx, 31, 0x20EDF8u);
    ctx->pc = 0x20EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDF0u;
    // 0x20edf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20EDF0u, 0x20EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDF8u;
label_20edf8:
    // 0x20edf8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EDF8u;
    {
        const bool branch_taken_0x20edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDF8u;
        // 0x20edfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edf8) {
            ctx->pc = 0x20EE10u;
            goto label_20ee10;
        }
    }
    ctx->pc = 0x20EE00u;
    // 0x20ee00: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20ee00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20ee04: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20ee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20ee08: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20EE08u;
    {
        const bool branch_taken_0x20ee08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ee08) {
            ctx->pc = 0x20EE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EE08u;
            // 0x20ee0c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EE24u;
            goto label_20ee24;
        }
    }
    ctx->pc = 0x20EE10u;
label_20ee10:
    // 0x20ee10: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20ee10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ee14: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ee14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ee18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ee1c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x20EE1Cu;
    {
        const bool branch_taken_0x20ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE1Cu;
        // 0x20ee20: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee1c) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EE24u;
label_20ee24:
    // 0x20ee24: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ee24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ee28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ee2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x20EE2Cu;
    {
        const bool branch_taken_0x20ee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE2Cu;
        // 0x20ee30: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee2c) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EE34u;
label_20ee34:
    // 0x20ee34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ee38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ee3c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ee3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ee40: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ee40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ee44: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x20EE44u;
    {
        const bool branch_taken_0x20ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE44u;
        // 0x20ee48: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee44) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EE4Cu;
label_20ee4c:
    // 0x20ee4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ee50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ee54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ee58: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ee58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ee5c: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20ee5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ee60: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x20ee60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x20ee64: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20EE64u;
    {
        const bool branch_taken_0x20ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE64u;
        // 0x20ee68: 0xae2017a4  sw          $zero, 0x17A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee64) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EE6Cu;
label_20ee6c:
    // 0x20ee6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ee70: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x20ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20ee74: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ee74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ee78: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ee78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ee7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20EE7Cu;
    {
        const bool branch_taken_0x20ee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE7Cu;
        // 0x20ee80: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee7c) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EE84u;
label_20ee84:
    // 0x20ee84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ee88: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20ee88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ee8c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ee90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ee94: 0xae2017a4  sw          $zero, 0x17A4($s1)
    ctx->pc = 0x20ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6052), GPR_U32(ctx, 0));
    // 0x20ee98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20EE98u;
    {
        const bool branch_taken_0x20ee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE98u;
        // 0x20ee9c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee98) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EEA0u;
label_20eea0:
    // 0x20eea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eea4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20eea8: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20eea8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20eeac: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20eeacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20eeb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20EEB0u;
    {
        const bool branch_taken_0x20eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEB0u;
        // 0x20eeb4: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eeb0) {
            ctx->pc = 0x20EEE0u;
            goto label_20eee0;
        }
    }
    ctx->pc = 0x20EEB8u;
label_20eeb8:
    // 0x20eeb8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x20eeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x20eebc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x20eebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x20eec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20eec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eec8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x20eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20eecc: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20eeccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20eed0: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x20eed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x20eed4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20eed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20eed8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20eed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20eedc: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x20eedcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
label_20eee0:
    // 0x20eee0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20eee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_20eee4:
    // 0x20eee4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20eee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20eee8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20eee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20eeec: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20eeecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20eef0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20eef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20eef4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20eef8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x20eef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20eefc: 0x3e00008  jr          $ra
    ctx->pc = 0x20EEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEFCu;
        // 0x20ef00: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EF04u;
    // 0x20ef04: 0x0  nop
    ctx->pc = 0x20ef04u;
    // NOP
    ctx->pc = 0x20ef08u;
}
