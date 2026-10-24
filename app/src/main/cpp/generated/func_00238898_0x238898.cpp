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

// Function: func_00238898
// Address: 0x238898 - 0x238c50
void func_00238898_0x238898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00238898_0x238898");
#endif

    switch (ctx->pc) {
        case 0x2388b4u: goto label_2388b4;
        case 0x238910u: goto label_238910;
        case 0x23891cu: goto label_23891c;
        case 0x23898cu: goto label_23898c;
        case 0x2389ccu: goto label_2389cc;
        case 0x238a18u: goto label_238a18;
        case 0x238a38u: goto label_238a38;
        case 0x238a4cu: goto label_238a4c;
        case 0x238a70u: goto label_238a70;
        case 0x238a7cu: goto label_238a7c;
        case 0x238a90u: goto label_238a90;
        case 0x238b1cu: goto label_238b1c;
        case 0x238b3cu: goto label_238b3c;
        case 0x238b64u: goto label_238b64;
        case 0x238b70u: goto label_238b70;
        case 0x238b7cu: goto label_238b7c;
        case 0x238bb0u: goto label_238bb0;
        case 0x238becu: goto label_238bec;
        case 0x238c04u: goto label_238c04;
        case 0x238c14u: goto label_238c14;
        case 0x238c2cu: goto label_238c2c;
        case 0x238c38u: goto label_238c38;
        default: break;
    }

    ctx->pc = 0x238898u;

    // 0x238898: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23889c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23889cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2388a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2388a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2388a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2388a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2388a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2388ac: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2388ACu;
    SET_GPR_U32(ctx, 31, 0x2388B4u);
    ctx->pc = 0x2388B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388ACu;
    // 0x2388b0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2388ACu, 0x2388B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388B4u;
label_2388b4:
    // 0x2388b4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2388b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2388b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2388b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388bc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2388bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2388c0: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x2388C0u;
    {
        const bool branch_taken_0x2388c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2388C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388C0u;
        // 0x2388c4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2388c0) {
            ctx->pc = 0x238C38u;
            goto label_238c38;
        }
    }
    ctx->pc = 0x2388C8u;
    // 0x2388c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2388c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2388cc: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x2388ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x2388d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2388d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2388d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2388d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2388d8: 0x800008  jr          $a0
    ctx->pc = 0x2388D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2388E0u: goto label_2388e0;
            case 0x238978u: goto label_238978;
            case 0x2389E8u: goto label_2389e8;
            case 0x238A24u: goto label_238a24;
            case 0x238AF0u: goto label_238af0;
            case 0x238B28u: goto label_238b28;
            case 0x238B84u: goto label_238b84;
            case 0x238BC4u: goto label_238bc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2388D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2388E0u;
label_2388e0:
    // 0x2388e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2388e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2388e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2388e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388e8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2388e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2388ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2388ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2388f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2388f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2388f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388f8: 0x8c453224  lw          $a1, 0x3224($v0)
    ctx->pc = 0x2388f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12836)));
    // 0x2388fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2388fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238900: 0x8c463228  lw          $a2, 0x3228($v0)
    ctx->pc = 0x238900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12840)));
    // 0x238904: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238908: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238908u;
    SET_GPR_U32(ctx, 31, 0x238910u);
    ctx->pc = 0x23890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238908u;
    // 0x23890c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238908u, 0x238910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238910u;
label_238910:
    // 0x238910: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x238910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x238914: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x238914u;
    SET_GPR_U32(ctx, 31, 0x23891Cu);
    ctx->pc = 0x238918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238914u;
    // 0x238918: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x238914u, 0x23891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23891Cu;
label_23891c:
    // 0x23891c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x23891cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x238920: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x238920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x238924: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238924u;
    {
        const bool branch_taken_0x238924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238924u;
        // 0x238928: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238924) {
            ctx->pc = 0x238944u;
            goto label_238944;
        }
    }
    ctx->pc = 0x23892Cu;
    // 0x23892c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23892cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x238930: 0x2442a3a0  addiu       $v0, $v0, -0x5C60
    ctx->pc = 0x238930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943648));
    // 0x238934: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x238934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x238938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23893c: 0x800008  jr          $a0
    ctx->pc = 0x23893Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238944u: goto label_238944;
            case 0x23894Cu: goto label_23894c;
            case 0x238954u: goto label_238954;
            case 0x23895Cu: goto label_23895c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23893Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x238944u;
label_238944:
    // 0x238944: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238944u;
    {
        const bool branch_taken_0x238944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238944u;
        // 0x238948: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238944) {
            ctx->pc = 0x238960u;
            goto label_238960;
        }
    }
    ctx->pc = 0x23894Cu;
label_23894c:
    // 0x23894c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23894Cu;
    {
        const bool branch_taken_0x23894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23894Cu;
        // 0x238950: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23894c) {
            ctx->pc = 0x238960u;
            goto label_238960;
        }
    }
    ctx->pc = 0x238954u;
label_238954:
    // 0x238954: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x238954u;
    {
        const bool branch_taken_0x238954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238954u;
        // 0x238958: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238954) {
            ctx->pc = 0x238960u;
            goto label_238960;
        }
    }
    ctx->pc = 0x23895Cu;
label_23895c:
    // 0x23895c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_238960:
    // 0x238960: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x238960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x238964: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x238964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238968: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x238968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23896c: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x23896cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x238970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238974: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_238978:
    // 0x238978: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x23897c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23897cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238980: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x238980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x238984: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x238984u;
    SET_GPR_U32(ctx, 31, 0x23898Cu);
    ctx->pc = 0x238988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238984u;
    // 0x238988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x238984u, 0x23898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23898Cu;
label_23898c:
    // 0x23898c: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x23898cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x238990: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238990u;
    {
        const bool branch_taken_0x238990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238990u;
        // 0x238994: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238990) {
            ctx->pc = 0x2389B8u;
            goto label_2389b8;
        }
    }
    ctx->pc = 0x238998u;
    // 0x238998: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x238998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23899c: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x23899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x2389a0: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x2389a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x2389a4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2389a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2389a8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2389a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2389ac: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2389acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2389b0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2389b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2389b4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2389b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2389b8:
    // 0x2389b8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2389b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2389bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2389bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2389c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2389c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389c4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2389C4u;
    SET_GPR_U32(ctx, 31, 0x2389CCu);
    ctx->pc = 0x2389C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389C4u;
    // 0x2389c8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2389C4u, 0x2389CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389CCu;
label_2389cc:
    // 0x2389cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2389CCu;
    {
        const bool branch_taken_0x2389cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389CCu;
        // 0x2389d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389cc) {
            ctx->pc = 0x2389D8u;
            goto label_2389d8;
        }
    }
    ctx->pc = 0x2389D4u;
    // 0x2389d4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2389d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2389d8:
    // 0x2389d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2389d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2389dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2389dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2389e0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2389E0u;
    {
        const bool branch_taken_0x2389e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389E0u;
        // 0x2389e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389e0) {
            ctx->pc = 0x238B68u;
            goto label_238b68;
        }
    }
    ctx->pc = 0x2389E8u;
label_2389e8:
    // 0x2389e8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2389e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2389ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2389ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389f0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2389f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2389f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2389f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2389f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2389fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2389fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a00: 0x8c45322c  lw          $a1, 0x322C($v0)
    ctx->pc = 0x238a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12844)));
    // 0x238a04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x238a04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a08: 0x8c463230  lw          $a2, 0x3230($v0)
    ctx->pc = 0x238a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12848)));
    // 0x238a0c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238a10: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238A10u;
    SET_GPR_U32(ctx, 31, 0x238A18u);
    ctx->pc = 0x238A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A10u;
    // 0x238a14: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238A10u, 0x238A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A18u;
label_238a18:
    // 0x238a18: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x238a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238a1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238a20: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_238a24:
    // 0x238a24: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x238a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x238a28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a2c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x238a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x238a30: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x238A30u;
    SET_GPR_U32(ctx, 31, 0x238A38u);
    ctx->pc = 0x238A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A30u;
    // 0x238a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x238A30u, 0x238A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A38u;
label_238a38:
    // 0x238a38: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x238a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x238a3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a44: 0xc055f06  jal         func_157C18
    ctx->pc = 0x238A44u;
    SET_GPR_U32(ctx, 31, 0x238A4Cu);
    ctx->pc = 0x238A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A44u;
    // 0x238a48: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x238A44u, 0x238A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A4Cu;
label_238a4c:
    // 0x238a4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238A4Cu;
    {
        const bool branch_taken_0x238a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A4Cu;
        // 0x238a50: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a4c) {
            ctx->pc = 0x238A5Cu;
            goto label_238a5c;
        }
    }
    ctx->pc = 0x238A54u;
    // 0x238a54: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x238a54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x238a58: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_238a5c:
    // 0x238a5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238a60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a68: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x238A68u;
    SET_GPR_U32(ctx, 31, 0x238A70u);
    ctx->pc = 0x238A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A68u;
    // 0x238a6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x238A68u, 0x238A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A70u;
label_238a70:
    // 0x238a70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x238a70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x238a74: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x238A74u;
    SET_GPR_U32(ctx, 31, 0x238A7Cu);
    ctx->pc = 0x238A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A74u;
    // 0x238a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x238A74u, 0x238A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A7Cu;
label_238a7c:
    // 0x238a7c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x238a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x238a80: 0x5840006e  blezl       $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x238A80u;
    {
        const bool branch_taken_0x238a80 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x238a80) {
            ctx->pc = 0x238A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238A80u;
            // 0x238a84: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C3Cu;
            goto label_238c3c;
        }
    }
    ctx->pc = 0x238A88u;
    // 0x238a88: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x238A88u;
    SET_GPR_U32(ctx, 31, 0x238A90u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x238A88u, 0x238A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A90u;
label_238a90:
    // 0x238a90: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x238a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x238a94: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x238a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x238a98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x238a98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x238a9c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x238a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x238aa0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x238AA0u;
    {
        const bool branch_taken_0x238aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238aa0) {
            ctx->pc = 0x238AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238AA0u;
            // 0x238aa4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238AB8u;
            goto label_238ab8;
        }
    }
    ctx->pc = 0x238AA8u;
    // 0x238aa8: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x238aa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x238aac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x238aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x238ab0: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x238ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x238ab4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x238ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_238ab8:
    // 0x238ab8: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x238ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x238abc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x238ac0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x238AC0u;
    {
        const bool branch_taken_0x238ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238ac0) {
            ctx->pc = 0x238AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238AC0u;
            // 0x238ac4: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238AD8u;
            goto label_238ad8;
        }
    }
    ctx->pc = 0x238AC8u;
    // 0x238ac8: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x238ac8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x238acc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x238accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x238ad0: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x238ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x238ad4: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x238ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_238ad8:
    // 0x238ad8: 0x5c400058  bgtzl       $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x238AD8u;
    {
        const bool branch_taken_0x238ad8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x238ad8) {
            ctx->pc = 0x238ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238AD8u;
            // 0x238adc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C3Cu;
            goto label_238c3c;
        }
    }
    ctx->pc = 0x238AE0u;
    // 0x238ae0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x238ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x238ae4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x238ae8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x238AE8u;
    {
        const bool branch_taken_0x238ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AE8u;
        // 0x238aec: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ae8) {
            ctx->pc = 0x238C38u;
            goto label_238c38;
        }
    }
    ctx->pc = 0x238AF0u;
label_238af0:
    // 0x238af0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x238af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x238af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238af8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x238afc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x238afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x238b00: 0x8c453234  lw          $a1, 0x3234($v0)
    ctx->pc = 0x238b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12852)));
    // 0x238b04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x238b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b08: 0x8c463238  lw          $a2, 0x3238($v0)
    ctx->pc = 0x238b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12856)));
    // 0x238b0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x238b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b10: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238b14: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238B14u;
    SET_GPR_U32(ctx, 31, 0x238B1Cu);
    ctx->pc = 0x238B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B14u;
    // 0x238b18: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238B14u, 0x238B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B1Cu;
label_238b1c:
    // 0x238b1c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x238b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238b20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238b24: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238b24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_238b28:
    // 0x238b28: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x238b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x238b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b34: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x238B34u;
    SET_GPR_U32(ctx, 31, 0x238B3Cu);
    ctx->pc = 0x238B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B34u;
    // 0x238b38: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x238B34u, 0x238B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B3Cu;
label_238b3c:
    // 0x238b3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238b40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238b44: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x238b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x238b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b4c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x238b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x238b50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238b54: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x238b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x238b58: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x238b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x238b5c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x238B5Cu;
    SET_GPR_U32(ctx, 31, 0x238B64u);
    ctx->pc = 0x238B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B5Cu;
    // 0x238b60: 0xa6020434  sh          $v0, 0x434($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x238B5Cu, 0x238B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B64u;
label_238b64:
    // 0x238b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238b68:
    // 0x238b68: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x238B68u;
    SET_GPR_U32(ctx, 31, 0x238B70u);
    ctx->pc = 0x238B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B68u;
    // 0x238b6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x238B68u, 0x238B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B70u;
label_238b70:
    // 0x238b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b74: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x238B74u;
    SET_GPR_U32(ctx, 31, 0x238B7Cu);
    ctx->pc = 0x238B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B74u;
    // 0x238b78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x238B74u, 0x238B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B7Cu;
label_238b7c:
    // 0x238b7c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x238B7Cu;
    {
        const bool branch_taken_0x238b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B7Cu;
        // 0x238b80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b7c) {
            ctx->pc = 0x238C3Cu;
            goto label_238c3c;
        }
    }
    ctx->pc = 0x238B84u;
label_238b84:
    // 0x238b84: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x238b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x238b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x238b90: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x238b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x238b94: 0x8c45323c  lw          $a1, 0x323C($v0)
    ctx->pc = 0x238b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12860)));
    // 0x238b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x238b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b9c: 0x8c463240  lw          $a2, 0x3240($v0)
    ctx->pc = 0x238b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12864)));
    // 0x238ba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x238ba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ba4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238ba8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238BA8u;
    SET_GPR_U32(ctx, 31, 0x238BB0u);
    ctx->pc = 0x238BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BA8u;
    // 0x238bac: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238BA8u, 0x238BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BB0u;
label_238bb0:
    // 0x238bb0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x238bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238bb4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x238bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x238bb8: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x238bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x238bbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238bc0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_238bc4:
    // 0x238bc4: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x238bc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x238bc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x238BC8u;
    {
        const bool branch_taken_0x238bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BC8u;
        // 0x238bcc: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bc8) {
            ctx->pc = 0x238BFCu;
            goto label_238bfc;
        }
    }
    ctx->pc = 0x238BD0u;
    // 0x238bd0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x238bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x238bd4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x238bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x238bd8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x238bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x238bdc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x238bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x238be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238be4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x238BE4u;
    SET_GPR_U32(ctx, 31, 0x238BECu);
    ctx->pc = 0x238BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BE4u;
    // 0x238be8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x238BE4u, 0x238BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BECu;
label_238bec:
    // 0x238bec: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x238becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x238bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238bf4: 0x0  nop
    ctx->pc = 0x238bf4u;
    // NOP
    // 0x238bf8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x238bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_238bfc:
    // 0x238bfc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x238BFCu;
    SET_GPR_U32(ctx, 31, 0x238C04u);
    ctx->pc = 0x238C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BFCu;
    // 0x238c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x238BFCu, 0x238C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C04u;
label_238c04:
    // 0x238c04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238C04u;
    {
        const bool branch_taken_0x238c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C04u;
        // 0x238c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c04) {
            ctx->pc = 0x238C1Cu;
            goto label_238c1c;
        }
    }
    ctx->pc = 0x238C0Cu;
    // 0x238c0c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x238C0Cu;
    SET_GPR_U32(ctx, 31, 0x238C14u);
    ctx->pc = 0x238C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C0Cu;
    // 0x238c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x238C0Cu, 0x238C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C14u;
label_238c14:
    // 0x238c14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x238C14u;
    {
        const bool branch_taken_0x238c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C14u;
        // 0x238c18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c14) {
            ctx->pc = 0x238C3Cu;
            goto label_238c3c;
        }
    }
    ctx->pc = 0x238C1Cu;
label_238c1c:
    // 0x238c1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238c20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238c24: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x238C24u;
    SET_GPR_U32(ctx, 31, 0x238C2Cu);
    ctx->pc = 0x238C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C24u;
    // 0x238c28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x238C24u, 0x238C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C2Cu;
label_238c2c:
    // 0x238c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c30: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x238C30u;
    SET_GPR_U32(ctx, 31, 0x238C38u);
    ctx->pc = 0x238C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C30u;
    // 0x238c34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x238C30u, 0x238C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C38u;
label_238c38:
    // 0x238c38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238c3c:
    // 0x238c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238c44: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x238c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238c48: 0x3e00008  jr          $ra
    ctx->pc = 0x238C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C48u;
        // 0x238c4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238C50u;
}
