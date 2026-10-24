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

// Function: func_00167908
// Address: 0x167908 - 0x167eb0
void func_00167908_0x167908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00167908_0x167908");
#endif

    switch (ctx->pc) {
        case 0x1679c4u: goto label_1679c4;
        case 0x167a1cu: goto label_167a1c;
        case 0x167a2cu: goto label_167a2c;
        case 0x167a3cu: goto label_167a3c;
        case 0x167a4cu: goto label_167a4c;
        case 0x167aa0u: goto label_167aa0;
        case 0x167aa8u: goto label_167aa8;
        case 0x167ae8u: goto label_167ae8;
        case 0x167af8u: goto label_167af8;
        case 0x167b08u: goto label_167b08;
        case 0x167b4cu: goto label_167b4c;
        case 0x167b54u: goto label_167b54;
        case 0x167b94u: goto label_167b94;
        case 0x167ba4u: goto label_167ba4;
        case 0x167bb4u: goto label_167bb4;
        case 0x167c08u: goto label_167c08;
        case 0x167c6cu: goto label_167c6c;
        case 0x167c74u: goto label_167c74;
        case 0x167cbcu: goto label_167cbc;
        case 0x167d1cu: goto label_167d1c;
        case 0x167d80u: goto label_167d80;
        case 0x167df4u: goto label_167df4;
        case 0x167e54u: goto label_167e54;
        case 0x167e90u: goto label_167e90;
        default: break;
    }

    ctx->pc = 0x167908u;

    // 0x167908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16790c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167910: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x167910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x167914: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x167914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x167918: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16791c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x167920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167924: 0x8223005a  lb          $v1, 0x5A($s1)
    ctx->pc = 0x167924u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x167928: 0x1062015b  beq         $v1, $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x167928u;
    {
        const bool branch_taken_0x167928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167928u;
        // 0x16792c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167928) {
            ctx->pc = 0x167E98u;
            goto label_167e98;
        }
    }
    ctx->pc = 0x167930u;
    // 0x167930: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x167930u;
    {
        const bool branch_taken_0x167930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167930) {
            ctx->pc = 0x167934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167930u;
            // 0x167934: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167948u;
            goto label_167948;
        }
    }
    ctx->pc = 0x167938u;
    // 0x167938: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x167938u;
    {
        const bool branch_taken_0x167938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167938u;
        // 0x16793c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167938) {
            ctx->pc = 0x167958u;
            goto label_167958;
        }
    }
    ctx->pc = 0x167940u;
    // 0x167940: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x167940u;
    {
        const bool branch_taken_0x167940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167940u;
        // 0x167944: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167940) {
            ctx->pc = 0x167EA0u;
            goto label_167ea0;
        }
    }
    ctx->pc = 0x167948u;
label_167948:
    // 0x167948: 0x10620134  beq         $v1, $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x167948u;
    {
        const bool branch_taken_0x167948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167948u;
        // 0x16794c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167948) {
            ctx->pc = 0x167E1Cu;
            goto label_167e1c;
        }
    }
    ctx->pc = 0x167950u;
    // 0x167950: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x167950u;
    {
        const bool branch_taken_0x167950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167950u;
        // 0x167954: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167950) {
            ctx->pc = 0x167EA0u;
            goto label_167ea0;
        }
    }
    ctx->pc = 0x167958u;
label_167958:
    // 0x167958: 0x82230110  lb          $v1, 0x110($s1)
    ctx->pc = 0x167958u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x16795c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x16795cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x167960: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x167960u;
    {
        const bool branch_taken_0x167960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167960u;
        // 0x167964: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167960) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x167968u;
    // 0x167968: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x167968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16796c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16796cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167970: 0x2442fbd0  addiu       $v0, $v0, -0x430
    ctx->pc = 0x167970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966224));
    // 0x167974: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167978: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x167978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16797c: 0x800008  jr          $a0
    ctx->pc = 0x16797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167984u: goto label_167984;
            case 0x1679D0u: goto label_1679d0;
            case 0x167A54u: goto label_167a54;
            case 0x167BBCu: goto label_167bbc;
            case 0x167C2Cu: goto label_167c2c;
            case 0x167C7Cu: goto label_167c7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16797Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x167984u;
label_167984:
    // 0x167984: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x167984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x167988: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x167988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x16798c: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x16798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x167990: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x167990u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x167994: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x167994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x167998: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x167998u;
    {
        const bool branch_taken_0x167998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167998u;
        // 0x16799c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167998) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x1679A0u;
    // 0x1679a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1679a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1679a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1679a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1679a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1679ac: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1679acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1679b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1679b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1679b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1679b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1679b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1679b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679bc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1679BCu;
    SET_GPR_U32(ctx, 31, 0x1679C4u);
    ctx->pc = 0x1679C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1679BCu;
    // 0x1679c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1679BCu, 0x1679C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1679C4u;
label_1679c4:
    // 0x1679c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1679c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1679c8: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1679C8u;
    {
        const bool branch_taken_0x1679c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679C8u;
        // 0x1679cc: 0xa223005a  sb          $v1, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679c8) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x1679D0u;
label_1679d0:
    // 0x1679d0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1679d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1679d4: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x1679d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1679d8: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x1679d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x1679dc: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x1679dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x1679e0: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x1679e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x1679e4: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x1679e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1679e8: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x1679e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x1679ec: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1679ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1679f0: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1679F0u;
    {
        const bool branch_taken_0x1679f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679F0u;
        // 0x1679f4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679f0) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x1679F8u;
    // 0x1679f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1679f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1679fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1679fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a00: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167a04: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x167a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x167a08: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167a0c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167a10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167a10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a14: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167A14u;
    SET_GPR_U32(ctx, 31, 0x167A1Cu);
    ctx->pc = 0x167A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A14u;
    // 0x167a18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167A14u, 0x167A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A1Cu;
label_167a1c:
    // 0x167a1c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x167a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x167a20: 0x24709b70  addiu       $s0, $v1, -0x6490
    ctx->pc = 0x167a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x167a24: 0xc07f1c2  jal         func_1FC708
    ctx->pc = 0x167A24u;
    SET_GPR_U32(ctx, 31, 0x167A2Cu);
    ctx->pc = 0x167A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A24u;
    // 0x167a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC708u, 0x167A24u, 0x167A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A2Cu;
label_167a2c:
    // 0x167a2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167A2Cu;
    {
        const bool branch_taken_0x167a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a2c) {
            ctx->pc = 0x167A44u;
            goto label_167a44;
        }
    }
    ctx->pc = 0x167A34u;
    // 0x167a34: 0xc07f1b2  jal         func_1FC6C8
    ctx->pc = 0x167A34u;
    SET_GPR_U32(ctx, 31, 0x167A3Cu);
    ctx->pc = 0x167A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A34u;
    // 0x167a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC6C8u, 0x167A34u, 0x167A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A3Cu;
label_167a3c:
    // 0x167a3c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x167A3Cu;
    {
        const bool branch_taken_0x167a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A3Cu;
        // 0x167a40: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a3c) {
            ctx->pc = 0x167CC8u;
            goto label_167cc8;
        }
    }
    ctx->pc = 0x167A44u;
label_167a44:
    // 0x167a44: 0xc07f1ba  jal         func_1FC6E8
    ctx->pc = 0x167A44u;
    SET_GPR_U32(ctx, 31, 0x167A4Cu);
    ctx->pc = 0x167A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A44u;
    // 0x167a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC6E8u, 0x167A44u, 0x167A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A4Cu;
label_167a4c:
    // 0x167a4c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x167A4Cu;
    {
        const bool branch_taken_0x167a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A4Cu;
        // 0x167a50: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a4c) {
            ctx->pc = 0x167CC8u;
            goto label_167cc8;
        }
    }
    ctx->pc = 0x167A54u;
label_167a54:
    // 0x167a54: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x167a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x167a58: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x167a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167a5c: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x167a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
    // 0x167a60: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x167a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x167a64: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x167a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x167a68: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x167a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x167a6c: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x167a6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x167a70: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x167a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x167a74: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x167A74u;
    {
        const bool branch_taken_0x167a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A74u;
        // 0x167a78: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a74) {
            ctx->pc = 0x167B08u;
            goto label_167b08;
        }
    }
    ctx->pc = 0x167A7Cu;
    // 0x167a7c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a84: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167a88: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x167a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x167a8c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167a90: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167a94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a98: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167A98u;
    SET_GPR_U32(ctx, 31, 0x167AA0u);
    ctx->pc = 0x167A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A98u;
    // 0x167a9c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167A98u, 0x167AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AA0u;
label_167aa0:
    // 0x167aa0: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x167AA0u;
    SET_GPR_U32(ctx, 31, 0x167AA8u);
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x167AA0u, 0x167AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AA8u;
label_167aa8:
    // 0x167aa8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x167aa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167ab0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x167AB0u;
    {
        const bool branch_taken_0x167ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AB0u;
        // 0x167ab4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ab0) {
            ctx->pc = 0x167AE0u;
            goto label_167ae0;
        }
    }
    ctx->pc = 0x167AB8u;
    // 0x167ab8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167AB8u;
    {
        const bool branch_taken_0x167ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AB8u;
        // 0x167abc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ab8) {
            ctx->pc = 0x167AD0u;
            goto label_167ad0;
        }
    }
    ctx->pc = 0x167AC0u;
    // 0x167ac0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x167AC0u;
    {
        const bool branch_taken_0x167ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AC0u;
        // 0x167ac4: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ac0) {
            ctx->pc = 0x167AF0u;
            goto label_167af0;
        }
    }
    ctx->pc = 0x167AC8u;
    // 0x167ac8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x167AC8u;
    {
        const bool branch_taken_0x167ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ac8) {
            ctx->pc = 0x167B0Cu;
            goto label_167b0c;
        }
    }
    ctx->pc = 0x167AD0u;
label_167ad0:
    // 0x167ad0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x167AD0u;
    {
        const bool branch_taken_0x167ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AD0u;
        // 0x167ad4: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ad0) {
            ctx->pc = 0x167B00u;
            goto label_167b00;
        }
    }
    ctx->pc = 0x167AD8u;
    // 0x167ad8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x167AD8u;
    {
        const bool branch_taken_0x167ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ad8) {
            ctx->pc = 0x167B0Cu;
            goto label_167b0c;
        }
    }
    ctx->pc = 0x167AE0u;
label_167ae0:
    // 0x167ae0: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x167AE0u;
    SET_GPR_U32(ctx, 31, 0x167AE8u);
    ctx->pc = 0x167AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AE0u;
    // 0x167ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x167AE0u, 0x167AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AE8u;
label_167ae8:
    // 0x167ae8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x167AE8u;
    {
        const bool branch_taken_0x167ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AE8u;
        // 0x167aec: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ae8) {
            ctx->pc = 0x167B0Cu;
            goto label_167b0c;
        }
    }
    ctx->pc = 0x167AF0u;
label_167af0:
    // 0x167af0: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x167AF0u;
    SET_GPR_U32(ctx, 31, 0x167AF8u);
    ctx->pc = 0x167AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AF0u;
    // 0x167af4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x167AF0u, 0x167AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AF8u;
label_167af8:
    // 0x167af8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x167AF8u;
    {
        const bool branch_taken_0x167af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AF8u;
        // 0x167afc: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167af8) {
            ctx->pc = 0x167B0Cu;
            goto label_167b0c;
        }
    }
    ctx->pc = 0x167B00u;
label_167b00:
    // 0x167b00: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x167B00u;
    SET_GPR_U32(ctx, 31, 0x167B08u);
    ctx->pc = 0x167B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B00u;
    // 0x167b04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x167B00u, 0x167B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B08u;
label_167b08:
    // 0x167b08: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x167b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_167b0c:
    // 0x167b0c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x167b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167b10: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x167b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x167b14: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x167b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x167b18: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x167b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x167b1c: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x167b1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x167b20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x167b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x167b24: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x167B24u;
    {
        const bool branch_taken_0x167b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B24u;
        // 0x167b28: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b24) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x167B2Cu;
    // 0x167b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b30: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167b34: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x167b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x167b38: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167b3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167b40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167b40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b44: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167B44u;
    SET_GPR_U32(ctx, 31, 0x167B4Cu);
    ctx->pc = 0x167B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B44u;
    // 0x167b48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167B44u, 0x167B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B4Cu;
label_167b4c:
    // 0x167b4c: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x167B4Cu;
    SET_GPR_U32(ctx, 31, 0x167B54u);
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x167B4Cu, 0x167B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B54u;
label_167b54:
    // 0x167b54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x167b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167b5c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x167B5Cu;
    {
        const bool branch_taken_0x167b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B5Cu;
        // 0x167b60: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b5c) {
            ctx->pc = 0x167B8Cu;
            goto label_167b8c;
        }
    }
    ctx->pc = 0x167B64u;
    // 0x167b64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167B64u;
    {
        const bool branch_taken_0x167b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B64u;
        // 0x167b68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b64) {
            ctx->pc = 0x167B7Cu;
            goto label_167b7c;
        }
    }
    ctx->pc = 0x167B6Cu;
    // 0x167b6c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x167B6Cu;
    {
        const bool branch_taken_0x167b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B6Cu;
        // 0x167b70: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b6c) {
            ctx->pc = 0x167B9Cu;
            goto label_167b9c;
        }
    }
    ctx->pc = 0x167B74u;
    // 0x167b74: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x167B74u;
    {
        const bool branch_taken_0x167b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167b74) {
            ctx->pc = 0x167CC8u;
            goto label_167cc8;
        }
    }
    ctx->pc = 0x167B7Cu;
label_167b7c:
    // 0x167b7c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x167B7Cu;
    {
        const bool branch_taken_0x167b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B7Cu;
        // 0x167b80: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b7c) {
            ctx->pc = 0x167BACu;
            goto label_167bac;
        }
    }
    ctx->pc = 0x167B84u;
    // 0x167b84: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x167B84u;
    {
        const bool branch_taken_0x167b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167b84) {
            ctx->pc = 0x167CC8u;
            goto label_167cc8;
        }
    }
    ctx->pc = 0x167B8Cu;
label_167b8c:
    // 0x167b8c: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x167B8Cu;
    SET_GPR_U32(ctx, 31, 0x167B94u);
    ctx->pc = 0x167B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B8Cu;
    // 0x167b90: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x167B8Cu, 0x167B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B94u;
label_167b94:
    // 0x167b94: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x167B94u;
    {
        const bool branch_taken_0x167b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B94u;
        // 0x167b98: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b94) {
            ctx->pc = 0x167CC8u;
            goto label_167cc8;
        }
    }
    ctx->pc = 0x167B9Cu;
label_167b9c:
    // 0x167b9c: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x167B9Cu;
    SET_GPR_U32(ctx, 31, 0x167BA4u);
    ctx->pc = 0x167BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B9Cu;
    // 0x167ba0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x167B9Cu, 0x167BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BA4u;
label_167ba4:
    // 0x167ba4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x167BA4u;
    {
        const bool branch_taken_0x167ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BA4u;
        // 0x167ba8: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ba4) {
            ctx->pc = 0x167CC8u;
            goto label_167cc8;
        }
    }
    ctx->pc = 0x167BACu;
label_167bac:
    // 0x167bac: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x167BACu;
    SET_GPR_U32(ctx, 31, 0x167BB4u);
    ctx->pc = 0x167BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BACu;
    // 0x167bb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x167BACu, 0x167BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BB4u;
label_167bb4:
    // 0x167bb4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x167BB4u;
    {
        const bool branch_taken_0x167bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BB4u;
        // 0x167bb8: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bb4) {
            ctx->pc = 0x167CC8u;
            goto label_167cc8;
        }
    }
    ctx->pc = 0x167BBCu;
label_167bbc:
    // 0x167bbc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x167bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x167bc0: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x167bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x167bc4: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x167bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x167bc8: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x167bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x167bcc: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x167bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x167bd0: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x167bd4: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x167bd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x167bd8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x167bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x167bdc: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x167BDCu;
    {
        const bool branch_taken_0x167bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BDCu;
        // 0x167be0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bdc) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x167BE4u;
    // 0x167be4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167bec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167bf0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x167bf4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167bf8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167bfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167bfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c00: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167C00u;
    SET_GPR_U32(ctx, 31, 0x167C08u);
    ctx->pc = 0x167C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C00u;
    // 0x167c04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167C00u, 0x167C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C08u;
label_167c08:
    // 0x167c08: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x167c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x167c0c: 0x24638140  addiu       $v1, $v1, -0x7EC0
    ctx->pc = 0x167c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934848));
    // 0x167c10: 0x906204b8  lbu         $v0, 0x4B8($v1)
    ctx->pc = 0x167c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5E85F8u));
    // 0x167c14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167C14u;
    {
        const bool branch_taken_0x167c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C14u;
        // 0x167c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c14) {
            ctx->pc = 0x167C24u;
            goto label_167c24;
        }
    }
    ctx->pc = 0x167C1Cu;
    // 0x167c1c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x167C1Cu;
    {
        const bool branch_taken_0x167c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C1Cu;
        // 0x167c20: 0xa06004b8  sb          $zero, 0x4B8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1208), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c1c) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x167C24u;
label_167c24:
    // 0x167c24: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x167C24u;
    {
        const bool branch_taken_0x167c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C24u;
        // 0x167c28: 0xa06204b8  sb          $v0, 0x4B8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1208), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c24) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x167C2Cu;
label_167c2c:
    // 0x167c2c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x167c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x167c30: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x167c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x167c34: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x167c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x167c38: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x167c38u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x167c3c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x167c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x167c40: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x167C40u;
    {
        const bool branch_taken_0x167c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C40u;
        // 0x167c44: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c40) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x167C48u;
    // 0x167c48: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c50: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167c54: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x167c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x167c58: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167c5c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167c60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167c60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c64: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167C64u;
    SET_GPR_U32(ctx, 31, 0x167C6Cu);
    ctx->pc = 0x167C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C64u;
    // 0x167c68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167C64u, 0x167C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C6Cu;
label_167c6c:
    // 0x167c6c: 0xc059fac  jal         func_167EB0
    ctx->pc = 0x167C6Cu;
    SET_GPR_U32(ctx, 31, 0x167C74u);
    ctx->pc = 0x167C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C6Cu;
    // 0x167c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167EB0u, 0x167C6Cu, 0x167C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C74u;
label_167c74:
    // 0x167c74: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x167C74u;
    {
        const bool branch_taken_0x167c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C74u;
        // 0x167c78: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c74) {
            ctx->pc = 0x167CC8u;
            goto label_167cc8;
        }
    }
    ctx->pc = 0x167C7Cu;
label_167c7c:
    // 0x167c7c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x167c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x167c80: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x167c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x167c84: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x167c88: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x167c88u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x167c8c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x167c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x167c90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x167C90u;
    {
        const bool branch_taken_0x167c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C90u;
        // 0x167c94: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c90) {
            ctx->pc = 0x167CC4u;
            goto label_167cc4;
        }
    }
    ctx->pc = 0x167C98u;
    // 0x167c98: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ca0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167ca4: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x167ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x167ca8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167cac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167cb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167cb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cb4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167CB4u;
    SET_GPR_U32(ctx, 31, 0x167CBCu);
    ctx->pc = 0x167CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CB4u;
    // 0x167cb8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167CB4u, 0x167CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CBCu;
label_167cbc:
    // 0x167cbc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x167cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167cc0: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x167cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_167cc4:
    // 0x167cc4: 0x264474a0  addiu       $a0, $s2, 0x74A0
    ctx->pc = 0x167cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_167cc8:
    // 0x167cc8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x167cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167ccc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x167cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x167cd0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x167cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x167cd4: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x167cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x167cd8: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x167cd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x167cdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167ce0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x167CE0u;
    {
        const bool branch_taken_0x167ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CE0u;
        // 0x167ce4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ce0) {
            ctx->pc = 0x167D28u;
            goto label_167d28;
        }
    }
    ctx->pc = 0x167CE8u;
    // 0x167ce8: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x167ce8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x167cec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167cf0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x167CF0u;
    {
        const bool branch_taken_0x167cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CF0u;
        // 0x167cf4: 0x264474a0  addiu       $a0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cf0) {
            ctx->pc = 0x167D2Cu;
            goto label_167d2c;
        }
    }
    ctx->pc = 0x167CF8u;
    // 0x167cf8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167cfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d00: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167d04: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x167d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x167d08: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167d0c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167d10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167d10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d14: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167D14u;
    SET_GPR_U32(ctx, 31, 0x167D1Cu);
    ctx->pc = 0x167D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D14u;
    // 0x167d18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167D14u, 0x167D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D1Cu;
label_167d1c:
    // 0x167d1c: 0x92230110  lbu         $v1, 0x110($s1)
    ctx->pc = 0x167d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x167d20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x167D20u;
    {
        const bool branch_taken_0x167d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D20u;
        // 0x167d24: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d20) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D28u;
label_167d28:
    // 0x167d28: 0x264474a0  addiu       $a0, $s2, 0x74A0
    ctx->pc = 0x167d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_167d2c:
    // 0x167d2c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x167d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167d30: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x167d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x167d34: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x167d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x167d38: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x167d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x167d3c: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x167d3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x167d40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167d44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x167D44u;
    {
        const bool branch_taken_0x167d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D44u;
        // 0x167d48: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d44) {
            ctx->pc = 0x167D8Cu;
            goto label_167d8c;
        }
    }
    ctx->pc = 0x167D4Cu;
    // 0x167d4c: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x167d4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x167d50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167d54: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x167D54u;
    {
        const bool branch_taken_0x167d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d54) {
            ctx->pc = 0x167D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167D54u;
            // 0x167d58: 0x82220110  lb          $v0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167D90u;
            goto label_167d90;
        }
    }
    ctx->pc = 0x167D5Cu;
    // 0x167d5c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d64: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167d68: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x167d6c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167d70: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d78: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167D78u;
    SET_GPR_U32(ctx, 31, 0x167D80u);
    ctx->pc = 0x167D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D78u;
    // 0x167d7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167D78u, 0x167D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D80u;
label_167d80:
    // 0x167d80: 0x92230110  lbu         $v1, 0x110($s1)
    ctx->pc = 0x167d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x167d84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x167d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_167d88:
    // 0x167d88: 0xa2230110  sb          $v1, 0x110($s1)
    ctx->pc = 0x167d88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 272), (uint8_t)GPR_U32(ctx, 3));
label_167d8c:
    // 0x167d8c: 0x82220110  lb          $v0, 0x110($s1)
    ctx->pc = 0x167d8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 272)));
label_167d90:
    // 0x167d90: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x167D90u;
    {
        const bool branch_taken_0x167d90 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x167D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D90u;
        // 0x167d94: 0x92240110  lbu         $a0, 0x110($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d90) {
            ctx->pc = 0x167DACu;
            goto label_167dac;
        }
    }
    ctx->pc = 0x167D98u;
    // 0x167d98: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x167d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x167d9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167D9Cu;
    {
        const bool branch_taken_0x167d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D9Cu;
        // 0x167da0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d9c) {
            ctx->pc = 0x167DB0u;
            goto label_167db0;
        }
    }
    ctx->pc = 0x167DA4u;
    // 0x167da4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x167DA4u;
    {
        const bool branch_taken_0x167da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DA4u;
        // 0x167da8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167da4) {
            ctx->pc = 0x167DB0u;
            goto label_167db0;
        }
    }
    ctx->pc = 0x167DACu;
label_167dac:
    // 0x167dac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x167dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_167db0:
    // 0x167db0: 0xa2230110  sb          $v1, 0x110($s1)
    ctx->pc = 0x167db0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 272), (uint8_t)GPR_U32(ctx, 3));
    // 0x167db4: 0x265074a0  addiu       $s0, $s2, 0x74A0
    ctx->pc = 0x167db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x167db8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x167db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x167dbc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x167dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x167dc0: 0xde0301a0  ld          $v1, 0x1A0($s0)
    ctx->pc = 0x167dc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x167dc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x167dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167dc8: 0x5464000d  bnel        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x167DC8u;
    {
        const bool branch_taken_0x167dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x167dc8) {
            ctx->pc = 0x167DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167DC8u;
            // 0x167dcc: 0xde0201a0  ld          $v0, 0x1A0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167E00u;
            goto label_167e00;
        }
    }
    ctx->pc = 0x167DD0u;
    // 0x167dd0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x167dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167dd8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167ddc: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x167ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x167de0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167de4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167de8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167de8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167dec: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167DECu;
    SET_GPR_U32(ctx, 31, 0x167DF4u);
    ctx->pc = 0x167DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167DECu;
    // 0x167df0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167DECu, 0x167DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DF4u;
label_167df4:
    // 0x167df4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167df8: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x167df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x167dfc: 0xde0201a0  ld          $v0, 0x1A0($s0)
    ctx->pc = 0x167dfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 416)));
label_167e00:
    // 0x167e00: 0x3c031020  lui         $v1, 0x1020
    ctx->pc = 0x167e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4128 << 16));
    // 0x167e04: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x167e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x167e08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x167e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x167e0c: 0x14440023  bne         $v0, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x167E0Cu;
    {
        const bool branch_taken_0x167e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x167E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E0Cu;
        // 0x167e10: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e0c) {
            ctx->pc = 0x167E9Cu;
            goto label_167e9c;
        }
    }
    ctx->pc = 0x167E14u;
    // 0x167e14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x167E14u;
    {
        const bool branch_taken_0x167e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E14u;
        // 0x167e18: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e14) {
            ctx->pc = 0x167E70u;
            goto label_167e70;
        }
    }
    ctx->pc = 0x167E1Cu;
label_167e1c:
    // 0x167e1c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x167e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x167e20: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x167e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x167e24: 0xdc637640  ld          $v1, 0x7640($v1)
    ctx->pc = 0x167e24u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x167e28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x167e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167e2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x167E2Cu;
    {
        const bool branch_taken_0x167e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E2Cu;
        // 0x167e30: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e2c) {
            ctx->pc = 0x167E60u;
            goto label_167e60;
        }
    }
    ctx->pc = 0x167E34u;
    // 0x167e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e38: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167e3c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x167e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x167e40: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167e44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167e48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e4c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167E4Cu;
    SET_GPR_U32(ctx, 31, 0x167E54u);
    ctx->pc = 0x167E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E4Cu;
    // 0x167e50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167E4Cu, 0x167E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E54u;
label_167e54:
    // 0x167e54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x167e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x167e58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x167E58u;
    {
        const bool branch_taken_0x167e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E58u;
        // 0x167e5c: 0xa223005a  sb          $v1, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e58) {
            ctx->pc = 0x167E98u;
            goto label_167e98;
        }
    }
    ctx->pc = 0x167E60u;
label_167e60:
    // 0x167e60: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x167e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x167e64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x167e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167e68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x167E68u;
    {
        const bool branch_taken_0x167e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E68u;
        // 0x167e6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e68) {
            ctx->pc = 0x167E9Cu;
            goto label_167e9c;
        }
    }
    ctx->pc = 0x167E70u;
label_167e70:
    // 0x167e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e74: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x167e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x167e78: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x167e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x167e7c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x167e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167e80: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167e84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e88: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x167E88u;
    SET_GPR_U32(ctx, 31, 0x167E90u);
    ctx->pc = 0x167E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E88u;
    // 0x167e8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x167E88u, 0x167E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E90u;
label_167e90:
    // 0x167e90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x167e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167e94: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x167e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_167e98:
    // 0x167e98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x167e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_167e9c:
    // 0x167e9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x167e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_167ea0:
    // 0x167ea0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x167ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x167EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EA8u;
        // 0x167eac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167EB0u;
}
