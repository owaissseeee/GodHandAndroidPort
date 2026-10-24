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

// Function: func_001630E8
// Address: 0x1630e8 - 0x1632a0
void func_001630E8_0x1630e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001630E8_0x1630e8");
#endif

    ctx->pc = 0x1630e8u;

    // 0x1630e8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1630e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1630ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1630ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630f0: 0x24423ec0  addiu       $v0, $v0, 0x3EC0
    ctx->pc = 0x1630f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x1630f4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x1630f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1630f8: 0x10800067  beqz        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1630F8u;
    {
        const bool branch_taken_0x1630f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1630FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630F8u;
        // 0x1630fc: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630f8) {
            ctx->pc = 0x163298u;
            goto label_163298;
        }
    }
    ctx->pc = 0x163100u;
    // 0x163100: 0x8c636b28  lw          $v1, 0x6B28($v1)
    ctx->pc = 0x163100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27432)));
    // 0x163104: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x163104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163108: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x163108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16310c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16310Cu;
    {
        const bool branch_taken_0x16310c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16310c) {
            ctx->pc = 0x163110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16310Cu;
            // 0x163110: 0x94830010  lhu         $v1, 0x10($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16312Cu;
            goto label_16312c;
        }
    }
    ctx->pc = 0x163114u;
    // 0x163114: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x163114u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x163118: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x163118u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x16311c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16311Cu;
    {
        const bool branch_taken_0x16311c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x163120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16311Cu;
        // 0x163120: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16311c) {
            ctx->pc = 0x163138u;
            goto label_163138;
        }
    }
    ctx->pc = 0x163124u;
    // 0x163124: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x163124u;
    {
        const bool branch_taken_0x163124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163124u;
        // 0x163128: 0x240820a3  addiu       $t0, $zero, 0x20A3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163124) {
            ctx->pc = 0x16314Cu;
            goto label_16314c;
        }
    }
    ctx->pc = 0x16312Cu;
label_16312c:
    // 0x16312c: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x16312cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x163130: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163130u;
    {
        const bool branch_taken_0x163130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x163134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163130u;
        // 0x163134: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163130) {
            ctx->pc = 0x163148u;
            goto label_163148;
        }
    }
    ctx->pc = 0x163138u;
label_163138:
    // 0x163138: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x163138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16313c: 0x24422013  addiu       $v0, $v0, 0x2013
    ctx->pc = 0x16313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8211));
    // 0x163140: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163140u;
    {
        const bool branch_taken_0x163140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163140u;
        // 0x163144: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163140) {
            ctx->pc = 0x16314Cu;
            goto label_16314c;
        }
    }
    ctx->pc = 0x163148u;
label_163148:
    // 0x163148: 0x240820a3  addiu       $t0, $zero, 0x20A3
    ctx->pc = 0x163148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
label_16314c:
    // 0x16314c: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x16314cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x163150: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x163150u;
    {
        const bool branch_taken_0x163150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163150u;
        // 0x163154: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163150) {
            ctx->pc = 0x163258u;
            goto label_163258;
        }
    }
    ctx->pc = 0x163158u;
    // 0x163158: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x163158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16315c: 0x2442f4e0  addiu       $v0, $v0, -0xB20
    ctx->pc = 0x16315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x163160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163164: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x163164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163168: 0x800008  jr          $a0
    ctx->pc = 0x163168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163170u: goto label_163170;
            case 0x16318Cu: goto label_16318c;
            case 0x1631A4u: goto label_1631a4;
            case 0x1631BCu: goto label_1631bc;
            case 0x1631D4u: goto label_1631d4;
            case 0x1631ECu: goto label_1631ec;
            case 0x163204u: goto label_163204;
            case 0x16321Cu: goto label_16321c;
            case 0x163234u: goto label_163234;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163168u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x163170u;
label_163170:
    // 0x163170: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x163170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x163174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163178: 0x3c014390  lui         $at, 0x4390
    ctx->pc = 0x163178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17296 << 16));
    // 0x16317c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x16317cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x163180: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163184: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x163184u;
    {
        const bool branch_taken_0x163184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163184u;
        // 0x163188: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163184) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x16318Cu;
label_16318c:
    // 0x16318c: 0x3c0142cc  lui         $at, 0x42CC
    ctx->pc = 0x16318cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17100 << 16));
    // 0x163190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163194: 0x3c014385  lui         $at, 0x4385
    ctx->pc = 0x163194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17285 << 16));
    // 0x163198: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16319c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x16319Cu;
    {
        const bool branch_taken_0x16319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16319Cu;
        // 0x1631a0: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16319c) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x1631A4u;
label_1631a4:
    // 0x1631a4: 0x3c014327  lui         $at, 0x4327
    ctx->pc = 0x1631a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17191 << 16));
    // 0x1631a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1631a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631ac: 0x3c014343  lui         $at, 0x4343
    ctx->pc = 0x1631acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17219 << 16));
    // 0x1631b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1631b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1631b4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1631B4u;
    {
        const bool branch_taken_0x1631b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631B4u;
        // 0x1631b8: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631b4) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x1631BCu;
label_1631bc:
    // 0x1631bc: 0x3c014306  lui         $at, 0x4306
    ctx->pc = 0x1631bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17158 << 16));
    // 0x1631c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1631c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631c4: 0x3c0142b8  lui         $at, 0x42B8
    ctx->pc = 0x1631c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17080 << 16));
    // 0x1631c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1631c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1631cc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1631CCu;
    {
        const bool branch_taken_0x1631cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631CCu;
        // 0x1631d0: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631cc) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x1631D4u;
label_1631d4:
    // 0x1631d4: 0x3c01436b  lui         $at, 0x436B
    ctx->pc = 0x1631d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17259 << 16));
    // 0x1631d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1631d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631dc: 0x3c0142fc  lui         $at, 0x42FC
    ctx->pc = 0x1631dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17148 << 16));
    // 0x1631e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1631e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1631e4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1631E4u;
    {
        const bool branch_taken_0x1631e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631E4u;
        // 0x1631e8: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631e4) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x1631ECu;
label_1631ec:
    // 0x1631ec: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x1631ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x1631f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1631f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631f4: 0x3c01433e  lui         $at, 0x433E
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17214 << 16));
    // 0x1631f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1631f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1631fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1631FCu;
    {
        const bool branch_taken_0x1631fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631FCu;
        // 0x163200: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631fc) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x163204u;
label_163204:
    // 0x163204: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x163208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16320c: 0x3c0142b0  lui         $at, 0x42B0
    ctx->pc = 0x16320cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17072 << 16));
    // 0x163210: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163214: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x163214u;
    {
        const bool branch_taken_0x163214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163214u;
        // 0x163218: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163214) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x16321Cu;
label_16321c:
    // 0x16321c: 0x3c0143cc  lui         $at, 0x43CC
    ctx->pc = 0x16321cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17356 << 16));
    // 0x163220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163224: 0x3c0142b0  lui         $at, 0x42B0
    ctx->pc = 0x163224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17072 << 16));
    // 0x163228: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16322c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16322Cu;
    {
        const bool branch_taken_0x16322c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16322Cu;
        // 0x163230: 0x8ce30080  lw          $v1, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16322c) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x163234u;
label_163234:
    // 0x163234: 0x8ce30080  lw          $v1, 0x80($a3)
    ctx->pc = 0x163234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x163238: 0x3c0143e3  lui         $at, 0x43E3
    ctx->pc = 0x163238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17379 << 16));
    // 0x16323c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x16323cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x163240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163244: 0x3c01423c  lui         $at, 0x423C
    ctx->pc = 0x163244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16956 << 16));
    // 0x163248: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16324c:
    // 0x16324c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x16324cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x163250: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x163250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x163254: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x163254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_163258:
    // 0x163258: 0x8ce40080  lw          $a0, 0x80($a3)
    ctx->pc = 0x163258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x16325c: 0x2d0320a4  sltiu       $v1, $t0, 0x20A4
    ctx->pc = 0x16325cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8356) ? 1 : 0);
    // 0x163260: 0x240220a3  addiu       $v0, $zero, 0x20A3
    ctx->pc = 0x163260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
    // 0x163264: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x163264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x163268: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x163268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16326c: 0x43400a  movz        $t0, $v0, $v1
    ctx->pc = 0x16326cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x163270: 0x24052022  addiu       $a1, $zero, 0x2022
    ctx->pc = 0x163270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8226));
    // 0x163274: 0xe4e10128  swc1        $f1, 0x128($a3)
    ctx->pc = 0x163274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 296), bits); }
    // 0x163278: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x163278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16327c: 0xe4e0012c  swc1        $f0, 0x12C($a3)
    ctx->pc = 0x16327cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 300), bits); }
    // 0x163280: 0x8cc223a4  lw          $v0, 0x23A4($a2)
    ctx->pc = 0x163280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9124)));
    // 0x163284: 0xa4480bee  sh          $t0, 0xBEE($v0)
    ctx->pc = 0x163284u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 3054), (uint16_t)GPR_U32(ctx, 8));
    // 0x163288: 0x8ce300e4  lw          $v1, 0xE4($a3)
    ctx->pc = 0x163288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 228)));
    // 0x16328c: 0xa4650090  sh          $a1, 0x90($v1)
    ctx->pc = 0x16328cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x163290: 0x8ce200e8  lw          $v0, 0xE8($a3)
    ctx->pc = 0x163290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
    // 0x163294: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x163294u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
label_163298:
    // 0x163298: 0x3e00008  jr          $ra
    ctx->pc = 0x163298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1632A0u;
}
