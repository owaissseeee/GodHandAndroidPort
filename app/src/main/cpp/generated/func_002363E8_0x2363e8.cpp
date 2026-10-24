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

// Function: func_002363E8
// Address: 0x2363e8 - 0x2367c0
void func_002363E8_0x2363e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002363E8_0x2363e8");
#endif

    switch (ctx->pc) {
        case 0x236404u: goto label_236404;
        case 0x23641cu: goto label_23641c;
        case 0x236474u: goto label_236474;
        case 0x236480u: goto label_236480;
        case 0x2364ecu: goto label_2364ec;
        case 0x236570u: goto label_236570;
        case 0x2365b8u: goto label_2365b8;
        case 0x2365ccu: goto label_2365cc;
        case 0x236624u: goto label_236624;
        case 0x2366c0u: goto label_2366c0;
        case 0x2366e0u: goto label_2366e0;
        case 0x23670cu: goto label_23670c;
        case 0x236718u: goto label_236718;
        case 0x236750u: goto label_236750;
        case 0x236770u: goto label_236770;
        case 0x236780u: goto label_236780;
        case 0x236798u: goto label_236798;
        case 0x2367a4u: goto label_2367a4;
        default: break;
    }

    ctx->pc = 0x2363e8u;

    // 0x2363e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2363e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2363ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2363ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2363f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2363f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2363f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2363f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2363f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2363f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2363fc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2363FCu;
    SET_GPR_U32(ctx, 31, 0x236404u);
    ctx->pc = 0x236400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363FCu;
    // 0x236400: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2363FCu, 0x236404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236404u;
label_236404:
    // 0x236404: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x236404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x236408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23640c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x23640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x236410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236414: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x236414u;
    SET_GPR_U32(ctx, 31, 0x23641Cu);
    ctx->pc = 0x236418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236414u;
    // 0x236418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x236414u, 0x23641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23641Cu;
label_23641c:
    // 0x23641c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23641cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236420: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x236420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x236424: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x236424u;
    {
        const bool branch_taken_0x236424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236424u;
        // 0x236428: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236424) {
            ctx->pc = 0x2367A4u;
            goto label_2367a4;
        }
    }
    ctx->pc = 0x23642Cu;
    // 0x23642c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23642cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236430: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x236430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x236434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x236434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236438: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x236438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23643c: 0x800008  jr          $a0
    ctx->pc = 0x23643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236444u: goto label_236444;
            case 0x2364E4u: goto label_2364e4;
            case 0x236588u: goto label_236588;
            case 0x2365C4u: goto label_2365c4;
            case 0x23667Cu: goto label_23667c;
            case 0x2366CCu: goto label_2366cc;
            case 0x236720u: goto label_236720;
            case 0x23675Cu: goto label_23675c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23643Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x236444u;
label_236444:
    // 0x236444: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x236448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23644c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23644cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x236450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236454: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236458: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23645c: 0x8c4507e8  lw          $a1, 0x7E8($v0)
    ctx->pc = 0x23645cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2024)));
    // 0x236460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236464: 0x8c4607ec  lw          $a2, 0x7EC($v0)
    ctx->pc = 0x236464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2028)));
    // 0x236468: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23646c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23646Cu;
    SET_GPR_U32(ctx, 31, 0x236474u);
    ctx->pc = 0x236470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23646Cu;
    // 0x236470: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23646Cu, 0x236474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236474u;
label_236474:
    // 0x236474: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x236474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x236478: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x236478u;
    SET_GPR_U32(ctx, 31, 0x236480u);
    ctx->pc = 0x23647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236478u;
    // 0x23647c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x236478u, 0x236480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236480u;
label_236480:
    // 0x236480: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x236480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x236484: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x236484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x236488: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236488u;
    {
        const bool branch_taken_0x236488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236488u;
        // 0x23648c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236488) {
            ctx->pc = 0x2364A8u;
            goto label_2364a8;
        }
    }
    ctx->pc = 0x236490u;
    // 0x236490: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236494: 0x2442a260  addiu       $v0, $v0, -0x5DA0
    ctx->pc = 0x236494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943328));
    // 0x236498: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x236498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23649c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2364a0: 0x800008  jr          $a0
    ctx->pc = 0x2364A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2364A8u: goto label_2364a8;
            case 0x2364B0u: goto label_2364b0;
            case 0x2364B8u: goto label_2364b8;
            case 0x2364C0u: goto label_2364c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2364A8u;
label_2364a8:
    // 0x2364a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2364A8u;
    {
        const bool branch_taken_0x2364a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A8u;
        // 0x2364ac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364a8) {
            ctx->pc = 0x2364C4u;
            goto label_2364c4;
        }
    }
    ctx->pc = 0x2364B0u;
label_2364b0:
    // 0x2364b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2364B0u;
    {
        const bool branch_taken_0x2364b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B0u;
        // 0x2364b4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364b0) {
            ctx->pc = 0x2364C4u;
            goto label_2364c4;
        }
    }
    ctx->pc = 0x2364B8u;
label_2364b8:
    // 0x2364b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2364B8u;
    {
        const bool branch_taken_0x2364b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B8u;
        // 0x2364bc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364b8) {
            ctx->pc = 0x2364C4u;
            goto label_2364c4;
        }
    }
    ctx->pc = 0x2364C0u;
label_2364c0:
    // 0x2364c0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2364c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2364c4:
    // 0x2364c4: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2364c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x2364c8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2364c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2364cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2364ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2364d0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2364d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2364d4: 0xa603056a  sh          $v1, 0x56A($s0)
    ctx->pc = 0x2364d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x2364d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2364d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2364dc: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x2364dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x2364e0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2364e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2364e4:
    // 0x2364e4: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x2364E4u;
    SET_GPR_U32(ctx, 31, 0x2364ECu);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x2364E4u, 0x2364ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364ECu;
label_2364ec:
    // 0x2364ec: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x2364ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x2364f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2364F0u;
    {
        const bool branch_taken_0x2364f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364F0u;
        // 0x2364f4: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364f0) {
            ctx->pc = 0x236518u;
            goto label_236518;
        }
    }
    ctx->pc = 0x2364F8u;
    // 0x2364f8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2364f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2364fc: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x2364fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x236500: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x236500u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x236504: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x236504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x236508: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x236508u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23650c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x23650cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236510: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x236510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x236514: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x236514u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_236518:
    // 0x236518: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x236518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x23651c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x23651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x236520: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x236520u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x236524: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x236524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x236528: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x236528u;
    {
        const bool branch_taken_0x236528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236528) {
            ctx->pc = 0x23652Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236528u;
            // 0x23652c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236540u;
            goto label_236540;
        }
    }
    ctx->pc = 0x236530u;
    // 0x236530: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x236530u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x236534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x236534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x236538: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x236538u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x23653c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23653cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_236540:
    // 0x236540: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x236540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x236544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x236544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x236548: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236548u;
    {
        const bool branch_taken_0x236548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236548) {
            ctx->pc = 0x23655Cu;
            goto label_23655c;
        }
    }
    ctx->pc = 0x236550u;
    // 0x236550: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x236550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x236554: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x236554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x236558: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x236558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_23655c:
    // 0x23655c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23655cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236568: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236568u;
    SET_GPR_U32(ctx, 31, 0x236570u);
    ctx->pc = 0x23656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236568u;
    // 0x23656c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236568u, 0x236570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236570u;
label_236570:
    // 0x236570: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x236570u;
    {
        const bool branch_taken_0x236570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236570) {
            ctx->pc = 0x2366F8u;
            goto label_2366f8;
        }
    }
    ctx->pc = 0x236578u;
    // 0x236578: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x236578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23657c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236580: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x236580u;
    {
        const bool branch_taken_0x236580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236580u;
        // 0x236584: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236580) {
            ctx->pc = 0x2366F8u;
            goto label_2366f8;
        }
    }
    ctx->pc = 0x236588u;
label_236588:
    // 0x236588: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23658c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236590: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x236594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23659c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23659cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365a0: 0x8c4507d8  lw          $a1, 0x7D8($v0)
    ctx->pc = 0x2365a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2008)));
    // 0x2365a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2365a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365a8: 0x8c4607dc  lw          $a2, 0x7DC($v0)
    ctx->pc = 0x2365a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2365ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2365acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2365b0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2365B0u;
    SET_GPR_U32(ctx, 31, 0x2365B8u);
    ctx->pc = 0x2365B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365B0u;
    // 0x2365b4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2365B0u, 0x2365B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365B8u;
label_2365b8:
    // 0x2365b8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2365b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2365bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2365bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2365c0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2365c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2365c4:
    // 0x2365c4: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x2365C4u;
    SET_GPR_U32(ctx, 31, 0x2365CCu);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x2365C4u, 0x2365CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365CCu;
label_2365cc:
    // 0x2365cc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2365ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2365d0: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x2365d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2365d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2365d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x2365d8: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2365d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2365dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2365DCu;
    {
        const bool branch_taken_0x2365dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2365dc) {
            ctx->pc = 0x2365E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2365DCu;
            // 0x2365e0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2365F4u;
            goto label_2365f4;
        }
    }
    ctx->pc = 0x2365E4u;
    // 0x2365e4: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x2365e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x2365e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2365e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2365ec: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2365ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x2365f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2365f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2365f4:
    // 0x2365f4: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x2365f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x2365f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2365f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2365fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2365FCu;
    {
        const bool branch_taken_0x2365fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2365fc) {
            ctx->pc = 0x236610u;
            goto label_236610;
        }
    }
    ctx->pc = 0x236604u;
    // 0x236604: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x236604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x236608: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x236608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x23660c: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x23660cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_236610:
    // 0x236610: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236614: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23661c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23661Cu;
    SET_GPR_U32(ctx, 31, 0x236624u);
    ctx->pc = 0x236620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23661Cu;
    // 0x236620: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23661Cu, 0x236624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236624u;
label_236624:
    // 0x236624: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x236624u;
    {
        const bool branch_taken_0x236624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236624) {
            ctx->pc = 0x2366F8u;
            goto label_2366f8;
        }
    }
    ctx->pc = 0x23662Cu;
    // 0x23662c: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x23662cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x236630: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236630u;
    {
        const bool branch_taken_0x236630 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x236630) {
            ctx->pc = 0x236634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236630u;
            // 0x236634: 0x9602056a  lhu         $v0, 0x56A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236648u;
            goto label_236648;
        }
    }
    ctx->pc = 0x236638u;
    // 0x236638: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x236638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23663c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23663cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x236640: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x236640u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x236644: 0x9602056a  lhu         $v0, 0x56A($s0)
    ctx->pc = 0x236644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_236648:
    // 0x236648: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x236648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23664c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x23664cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x236650: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x236650u;
    {
        const bool branch_taken_0x236650 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x236654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236650u;
        // 0x236654: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236650) {
            ctx->pc = 0x236664u;
            goto label_236664;
        }
    }
    ctx->pc = 0x236658u;
    // 0x236658: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x236658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23665c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23665cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x236660: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x236660u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_236664:
    // 0x236664: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x236664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x236668: 0x1c400023  bgtz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x236668u;
    {
        const bool branch_taken_0x236668 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x23666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236668u;
        // 0x23666c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236668) {
            ctx->pc = 0x2366F8u;
            goto label_2366f8;
        }
    }
    ctx->pc = 0x236670u;
    // 0x236670: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x236670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x236674: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x236674u;
    {
        const bool branch_taken_0x236674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236674u;
        // 0x236678: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236674) {
            ctx->pc = 0x2366F8u;
            goto label_2366f8;
        }
    }
    ctx->pc = 0x23667Cu;
label_23667c:
    // 0x23667c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23667cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236680: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x236680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x236684: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236684u;
    {
        const bool branch_taken_0x236684 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x236688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236684u;
        // 0x236688: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236684) {
            ctx->pc = 0x236698u;
            goto label_236698;
        }
    }
    ctx->pc = 0x23668Cu;
    // 0x23668c: 0x8c4307f0  lw          $v1, 0x7F0($v0)
    ctx->pc = 0x23668cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2032)));
    // 0x236690: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236690u;
    {
        const bool branch_taken_0x236690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236690u;
        // 0x236694: 0x8c4407f4  lw          $a0, 0x7F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236690) {
            ctx->pc = 0x2366A0u;
            goto label_2366a0;
        }
    }
    ctx->pc = 0x236698u;
label_236698:
    // 0x236698: 0x8c4307e0  lw          $v1, 0x7E0($v0)
    ctx->pc = 0x236698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2016)));
    // 0x23669c: 0x8c4407e4  lw          $a0, 0x7E4($v0)
    ctx->pc = 0x23669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2020)));
label_2366a0:
    // 0x2366a0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2366a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2366a4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2366a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2366a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2366a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2366ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2366acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366b0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2366b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2366b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2366b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366b8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2366B8u;
    SET_GPR_U32(ctx, 31, 0x2366C0u);
    ctx->pc = 0x2366BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366B8u;
    // 0x2366bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2366B8u, 0x2366C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366C0u;
label_2366c0:
    // 0x2366c0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2366c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2366c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2366c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2366c8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2366c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2366cc:
    // 0x2366cc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2366ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2366d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2366d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2366d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2366d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366d8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2366D8u;
    SET_GPR_U32(ctx, 31, 0x2366E0u);
    ctx->pc = 0x2366DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366D8u;
    // 0x2366dc: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2366D8u, 0x2366E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366E0u;
label_2366e0:
    // 0x2366e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2366E0u;
    {
        const bool branch_taken_0x2366e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2366E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366E0u;
        // 0x2366e4: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366e0) {
            ctx->pc = 0x2366F8u;
            goto label_2366f8;
        }
    }
    ctx->pc = 0x2366E8u;
    // 0x2366e8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2366e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2366ec: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2366ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2366f0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2366f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2366f4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2366f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_2366f8:
    // 0x2366f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2366f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2366fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2366fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236704: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236704u;
    SET_GPR_U32(ctx, 31, 0x23670Cu);
    ctx->pc = 0x236708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236704u;
    // 0x236708: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236704u, 0x23670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23670Cu;
label_23670c:
    // 0x23670c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23670cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236710: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236710u;
    SET_GPR_U32(ctx, 31, 0x236718u);
    ctx->pc = 0x236714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236710u;
    // 0x236714: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236710u, 0x236718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236718u;
label_236718:
    // 0x236718: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x236718u;
    {
        const bool branch_taken_0x236718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236718u;
        // 0x23671c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236718) {
            ctx->pc = 0x2367A8u;
            goto label_2367a8;
        }
    }
    ctx->pc = 0x236720u;
label_236720:
    // 0x236720: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x236724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236728: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23672c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23672cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x236730: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236738: 0x8c4507e0  lw          $a1, 0x7E0($v0)
    ctx->pc = 0x236738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2016)));
    // 0x23673c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23673cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236740: 0x8c4607e4  lw          $a2, 0x7E4($v0)
    ctx->pc = 0x236740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2020)));
    // 0x236744: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236748: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x236748u;
    SET_GPR_U32(ctx, 31, 0x236750u);
    ctx->pc = 0x23674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236748u;
    // 0x23674c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x236748u, 0x236750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236750u;
label_236750:
    // 0x236750: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x236750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236758: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x236758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23675c:
    // 0x23675c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23675cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236768: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236768u;
    SET_GPR_U32(ctx, 31, 0x236770u);
    ctx->pc = 0x23676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236768u;
    // 0x23676c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236768u, 0x236770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236770u;
label_236770:
    // 0x236770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236770u;
    {
        const bool branch_taken_0x236770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236770u;
        // 0x236774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236770) {
            ctx->pc = 0x236788u;
            goto label_236788;
        }
    }
    ctx->pc = 0x236778u;
    // 0x236778: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x236778u;
    SET_GPR_U32(ctx, 31, 0x236780u);
    ctx->pc = 0x23677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236778u;
    // 0x23677c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x236778u, 0x236780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236780u;
label_236780:
    // 0x236780: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x236780u;
    {
        const bool branch_taken_0x236780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236780u;
        // 0x236784: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236780) {
            ctx->pc = 0x2367A8u;
            goto label_2367a8;
        }
    }
    ctx->pc = 0x236788u;
label_236788:
    // 0x236788: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23678c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23678cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236790: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236790u;
    SET_GPR_U32(ctx, 31, 0x236798u);
    ctx->pc = 0x236794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236790u;
    // 0x236794: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236790u, 0x236798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236798u;
label_236798:
    // 0x236798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23679c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23679Cu;
    SET_GPR_U32(ctx, 31, 0x2367A4u);
    ctx->pc = 0x2367A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23679Cu;
    // 0x2367a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23679Cu, 0x2367A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2367A4u;
label_2367a4:
    // 0x2367a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2367a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2367a8:
    // 0x2367a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2367a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2367ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2367acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2367b0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2367b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2367b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2367B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2367B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367B4u;
        // 0x2367b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2367B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2367BCu;
    // 0x2367bc: 0x0  nop
    ctx->pc = 0x2367bcu;
    // NOP
    ctx->pc = 0x2367c0u;
}
