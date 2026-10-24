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

// Function: func_00218C48
// Address: 0x218c48 - 0x21a218
void func_00218C48_0x218c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00218C48_0x218c48");
#endif

    switch (ctx->pc) {
        case 0x218cd8u: goto label_218cd8;
        case 0x219100u: goto label_219100;
        case 0x21912cu: goto label_21912c;
        case 0x219270u: goto label_219270;
        case 0x2192f8u: goto label_2192f8;
        case 0x219324u: goto label_219324;
        case 0x2193b8u: goto label_2193b8;
        case 0x2193fcu: goto label_2193fc;
        case 0x219488u: goto label_219488;
        case 0x2194acu: goto label_2194ac;
        case 0x2194bcu: goto label_2194bc;
        case 0x21957cu: goto label_21957c;
        case 0x2195a8u: goto label_2195a8;
        case 0x2195c8u: goto label_2195c8;
        case 0x2195e8u: goto label_2195e8;
        case 0x2195f0u: goto label_2195f0;
        case 0x219634u: goto label_219634;
        case 0x219660u: goto label_219660;
        case 0x2196b8u: goto label_2196b8;
        case 0x2196e0u: goto label_2196e0;
        case 0x219708u: goto label_219708;
        case 0x2197e8u: goto label_2197e8;
        case 0x219808u: goto label_219808;
        case 0x219810u: goto label_219810;
        case 0x219890u: goto label_219890;
        case 0x2198a8u: goto label_2198a8;
        case 0x2198c8u: goto label_2198c8;
        case 0x2198f8u: goto label_2198f8;
        case 0x219920u: goto label_219920;
        case 0x219940u: goto label_219940;
        case 0x219994u: goto label_219994;
        case 0x2199a4u: goto label_2199a4;
        case 0x2199c4u: goto label_2199c4;
        case 0x2199d0u: goto label_2199d0;
        case 0x2199e0u: goto label_2199e0;
        case 0x219a0cu: goto label_219a0c;
        case 0x219a18u: goto label_219a18;
        case 0x219a6cu: goto label_219a6c;
        case 0x219ac8u: goto label_219ac8;
        case 0x219ae8u: goto label_219ae8;
        case 0x219af0u: goto label_219af0;
        case 0x219afcu: goto label_219afc;
        case 0x219b08u: goto label_219b08;
        case 0x219b94u: goto label_219b94;
        case 0x219cecu: goto label_219cec;
        case 0x219d88u: goto label_219d88;
        case 0x219da4u: goto label_219da4;
        case 0x219dccu: goto label_219dcc;
        case 0x219de0u: goto label_219de0;
        case 0x219decu: goto label_219dec;
        case 0x219df8u: goto label_219df8;
        case 0x219e40u: goto label_219e40;
        case 0x219f34u: goto label_219f34;
        case 0x21a02cu: goto label_21a02c;
        case 0x21a04cu: goto label_21a04c;
        case 0x21a09cu: goto label_21a09c;
        case 0x21a0acu: goto label_21a0ac;
        case 0x21a134u: goto label_21a134;
        case 0x21a1b4u: goto label_21a1b4;
        case 0x21a1dcu: goto label_21a1dc;
        case 0x21a1e4u: goto label_21a1e4;
        case 0x21a1f4u: goto label_21a1f4;
        default: break;
    }

    ctx->pc = 0x218c48u;

    // 0x218c48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x218c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x218c4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x218c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x218c50: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x218c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x218c54: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x218c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x218c58: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x218c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x218c5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c60: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x218c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x218c64: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x218c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x218c68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x218c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x218c6c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x218c6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x218c70: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x218c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x218c74: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x218c74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x218c78: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x218c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x218c7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x218c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x218c80: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x218C80u;
    {
        const bool branch_taken_0x218c80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x218C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C80u;
        // 0x218c84: 0xae2316d0  sw          $v1, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c80) {
            ctx->pc = 0x218CA8u;
            goto label_218ca8;
        }
    }
    ctx->pc = 0x218C88u;
    // 0x218c88: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x218c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x218c8c: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x218c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x218c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x218C90u;
    {
        const bool branch_taken_0x218c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C90u;
        // 0x218c94: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c90) {
            ctx->pc = 0x218CA8u;
            goto label_218ca8;
        }
    }
    ctx->pc = 0x218C98u;
    // 0x218c98: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x218C98u;
    {
        const bool branch_taken_0x218c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218c98) {
            ctx->pc = 0x218C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218C98u;
            // 0x218c9c: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218CACu;
            goto label_218cac;
        }
    }
    ctx->pc = 0x218CA0u;
    // 0x218ca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x218ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218ca4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x218ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_218ca8:
    // 0x218ca8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x218ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_218cac:
    // 0x218cac: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x218cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x218cb0: 0x1040045f  beqz        $v0, . + 4 + (0x45F << 2)
    ctx->pc = 0x218CB0u;
    {
        const bool branch_taken_0x218cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CB0u;
        // 0x218cb4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218cb0) {
            ctx->pc = 0x219E30u;
            goto label_219e30;
        }
    }
    ctx->pc = 0x218CB8u;
    // 0x218cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218cbc: 0x24426660  addiu       $v0, $v0, 0x6660
    ctx->pc = 0x218cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26208));
    // 0x218cc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218cc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218cc8: 0x800008  jr          $a0
    ctx->pc = 0x218CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218CD0u: goto label_218cd0;
            case 0x2193CCu: goto label_2193cc;
            case 0x2194C4u: goto label_2194c4;
            case 0x2195B4u: goto label_2195b4;
            case 0x219614u: goto label_219614;
            case 0x2197D4u: goto label_2197d4;
            case 0x219888u: goto label_219888;
            case 0x219904u: goto label_219904;
            case 0x2199D8u: goto label_2199d8;
            case 0x219AACu: goto label_219aac;
            case 0x219B74u: goto label_219b74;
            case 0x219D9Cu: goto label_219d9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218CC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x218CD0u;
label_218cd0:
    // 0x218cd0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x218CD0u;
    SET_GPR_U32(ctx, 31, 0x218CD8u);
    ctx->pc = 0x218CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CD0u;
    // 0x218cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x218CD0u, 0x218CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CD8u;
label_218cd8:
    // 0x218cd8: 0x8e2316c4  lw          $v1, 0x16C4($s1)
    ctx->pc = 0x218cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218cdc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x218cdcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218ce0: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x218ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x218ce4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x218CE4u;
    {
        const bool branch_taken_0x218ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CE4u;
        // 0x218ce8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ce4) {
            ctx->pc = 0x218D04u;
            goto label_218d04;
        }
    }
    ctx->pc = 0x218CECu;
    // 0x218cec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218cf0: 0x24426690  addiu       $v0, $v0, 0x6690
    ctx->pc = 0x218cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26256));
    // 0x218cf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218cf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218cfc: 0x800008  jr          $a0
    ctx->pc = 0x218CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218D04u: goto label_218d04;
            case 0x218FC4u: goto label_218fc4;
            case 0x21915Cu: goto label_21915c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218CFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x218D04u;
label_218d04:
    // 0x218d04: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x218d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x218d08: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x218d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x218d0c: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x218d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x218d10: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x218D10u;
    {
        const bool branch_taken_0x218d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D10u;
        // 0x218d14: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d10) {
            ctx->pc = 0x218D30u;
            goto label_218d30;
        }
    }
    ctx->pc = 0x218D18u;
    // 0x218d18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x218d1c: 0x244266e0  addiu       $v0, $v0, 0x66E0
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26336));
    // 0x218d20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218d24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218d28: 0x800008  jr          $a0
    ctx->pc = 0x218D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218D30u: goto label_218d30;
            case 0x218D5Cu: goto label_218d5c;
            case 0x218D6Cu: goto label_218d6c;
            case 0x218D94u: goto label_218d94;
            case 0x218DA4u: goto label_218da4;
            case 0x218DF0u: goto label_218df0;
            case 0x218E00u: goto label_218e00;
            case 0x218E2Cu: goto label_218e2c;
            case 0x218E3Cu: goto label_218e3c;
            case 0x218E68u: goto label_218e68;
            case 0x218E94u: goto label_218e94;
            case 0x218EC0u: goto label_218ec0;
            case 0x218EECu: goto label_218eec;
            case 0x218EFCu: goto label_218efc;
            case 0x218F0Cu: goto label_218f0c;
            case 0x218F38u: goto label_218f38;
            case 0x218F48u: goto label_218f48;
            case 0x218F74u: goto label_218f74;
            case 0x218F84u: goto label_218f84;
            case 0x218F94u: goto label_218f94;
            case 0x218FA4u: goto label_218fa4;
            case 0x218FB4u: goto label_218fb4;
            case 0x219248u: goto label_219248;
            case 0x2192E8u: goto label_2192e8;
            case 0x21934Cu: goto label_21934c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218D28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x218D30u;
label_218d30:
    // 0x218d30: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x218d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218d34: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x218d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218d38: 0x8e2416c4  lw          $a0, 0x16C4($s1)
    ctx->pc = 0x218d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218d3c: 0x8ce200c0  lw          $v0, 0xC0($a3)
    ctx->pc = 0x218d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x218d40: 0x8ce300c4  lw          $v1, 0xC4($a3)
    ctx->pc = 0x218d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x218d44: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x218d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x218d48: 0x14850185  bne         $a0, $a1, . + 4 + (0x185 << 2)
    ctx->pc = 0x218D48u;
    {
        const bool branch_taken_0x218d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x218D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D48u;
        // 0x218d4c: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d48) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218D50u;
    // 0x218d50: 0x8ce200c8  lw          $v0, 0xC8($a3)
    ctx->pc = 0x218d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
    // 0x218d54: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x218D54u;
    {
        const bool branch_taken_0x218d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D54u;
        // 0x218d58: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d54) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218D5Cu;
label_218d5c:
    // 0x218d5c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218d60: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x218d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x218d64: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x218D64u;
    {
        const bool branch_taken_0x218d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D64u;
        // 0x218d68: 0x8c4400c8  lw          $a0, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d64) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218D6Cu;
label_218d6c:
    // 0x218d6c: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x218d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218d70: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x218d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218d74: 0x8e2416c4  lw          $a0, 0x16C4($s1)
    ctx->pc = 0x218d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218d78: 0x8ce20660  lw          $v0, 0x660($a3)
    ctx->pc = 0x218d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1632)));
    // 0x218d7c: 0x8ce30664  lw          $v1, 0x664($a3)
    ctx->pc = 0x218d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1636)));
    // 0x218d80: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x218d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x218d84: 0x14850176  bne         $a0, $a1, . + 4 + (0x176 << 2)
    ctx->pc = 0x218D84u;
    {
        const bool branch_taken_0x218d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x218D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D84u;
        // 0x218d88: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d84) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218D8Cu;
    // 0x218d8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x218D8Cu;
    {
        const bool branch_taken_0x218d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D8Cu;
        // 0x218d90: 0x8ce20668  lw          $v0, 0x668($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d8c) {
            ctx->pc = 0x218DE8u;
            goto label_218de8;
        }
    }
    ctx->pc = 0x218D94u;
label_218d94:
    // 0x218d94: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218d98: 0x8c4325ec  lw          $v1, 0x25EC($v0)
    ctx->pc = 0x218d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9708)));
    // 0x218d9c: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x218D9Cu;
    {
        const bool branch_taken_0x218d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D9Cu;
        // 0x218da0: 0x8c4425f0  lw          $a0, 0x25F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d9c) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218DA4u;
label_218da4:
    // 0x218da4: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x218da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x218da8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x218DA8u;
    {
        const bool branch_taken_0x218da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DA8u;
        // 0x218dac: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218da8) {
            ctx->pc = 0x218DC0u;
            goto label_218dc0;
        }
    }
    ctx->pc = 0x218DB0u;
    // 0x218db0: 0x8c440114  lw          $a0, 0x114($v0)
    ctx->pc = 0x218db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x218db4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x218db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218db8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x218DB8u;
    {
        const bool branch_taken_0x218db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DB8u;
        // 0x218dbc: 0x8c430118  lw          $v1, 0x118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218db8) {
            ctx->pc = 0x218DCCu;
            goto label_218dcc;
        }
    }
    ctx->pc = 0x218DC0u;
label_218dc0:
    // 0x218dc0: 0x8c440660  lw          $a0, 0x660($v0)
    ctx->pc = 0x218dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1632)));
    // 0x218dc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x218dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dc8: 0x8c430664  lw          $v1, 0x664($v0)
    ctx->pc = 0x218dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1636)));
label_218dcc:
    // 0x218dcc: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x218dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x218dd0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x218dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218dd4: 0x8e2316c4  lw          $v1, 0x16C4($s1)
    ctx->pc = 0x218dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218dd8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x218dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218ddc: 0x54620161  bnel        $v1, $v0, . + 4 + (0x161 << 2)
    ctx->pc = 0x218DDCu;
    {
        const bool branch_taken_0x218ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x218ddc) {
            ctx->pc = 0x218DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218DDCu;
            // 0x218de0: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219364u;
            goto label_219364;
        }
    }
    ctx->pc = 0x218DE4u;
    // 0x218de4: 0x8ce20668  lw          $v0, 0x668($a3)
    ctx->pc = 0x218de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1640)));
label_218de8:
    // 0x218de8: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x218DE8u;
    {
        const bool branch_taken_0x218de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DE8u;
        // 0x218dec: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218de8) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218DF0u;
label_218df0:
    // 0x218df0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218df4: 0x8c4335e4  lw          $v1, 0x35E4($v0)
    ctx->pc = 0x218df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13796)));
    // 0x218df8: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x218DF8u;
    {
        const bool branch_taken_0x218df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DF8u;
        // 0x218dfc: 0x8c4435e8  lw          $a0, 0x35E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218df8) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218E00u;
label_218e00:
    // 0x218e00: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x218e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218e04: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x218e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218e08: 0x8e2416c4  lw          $a0, 0x16C4($s1)
    ctx->pc = 0x218e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218e0c: 0x8ce210c0  lw          $v0, 0x10C0($a3)
    ctx->pc = 0x218e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4288)));
    // 0x218e10: 0x8ce310c4  lw          $v1, 0x10C4($a3)
    ctx->pc = 0x218e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4292)));
    // 0x218e14: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x218e14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x218e18: 0x14850151  bne         $a0, $a1, . + 4 + (0x151 << 2)
    ctx->pc = 0x218E18u;
    {
        const bool branch_taken_0x218e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x218E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E18u;
        // 0x218e1c: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e18) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218E20u;
    // 0x218e20: 0x8ce210c8  lw          $v0, 0x10C8($a3)
    ctx->pc = 0x218e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4296)));
    // 0x218e24: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x218E24u;
    {
        const bool branch_taken_0x218e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E24u;
        // 0x218e28: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e24) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218E2Cu;
label_218e2c:
    // 0x218e2c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218e30: 0x8c433ca0  lw          $v1, 0x3CA0($v0)
    ctx->pc = 0x218e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15520)));
    // 0x218e34: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x218E34u;
    {
        const bool branch_taken_0x218e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E34u;
        // 0x218e38: 0x8c443ca4  lw          $a0, 0x3CA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e34) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218E3Cu;
label_218e3c:
    // 0x218e3c: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x218e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218e40: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x218e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218e44: 0x8e2416c4  lw          $a0, 0x16C4($s1)
    ctx->pc = 0x218e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218e48: 0x8ce21fc8  lw          $v0, 0x1FC8($a3)
    ctx->pc = 0x218e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8136)));
    // 0x218e4c: 0x8ce31fcc  lw          $v1, 0x1FCC($a3)
    ctx->pc = 0x218e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8140)));
    // 0x218e50: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x218e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x218e54: 0x14850142  bne         $a0, $a1, . + 4 + (0x142 << 2)
    ctx->pc = 0x218E54u;
    {
        const bool branch_taken_0x218e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x218E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E54u;
        // 0x218e58: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e54) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218E5Cu;
    // 0x218e5c: 0x8ce21fd0  lw          $v0, 0x1FD0($a3)
    ctx->pc = 0x218e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8144)));
    // 0x218e60: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x218E60u;
    {
        const bool branch_taken_0x218e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E60u;
        // 0x218e64: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e60) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218E68u;
label_218e68:
    // 0x218e68: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218e6c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x218e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218e70: 0x8e2416c4  lw          $a0, 0x16C4($s1)
    ctx->pc = 0x218e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218e74: 0x8ce20840  lw          $v0, 0x840($a3)
    ctx->pc = 0x218e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x218e78: 0x8ce30844  lw          $v1, 0x844($a3)
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2116)));
    // 0x218e7c: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x218e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x218e80: 0x14850137  bne         $a0, $a1, . + 4 + (0x137 << 2)
    ctx->pc = 0x218E80u;
    {
        const bool branch_taken_0x218e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x218E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E80u;
        // 0x218e84: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e80) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218E88u;
    // 0x218e88: 0x8ce20848  lw          $v0, 0x848($a3)
    ctx->pc = 0x218e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2120)));
    // 0x218e8c: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x218E8Cu;
    {
        const bool branch_taken_0x218e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E8Cu;
        // 0x218e90: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e8c) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218E94u;
label_218e94:
    // 0x218e94: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x218e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218e98: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x218e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218e9c: 0x8e2416c4  lw          $a0, 0x16C4($s1)
    ctx->pc = 0x218e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218ea0: 0x8ce21ec4  lw          $v0, 0x1EC4($a3)
    ctx->pc = 0x218ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7876)));
    // 0x218ea4: 0x8ce31ec8  lw          $v1, 0x1EC8($a3)
    ctx->pc = 0x218ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7880)));
    // 0x218ea8: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x218ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x218eac: 0x1485012c  bne         $a0, $a1, . + 4 + (0x12C << 2)
    ctx->pc = 0x218EACu;
    {
        const bool branch_taken_0x218eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x218EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EACu;
        // 0x218eb0: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218eac) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218EB4u;
    // 0x218eb4: 0x8ce21ecc  lw          $v0, 0x1ECC($a3)
    ctx->pc = 0x218eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7884)));
    // 0x218eb8: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x218EB8u;
    {
        const bool branch_taken_0x218eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EB8u;
        // 0x218ebc: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218eb8) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218EC0u;
label_218ec0:
    // 0x218ec0: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x218ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218ec4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x218ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218ec8: 0x8e2416c4  lw          $a0, 0x16C4($s1)
    ctx->pc = 0x218ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218ecc: 0x8ce21908  lw          $v0, 0x1908($a3)
    ctx->pc = 0x218eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6408)));
    // 0x218ed0: 0x8ce3190c  lw          $v1, 0x190C($a3)
    ctx->pc = 0x218ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6412)));
    // 0x218ed4: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x218ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x218ed8: 0x14850121  bne         $a0, $a1, . + 4 + (0x121 << 2)
    ctx->pc = 0x218ED8u;
    {
        const bool branch_taken_0x218ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x218EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ED8u;
        // 0x218edc: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ed8) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218EE0u;
    // 0x218ee0: 0x8ce21910  lw          $v0, 0x1910($a3)
    ctx->pc = 0x218ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6416)));
    // 0x218ee4: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x218EE4u;
    {
        const bool branch_taken_0x218ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EE4u;
        // 0x218ee8: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ee4) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218EECu;
label_218eec:
    // 0x218eec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218ef0: 0x8c433050  lw          $v1, 0x3050($v0)
    ctx->pc = 0x218ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12368)));
    // 0x218ef4: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x218EF4u;
    {
        const bool branch_taken_0x218ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EF4u;
        // 0x218ef8: 0x8c443054  lw          $a0, 0x3054($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ef4) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218EFCu;
label_218efc:
    // 0x218efc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218f00: 0x8c433274  lw          $v1, 0x3274($v0)
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12916)));
    // 0x218f04: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x218F04u;
    {
        const bool branch_taken_0x218f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F04u;
        // 0x218f08: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f04) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218F0Cu;
label_218f0c:
    // 0x218f0c: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x218f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218f10: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x218f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218f14: 0x8e2416c4  lw          $a0, 0x16C4($s1)
    ctx->pc = 0x218f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218f18: 0x8ce21578  lw          $v0, 0x1578($a3)
    ctx->pc = 0x218f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5496)));
    // 0x218f1c: 0x8ce3157c  lw          $v1, 0x157C($a3)
    ctx->pc = 0x218f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5500)));
    // 0x218f20: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x218f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x218f24: 0x1485010e  bne         $a0, $a1, . + 4 + (0x10E << 2)
    ctx->pc = 0x218F24u;
    {
        const bool branch_taken_0x218f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x218F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F24u;
        // 0x218f28: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f24) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218F2Cu;
    // 0x218f2c: 0x8ce21580  lw          $v0, 0x1580($a3)
    ctx->pc = 0x218f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5504)));
    // 0x218f30: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x218F30u;
    {
        const bool branch_taken_0x218f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F30u;
        // 0x218f34: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f30) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218F38u;
label_218f38:
    // 0x218f38: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218f3c: 0x8c433a18  lw          $v1, 0x3A18($v0)
    ctx->pc = 0x218f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14872)));
    // 0x218f40: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x218F40u;
    {
        const bool branch_taken_0x218f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F40u;
        // 0x218f44: 0x8c443a1c  lw          $a0, 0x3A1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f40) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218F48u;
label_218f48:
    // 0x218f48: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x218f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218f4c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x218f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218f50: 0x8e2416c4  lw          $a0, 0x16C4($s1)
    ctx->pc = 0x218f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x218f54: 0x8ce23430  lw          $v0, 0x3430($a3)
    ctx->pc = 0x218f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13360)));
    // 0x218f58: 0x8ce33434  lw          $v1, 0x3434($a3)
    ctx->pc = 0x218f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13364)));
    // 0x218f5c: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x218f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x218f60: 0x148500ff  bne         $a0, $a1, . + 4 + (0xFF << 2)
    ctx->pc = 0x218F60u;
    {
        const bool branch_taken_0x218f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x218F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F60u;
        // 0x218f64: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f60) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218F68u;
    // 0x218f68: 0x8ce23438  lw          $v0, 0x3438($a3)
    ctx->pc = 0x218f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13368)));
    // 0x218f6c: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x218F6Cu;
    {
        const bool branch_taken_0x218f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F6Cu;
        // 0x218f70: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f6c) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x218F74u;
label_218f74:
    // 0x218f74: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218f78: 0x8c430d10  lw          $v1, 0xD10($v0)
    ctx->pc = 0x218f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3344)));
    // 0x218f7c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x218F7Cu;
    {
        const bool branch_taken_0x218f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F7Cu;
        // 0x218f80: 0x8c440d14  lw          $a0, 0xD14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f7c) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218F84u;
label_218f84:
    // 0x218f84: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218f88: 0x8c430d38  lw          $v1, 0xD38($v0)
    ctx->pc = 0x218f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3384)));
    // 0x218f8c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x218F8Cu;
    {
        const bool branch_taken_0x218f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F8Cu;
        // 0x218f90: 0x8c440d3c  lw          $a0, 0xD3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f8c) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218F94u;
label_218f94:
    // 0x218f94: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218f98: 0x8c432454  lw          $v1, 0x2454($v0)
    ctx->pc = 0x218f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9300)));
    // 0x218f9c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x218F9Cu;
    {
        const bool branch_taken_0x218f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F9Cu;
        // 0x218fa0: 0x8c442458  lw          $a0, 0x2458($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f9c) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218FA4u;
label_218fa4:
    // 0x218fa4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218fa8: 0x8c432154  lw          $v1, 0x2154($v0)
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8532)));
    // 0x218fac: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x218FACu;
    {
        const bool branch_taken_0x218fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FACu;
        // 0x218fb0: 0x8c442158  lw          $a0, 0x2158($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218fac) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218FB4u;
label_218fb4:
    // 0x218fb4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218fb8: 0x8c432d54  lw          $v1, 0x2D54($v0)
    ctx->pc = 0x218fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11604)));
    // 0x218fbc: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x218FBCu;
    {
        const bool branch_taken_0x218fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FBCu;
        // 0x218fc0: 0x8c442d58  lw          $a0, 0x2D58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218fbc) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x218FC4u;
label_218fc4:
    // 0x218fc4: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x218fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x218fc8: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x218fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x218fcc: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x218fccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x218fd0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x218FD0u;
    {
        const bool branch_taken_0x218fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FD0u;
        // 0x218fd4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218fd0) {
            ctx->pc = 0x218FF0u;
            goto label_218ff0;
        }
    }
    ctx->pc = 0x218FD8u;
    // 0x218fd8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x218fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x218fdc: 0x244268e0  addiu       $v0, $v0, 0x68E0
    ctx->pc = 0x218fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26848));
    // 0x218fe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218fe4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218fe8: 0x800008  jr          $a0
    ctx->pc = 0x218FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218FF0u: goto label_218ff0;
            case 0x219000u: goto label_219000;
            case 0x219010u: goto label_219010;
            case 0x219020u: goto label_219020;
            case 0x219030u: goto label_219030;
            case 0x219040u: goto label_219040;
            case 0x219050u: goto label_219050;
            case 0x219060u: goto label_219060;
            case 0x219070u: goto label_219070;
            case 0x219080u: goto label_219080;
            case 0x219090u: goto label_219090;
            case 0x2190A0u: goto label_2190a0;
            case 0x2190B0u: goto label_2190b0;
            case 0x2190C0u: goto label_2190c0;
            case 0x2190D0u: goto label_2190d0;
            case 0x2190E0u: goto label_2190e0;
            case 0x2190F0u: goto label_2190f0;
            case 0x21913Cu: goto label_21913c;
            case 0x21914Cu: goto label_21914c;
            case 0x219248u: goto label_219248;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218FE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x218FF0u;
label_218ff0:
    // 0x218ff0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x218ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218ff4: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x218ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x218ff8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x218FF8u;
    {
        const bool branch_taken_0x218ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FF8u;
        // 0x218ffc: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ff8) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219000u;
label_219000:
    // 0x219000: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219004: 0x8c430650  lw          $v1, 0x650($v0)
    ctx->pc = 0x219004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    // 0x219008: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x219008u;
    {
        const bool branch_taken_0x219008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219008u;
        // 0x21900c: 0x8c440654  lw          $a0, 0x654($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219008) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219010u;
label_219010:
    // 0x219010: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219014: 0x8c4335d4  lw          $v1, 0x35D4($v0)
    ctx->pc = 0x219014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13780)));
    // 0x219018: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x219018u;
    {
        const bool branch_taken_0x219018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219018u;
        // 0x21901c: 0x8c4435d8  lw          $a0, 0x35D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219018) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219020u;
label_219020:
    // 0x219020: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219024: 0x8c4325dc  lw          $v1, 0x25DC($v0)
    ctx->pc = 0x219024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9692)));
    // 0x219028: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x219028u;
    {
        const bool branch_taken_0x219028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219028u;
        // 0x21902c: 0x8c4425e0  lw          $a0, 0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219028) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219030u;
label_219030:
    // 0x219030: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219034: 0x8c4310b0  lw          $v1, 0x10B0($v0)
    ctx->pc = 0x219034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4272)));
    // 0x219038: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x219038u;
    {
        const bool branch_taken_0x219038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219038u;
        // 0x21903c: 0x8c4410b4  lw          $a0, 0x10B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219038) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219040u;
label_219040:
    // 0x219040: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219044: 0x8c433c90  lw          $v1, 0x3C90($v0)
    ctx->pc = 0x219044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15504)));
    // 0x219048: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x219048u;
    {
        const bool branch_taken_0x219048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219048u;
        // 0x21904c: 0x8c443c94  lw          $a0, 0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219048) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219050u;
label_219050:
    // 0x219050: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219054: 0x8c430830  lw          $v1, 0x830($v0)
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2096)));
    // 0x219058: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x219058u;
    {
        const bool branch_taken_0x219058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219058u;
        // 0x21905c: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219058) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219060u;
label_219060:
    // 0x219060: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219064: 0x8c431fb8  lw          $v1, 0x1FB8($v0)
    ctx->pc = 0x219064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8120)));
    // 0x219068: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x219068u;
    {
        const bool branch_taken_0x219068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219068u;
        // 0x21906c: 0x8c441fbc  lw          $a0, 0x1FBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219068) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219070u;
label_219070:
    // 0x219070: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219074: 0x8c4318f8  lw          $v1, 0x18F8($v0)
    ctx->pc = 0x219074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6392)));
    // 0x219078: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x219078u;
    {
        const bool branch_taken_0x219078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219078u;
        // 0x21907c: 0x8c4418fc  lw          $a0, 0x18FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219078) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219080u;
label_219080:
    // 0x219080: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219084: 0x8c433040  lw          $v1, 0x3040($v0)
    ctx->pc = 0x219084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12352)));
    // 0x219088: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x219088u;
    {
        const bool branch_taken_0x219088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219088u;
        // 0x21908c: 0x8c443044  lw          $a0, 0x3044($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219088) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219090u;
label_219090:
    // 0x219090: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219094: 0x8c433274  lw          $v1, 0x3274($v0)
    ctx->pc = 0x219094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12916)));
    // 0x219098: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x219098u;
    {
        const bool branch_taken_0x219098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219098u;
        // 0x21909c: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219098) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2190A0u;
label_2190a0:
    // 0x2190a0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2190a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2190a4: 0x8c431eb4  lw          $v1, 0x1EB4($v0)
    ctx->pc = 0x2190a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7860)));
    // 0x2190a8: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x2190A8u;
    {
        const bool branch_taken_0x2190a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190A8u;
        // 0x2190ac: 0x8c441eb8  lw          $a0, 0x1EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190a8) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2190B0u;
label_2190b0:
    // 0x2190b0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2190b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2190b4: 0x8c431568  lw          $v1, 0x1568($v0)
    ctx->pc = 0x2190b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5480)));
    // 0x2190b8: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2190B8u;
    {
        const bool branch_taken_0x2190b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190B8u;
        // 0x2190bc: 0x8c44156c  lw          $a0, 0x156C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190b8) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2190C0u;
label_2190c0:
    // 0x2190c0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2190c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2190c4: 0x8c433a08  lw          $v1, 0x3A08($v0)
    ctx->pc = 0x2190c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14856)));
    // 0x2190c8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2190C8u;
    {
        const bool branch_taken_0x2190c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190C8u;
        // 0x2190cc: 0x8c443a0c  lw          $a0, 0x3A0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190c8) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2190D0u;
label_2190d0:
    // 0x2190d0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2190d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2190d4: 0x8c433420  lw          $v1, 0x3420($v0)
    ctx->pc = 0x2190d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13344)));
    // 0x2190d8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2190D8u;
    {
        const bool branch_taken_0x2190d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190D8u;
        // 0x2190dc: 0x8c443424  lw          $a0, 0x3424($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190d8) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2190E0u;
label_2190e0:
    // 0x2190e0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2190e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2190e4: 0x8c430d00  lw          $v1, 0xD00($v0)
    ctx->pc = 0x2190e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
    // 0x2190e8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2190E8u;
    {
        const bool branch_taken_0x2190e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190E8u;
        // 0x2190ec: 0x8c440d04  lw          $a0, 0xD04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190e8) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2190F0u;
label_2190f0:
    // 0x2190f0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2190f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2190f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2190f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190f8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2190F8u;
    SET_GPR_U32(ctx, 31, 0x219100u);
    ctx->pc = 0x2190FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190F8u;
    // 0x2190fc: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2190F8u, 0x219100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219100u;
label_219100:
    // 0x219100: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x219100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x219104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219108: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x219108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x21910c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21910cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219110: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x219110u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x219114: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219118: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21911c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21911cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219120: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x219120u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219124: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x219124u;
    SET_GPR_U32(ctx, 31, 0x21912Cu);
    ctx->pc = 0x219128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219124u;
    // 0x219128: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x219124u, 0x21912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21912Cu;
label_21912c:
    // 0x21912c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x21912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219130: 0x8c621bc8  lw          $v0, 0x1BC8($v1)
    ctx->pc = 0x219130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7112)));
    // 0x219134: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x219134u;
    {
        const bool branch_taken_0x219134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219134u;
        // 0x219138: 0x8c641bcc  lw          $a0, 0x1BCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219134) {
            ctx->pc = 0x219330u;
            goto label_219330;
        }
    }
    ctx->pc = 0x21913Cu;
label_21913c:
    // 0x21913c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x21913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219140: 0x8c432d48  lw          $v1, 0x2D48($v0)
    ctx->pc = 0x219140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11592)));
    // 0x219144: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x219144u;
    {
        const bool branch_taken_0x219144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219144u;
        // 0x219148: 0x8c442d4c  lw          $a0, 0x2D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219144) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x21914Cu;
label_21914c:
    // 0x21914c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x21914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219150: 0x8c43227c  lw          $v1, 0x227C($v0)
    ctx->pc = 0x219150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8828)));
    // 0x219154: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x219154u;
    {
        const bool branch_taken_0x219154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219154u;
        // 0x219158: 0x8c442280  lw          $a0, 0x2280($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219154) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x21915Cu;
label_21915c:
    // 0x21915c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x21915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x219160: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x219160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x219164: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x219164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x219168: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x219168u;
    {
        const bool branch_taken_0x219168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219168u;
        // 0x21916c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219168) {
            ctx->pc = 0x219188u;
            goto label_219188;
        }
    }
    ctx->pc = 0x219170u;
    // 0x219170: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x219170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x219174: 0x24426ae0  addiu       $v0, $v0, 0x6AE0
    ctx->pc = 0x219174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27360));
    // 0x219178: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x219178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21917c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21917cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219180: 0x800008  jr          $a0
    ctx->pc = 0x219180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219188u: goto label_219188;
            case 0x219198u: goto label_219198;
            case 0x2191A8u: goto label_2191a8;
            case 0x2191B8u: goto label_2191b8;
            case 0x2191C8u: goto label_2191c8;
            case 0x2191D8u: goto label_2191d8;
            case 0x2191E8u: goto label_2191e8;
            case 0x2191F8u: goto label_2191f8;
            case 0x219208u: goto label_219208;
            case 0x219218u: goto label_219218;
            case 0x219228u: goto label_219228;
            case 0x219238u: goto label_219238;
            case 0x219248u: goto label_219248;
            case 0x219278u: goto label_219278;
            case 0x219288u: goto label_219288;
            case 0x219298u: goto label_219298;
            case 0x2192A8u: goto label_2192a8;
            case 0x2192B8u: goto label_2192b8;
            case 0x2192C8u: goto label_2192c8;
            case 0x2192D8u: goto label_2192d8;
            case 0x2192E8u: goto label_2192e8;
            case 0x21933Cu: goto label_21933c;
            case 0x21934Cu: goto label_21934c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219180u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219188u;
label_219188:
    // 0x219188: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21918c: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x21918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x219190: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x219190u;
    {
        const bool branch_taken_0x219190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219190u;
        // 0x219194: 0x8c440118  lw          $a0, 0x118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219190) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219198u;
label_219198:
    // 0x219198: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21919c: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x21919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x2191a0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2191A0u;
    {
        const bool branch_taken_0x2191a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191A0u;
        // 0x2191a4: 0x8c440118  lw          $a0, 0x118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191a0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2191A8u;
label_2191a8:
    // 0x2191a8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2191a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2191ac: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2191acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2191b0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2191B0u;
    {
        const bool branch_taken_0x2191b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191B0u;
        // 0x2191b4: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191b0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2191B8u;
label_2191b8:
    // 0x2191b8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2191b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2191bc: 0x8c4335e4  lw          $v1, 0x35E4($v0)
    ctx->pc = 0x2191bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13796)));
    // 0x2191c0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2191C0u;
    {
        const bool branch_taken_0x2191c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191C0u;
        // 0x2191c4: 0x8c4435e8  lw          $a0, 0x35E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191c0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2191C8u;
label_2191c8:
    // 0x2191c8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2191c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2191cc: 0x8c4310c0  lw          $v1, 0x10C0($v0)
    ctx->pc = 0x2191ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4288)));
    // 0x2191d0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2191D0u;
    {
        const bool branch_taken_0x2191d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191D0u;
        // 0x2191d4: 0x8c4410c4  lw          $a0, 0x10C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191d0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2191D8u;
label_2191d8:
    // 0x2191d8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2191d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2191dc: 0x8c433ca0  lw          $v1, 0x3CA0($v0)
    ctx->pc = 0x2191dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15520)));
    // 0x2191e0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2191E0u;
    {
        const bool branch_taken_0x2191e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191E0u;
        // 0x2191e4: 0x8c443ca4  lw          $a0, 0x3CA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191e0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2191E8u;
label_2191e8:
    // 0x2191e8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2191e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2191ec: 0x8c430840  lw          $v1, 0x840($v0)
    ctx->pc = 0x2191ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x2191f0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2191F0u;
    {
        const bool branch_taken_0x2191f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191F0u;
        // 0x2191f4: 0x8c440844  lw          $a0, 0x844($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191f0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2191F8u;
label_2191f8:
    // 0x2191f8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2191f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2191fc: 0x8c431fc8  lw          $v1, 0x1FC8($v0)
    ctx->pc = 0x2191fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8136)));
    // 0x219200: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x219200u;
    {
        const bool branch_taken_0x219200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219200u;
        // 0x219204: 0x8c441fcc  lw          $a0, 0x1FCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219200) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219208u;
label_219208:
    // 0x219208: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21920c: 0x8c431ec4  lw          $v1, 0x1EC4($v0)
    ctx->pc = 0x21920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7876)));
    // 0x219210: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x219210u;
    {
        const bool branch_taken_0x219210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219210u;
        // 0x219214: 0x8c441ec8  lw          $a0, 0x1EC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219210) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219218u;
label_219218:
    // 0x219218: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21921c: 0x8c431908  lw          $v1, 0x1908($v0)
    ctx->pc = 0x21921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6408)));
    // 0x219220: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x219220u;
    {
        const bool branch_taken_0x219220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219220u;
        // 0x219224: 0x8c44190c  lw          $a0, 0x190C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219220) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219228u;
label_219228:
    // 0x219228: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21922c: 0x8c433050  lw          $v1, 0x3050($v0)
    ctx->pc = 0x21922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12368)));
    // 0x219230: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x219230u;
    {
        const bool branch_taken_0x219230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219230u;
        // 0x219234: 0x8c443054  lw          $a0, 0x3054($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219230) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219238u;
label_219238:
    // 0x219238: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21923c: 0x8c433274  lw          $v1, 0x3274($v0)
    ctx->pc = 0x21923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12916)));
    // 0x219240: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x219240u;
    {
        const bool branch_taken_0x219240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219240u;
        // 0x219244: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219240) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219248u;
label_219248:
    // 0x219248: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21924c: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x21924cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x219250: 0x8c433734  lw          $v1, 0x3734($v0)
    ctx->pc = 0x219250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14132)));
    // 0x219254: 0x8c443738  lw          $a0, 0x3738($v0)
    ctx->pc = 0x219254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14136)));
    // 0x219258: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x219258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21925c: 0x10e00040  beqz        $a3, . + 4 + (0x40 << 2)
    ctx->pc = 0x21925Cu;
    {
        const bool branch_taken_0x21925c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x219260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21925Cu;
        // 0x219260: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21925c) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x219264u;
    // 0x219264: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x219264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219268: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x219268u;
    SET_GPR_U32(ctx, 31, 0x219270u);
    ctx->pc = 0x21926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219268u;
    // 0x21926c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x219268u, 0x219270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219270u;
label_219270:
    // 0x219270: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x219270u;
    {
        const bool branch_taken_0x219270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219270u;
        // 0x219274: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219270) {
            ctx->pc = 0x219364u;
            goto label_219364;
        }
    }
    ctx->pc = 0x219278u;
label_219278:
    // 0x219278: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21927c: 0x8c431578  lw          $v1, 0x1578($v0)
    ctx->pc = 0x21927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5496)));
    // 0x219280: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x219280u;
    {
        const bool branch_taken_0x219280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219280u;
        // 0x219284: 0x8c44157c  lw          $a0, 0x157C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219280) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219288u;
label_219288:
    // 0x219288: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21928c: 0x8c433a18  lw          $v1, 0x3A18($v0)
    ctx->pc = 0x21928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14872)));
    // 0x219290: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x219290u;
    {
        const bool branch_taken_0x219290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219290u;
        // 0x219294: 0x8c443a1c  lw          $a0, 0x3A1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219290) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x219298u;
label_219298:
    // 0x219298: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21929c: 0x8c433430  lw          $v1, 0x3430($v0)
    ctx->pc = 0x21929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13360)));
    // 0x2192a0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2192A0u;
    {
        const bool branch_taken_0x2192a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192A0u;
        // 0x2192a4: 0x8c443434  lw          $a0, 0x3434($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192a0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2192A8u;
label_2192a8:
    // 0x2192a8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2192a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2192ac: 0x8c430d10  lw          $v1, 0xD10($v0)
    ctx->pc = 0x2192acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3344)));
    // 0x2192b0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2192B0u;
    {
        const bool branch_taken_0x2192b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192B0u;
        // 0x2192b4: 0x8c440d14  lw          $a0, 0xD14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192b0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2192B8u;
label_2192b8:
    // 0x2192b8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2192b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2192bc: 0x8c430d38  lw          $v1, 0xD38($v0)
    ctx->pc = 0x2192bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3384)));
    // 0x2192c0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2192C0u;
    {
        const bool branch_taken_0x2192c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192C0u;
        // 0x2192c4: 0x8c440d3c  lw          $a0, 0xD3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192c0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2192C8u;
label_2192c8:
    // 0x2192c8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2192c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2192cc: 0x8c432454  lw          $v1, 0x2454($v0)
    ctx->pc = 0x2192ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9300)));
    // 0x2192d0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2192D0u;
    {
        const bool branch_taken_0x2192d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192D0u;
        // 0x2192d4: 0x8c442458  lw          $a0, 0x2458($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192d0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2192D8u;
label_2192d8:
    // 0x2192d8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2192d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2192dc: 0x8c432154  lw          $v1, 0x2154($v0)
    ctx->pc = 0x2192dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8532)));
    // 0x2192e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2192E0u;
    {
        const bool branch_taken_0x2192e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192E0u;
        // 0x2192e4: 0x8c442158  lw          $a0, 0x2158($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192e0) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x2192E8u;
label_2192e8:
    // 0x2192e8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2192e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2192ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2192ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192f0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2192F0u;
    SET_GPR_U32(ctx, 31, 0x2192F8u);
    ctx->pc = 0x2192F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192F0u;
    // 0x2192f4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2192F0u, 0x2192F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192F8u;
label_2192f8:
    // 0x2192f8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2192f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2192fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2192fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219300: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x219300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x219304: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x219304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219308: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x219308u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x21930c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21930cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219310: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219314: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x219314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219318: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x219318u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21931c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x21931Cu;
    SET_GPR_U32(ctx, 31, 0x219324u);
    ctx->pc = 0x219320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21931Cu;
    // 0x219320: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x21931Cu, 0x219324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219324u;
label_219324:
    // 0x219324: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x219324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219328: 0x8c621bd0  lw          $v0, 0x1BD0($v1)
    ctx->pc = 0x219328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7120)));
    // 0x21932c: 0x8c641bd4  lw          $a0, 0x1BD4($v1)
    ctx->pc = 0x21932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7124)));
label_219330:
    // 0x219330: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x219330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219334: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x219334u;
    {
        const bool branch_taken_0x219334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219334u;
        // 0x219338: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219334) {
            ctx->pc = 0x219360u;
            goto label_219360;
        }
    }
    ctx->pc = 0x21933Cu;
label_21933c:
    // 0x21933c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x21933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219340: 0x8c432d54  lw          $v1, 0x2D54($v0)
    ctx->pc = 0x219340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11604)));
    // 0x219344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x219344u;
    {
        const bool branch_taken_0x219344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219344u;
        // 0x219348: 0x8c442d58  lw          $a0, 0x2D58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219344) {
            ctx->pc = 0x219358u;
            goto label_219358;
        }
    }
    ctx->pc = 0x21934Cu;
label_21934c:
    // 0x21934c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x21934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219350: 0x8c43228c  lw          $v1, 0x228C($v0)
    ctx->pc = 0x219350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8844)));
    // 0x219354: 0x8c442290  lw          $a0, 0x2290($v0)
    ctx->pc = 0x219354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8848)));
label_219358:
    // 0x219358: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x219358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21935c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x21935cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_219360:
    // 0x219360: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x219360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_219364:
    // 0x219364: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x219364u;
    {
        const bool branch_taken_0x219364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219364u;
        // 0x219368: 0x240503b7  addiu       $a1, $zero, 0x3B7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219364) {
            ctx->pc = 0x219398u;
            goto label_219398;
        }
    }
    ctx->pc = 0x21936Cu;
    // 0x21936c: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x21936cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219370: 0x944402fe  lhu         $a0, 0x2FE($v0)
    ctx->pc = 0x219370u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x219374: 0x8ce204b8  lw          $v0, 0x4B8($a3)
    ctx->pc = 0x219374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1208)));
    // 0x219378: 0x8ce304bc  lw          $v1, 0x4BC($a3)
    ctx->pc = 0x219378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1212)));
    // 0x21937c: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x21937cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x219380: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x219380u;
    {
        const bool branch_taken_0x219380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x219384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219380u;
        // 0x219384: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219380) {
            ctx->pc = 0x219398u;
            goto label_219398;
        }
    }
    ctx->pc = 0x219388u;
    // 0x219388: 0x8ce204f4  lw          $v0, 0x4F4($a3)
    ctx->pc = 0x219388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1268)));
    // 0x21938c: 0x8ce304f8  lw          $v1, 0x4F8($a3)
    ctx->pc = 0x21938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1272)));
    // 0x219390: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x219390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x219394: 0x678021  addu        $s0, $v1, $a3
    ctx->pc = 0x219394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_219398:
    // 0x219398: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x219398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21939c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21939cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2193a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193a4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2193a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2193a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193ac: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2193acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2193b0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2193B0u;
    SET_GPR_U32(ctx, 31, 0x2193B8u);
    ctx->pc = 0x2193B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193B0u;
    // 0x2193b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2193B0u, 0x2193B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193B8u;
label_2193b8:
    // 0x2193b8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2193b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2193bc: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2193bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2193c0: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x2193c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x2193c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2193c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2193c8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2193c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2193cc:
    // 0x2193cc: 0x8e2316c4  lw          $v1, 0x16C4($s1)
    ctx->pc = 0x2193ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x2193d0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2193d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2193d4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2193D4u;
    {
        const bool branch_taken_0x2193d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2193D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193D4u;
        // 0x2193d8: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193d4) {
            ctx->pc = 0x2193E4u;
            goto label_2193e4;
        }
    }
    ctx->pc = 0x2193DCu;
    // 0x2193dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2193DCu;
    {
        const bool branch_taken_0x2193dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2193E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193DCu;
        // 0x2193e0: 0x262516b0  addiu       $a1, $s1, 0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193dc) {
            ctx->pc = 0x2193E8u;
            goto label_2193e8;
        }
    }
    ctx->pc = 0x2193E4u;
label_2193e4:
    // 0x2193e4: 0x262516a0  addiu       $a1, $s1, 0x16A0
    ctx->pc = 0x2193e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
label_2193e8:
    // 0x2193e8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2193e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2193ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2193ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2193f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2193f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2193f4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2193F4u;
    SET_GPR_U32(ctx, 31, 0x2193FCu);
    ctx->pc = 0x2193F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193F4u;
    // 0x2193f8: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2193F4u, 0x2193FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193FCu;
label_2193fc:
    // 0x2193fc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2193fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x219400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x219400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219404: 0x0  nop
    ctx->pc = 0x219404u;
    // NOP
    // 0x219408: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21940c: 0x0  nop
    ctx->pc = 0x21940cu;
    // NOP
    // 0x219410: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x219410u;
    {
        const bool branch_taken_0x219410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219410) {
            ctx->pc = 0x219414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219410u;
            // 0x219414: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x219418u;
            goto label_219418;
        }
    }
    ctx->pc = 0x219418u;
label_219418:
    // 0x219418: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x219418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x21941c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x21941cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x219420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219424: 0x0  nop
    ctx->pc = 0x219424u;
    // NOP
    // 0x219428: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x219428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21942c: 0x0  nop
    ctx->pc = 0x21942cu;
    // NOP
    // 0x219430: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x219430u;
    {
        const bool branch_taken_0x219430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219430u;
        // 0x219434: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219430) {
            ctx->pc = 0x21945Cu;
            goto label_21945c;
        }
    }
    ctx->pc = 0x219438u;
    // 0x219438: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x219438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x21943c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219440: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x219440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x219444: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x219444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x219448: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x219448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x21944c: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x21944cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    // 0x219450: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x219450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x219454: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x219454u;
    {
        const bool branch_taken_0x219454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219454u;
        // 0x219458: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219454) {
            ctx->pc = 0x2194ACu;
            goto label_2194ac;
        }
    }
    ctx->pc = 0x21945Cu;
label_21945c:
    // 0x21945c: 0x8e2316c4  lw          $v1, 0x16C4($s1)
    ctx->pc = 0x21945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
    // 0x219460: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x219460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x219464: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x219464u;
    {
        const bool branch_taken_0x219464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x219468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219464u;
        // 0x219468: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219464) {
            ctx->pc = 0x219490u;
            goto label_219490;
        }
    }
    ctx->pc = 0x21946Cu;
    // 0x21946c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219470: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x219470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x219474: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x219474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x219478: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21947c: 0x262516b0  addiu       $a1, $s1, 0x16B0
    ctx->pc = 0x21947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5808));
    // 0x219480: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x219480u;
    SET_GPR_U32(ctx, 31, 0x219488u);
    ctx->pc = 0x219484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219480u;
    // 0x219484: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x219480u, 0x219488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219488u;
label_219488:
    // 0x219488: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219488u;
    {
        const bool branch_taken_0x219488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219488) {
            ctx->pc = 0x2194ACu;
            goto label_2194ac;
        }
    }
    ctx->pc = 0x219490u;
label_219490:
    // 0x219490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219494: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x219494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x219498: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x219498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x21949c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21949cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2194a0: 0x262516a0  addiu       $a1, $s1, 0x16A0
    ctx->pc = 0x2194a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    // 0x2194a4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2194A4u;
    SET_GPR_U32(ctx, 31, 0x2194ACu);
    ctx->pc = 0x2194A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194A4u;
    // 0x2194a8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2194A4u, 0x2194ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194ACu;
label_2194ac:
    // 0x2194ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2194acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2194b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2194b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2194b4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2194B4u;
    SET_GPR_U32(ctx, 31, 0x2194BCu);
    ctx->pc = 0x2194B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194B4u;
    // 0x2194b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2194B4u, 0x2194BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194BCu;
label_2194bc:
    // 0x2194bc: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x2194BCu;
    {
        const bool branch_taken_0x2194bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2194C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194BCu;
        // 0x2194c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194bc) {
            ctx->pc = 0x2199BCu;
            goto label_2199bc;
        }
    }
    ctx->pc = 0x2194C4u;
label_2194c4:
    // 0x2194c4: 0x262405d0  addiu       $a0, $s1, 0x5D0
    ctx->pc = 0x2194c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x2194c8: 0x262316a0  addiu       $v1, $s1, 0x16A0
    ctx->pc = 0x2194c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    // 0x2194cc: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2194CCu;
    {
        const bool branch_taken_0x2194cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2194D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194CCu;
        // 0x2194d0: 0x262205e0  addiu       $v0, $s1, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194cc) {
            ctx->pc = 0x2194ECu;
            goto label_2194ec;
        }
    }
    ctx->pc = 0x2194D4u;
    // 0x2194d4: 0xc62016a0  lwc1        $f0, 0x16A0($s1)
    ctx->pc = 0x2194d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2194d8: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x2194d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x2194dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2194dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2194e0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2194e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2194e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2194e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2194e8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2194e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2194ec:
    // 0x2194ec: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2194ECu;
    {
        const bool branch_taken_0x2194ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2194ec) {
            ctx->pc = 0x2194F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2194ECu;
            // 0x2194f0: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219510u;
            goto label_219510;
        }
    }
    ctx->pc = 0x2194F4u;
    // 0x2194f4: 0xc62016a0  lwc1        $f0, 0x16A0($s1)
    ctx->pc = 0x2194f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2194f8: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x2194f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
    // 0x2194fc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2194fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219500: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x219500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x219504: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x219504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219508: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x219508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21950c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x21950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_219510:
    // 0x219510: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x219510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x219514: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x219514u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219518: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x219518u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21951c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x21951cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x219520: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x219520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x219524: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x219524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x219528: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x219528u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21952c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x21952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x219530: 0x262305c0  addiu       $v1, $s1, 0x5C0
    ctx->pc = 0x219530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x219534: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x219534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x219538: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219538u;
    {
        const bool branch_taken_0x219538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219538u;
        // 0x21953c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219538) {
            ctx->pc = 0x219554u;
            goto label_219554;
        }
    }
    ctx->pc = 0x219540u;
    // 0x219540: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x219540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219544: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x219544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x219548: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x219548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21954c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219550: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x219550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_219554:
    // 0x219554: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x219554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x219558: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x219558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21955c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21955cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219564: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x219564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x219568: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x219568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21956c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219570: 0xe620024c  swc1        $f0, 0x24C($s1)
    ctx->pc = 0x219570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x219574: 0xc09d91a  jal         func_276468
    ctx->pc = 0x219574u;
    SET_GPR_U32(ctx, 31, 0x21957Cu);
    ctx->pc = 0x219578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219574u;
    // 0x219578: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x219574u, 0x21957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21957Cu;
label_21957c:
    // 0x21957c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x21957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219580: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x219580u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x219584: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x219584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21958c: 0x8c651be8  lw          $a1, 0x1BE8($v1)
    ctx->pc = 0x21958cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7144)));
    // 0x219590: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x219590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219594: 0x8c661bec  lw          $a2, 0x1BEC($v1)
    ctx->pc = 0x219594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7148)));
    // 0x219598: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x219598u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21959c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2195a0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2195A0u;
    SET_GPR_U32(ctx, 31, 0x2195A8u);
    ctx->pc = 0x2195A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195A0u;
    // 0x2195a4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2195A0u, 0x2195A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195A8u;
label_2195a8:
    // 0x2195a8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2195a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2195ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2195acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2195b0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2195b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2195b4:
    // 0x2195b4: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2195b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2195b8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2195b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2195bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2195bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2195c0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2195C0u;
    SET_GPR_U32(ctx, 31, 0x2195C8u);
    ctx->pc = 0x2195C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195C0u;
    // 0x2195c4: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2195C0u, 0x2195C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195C8u;
label_2195c8:
    // 0x2195c8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2195c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2195ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2195d0: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2195d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2195d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2195d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2195d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2195d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2195dc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2195dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2195e0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2195E0u;
    SET_GPR_U32(ctx, 31, 0x2195E8u);
    ctx->pc = 0x2195E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195E0u;
    // 0x2195e4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2195E0u, 0x2195E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195E8u;
label_2195e8:
    // 0x2195e8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2195E8u;
    SET_GPR_U32(ctx, 31, 0x2195F0u);
    ctx->pc = 0x2195ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195E8u;
    // 0x2195ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2195E8u, 0x2195F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195F0u;
label_2195f0:
    // 0x2195f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2195F0u;
    {
        const bool branch_taken_0x2195f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2195f0) {
            ctx->pc = 0x219604u;
            goto label_219604;
        }
    }
    ctx->pc = 0x2195F8u;
    // 0x2195f8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2195f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2195fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2195fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219600: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x219600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_219604:
    // 0x219604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219608: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x219608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21960c: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x21960Cu;
    {
        const bool branch_taken_0x21960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21960Cu;
        // 0x219610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21960c) {
            ctx->pc = 0x2199BCu;
            goto label_2199bc;
        }
    }
    ctx->pc = 0x219614u;
label_219614:
    // 0x219614: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x219614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x219618: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x219618u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x21961c: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x21961cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x219620: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x219620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x219624: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x219624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x219628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21962c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x21962Cu;
    SET_GPR_U32(ctx, 31, 0x219634u);
    ctx->pc = 0x219630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21962Cu;
    // 0x219630: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x21962Cu, 0x219634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219634u;
label_219634:
    // 0x219634: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x219634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x219638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21963c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x21963cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x219640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x219640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219644: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x219644u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x219648: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21964c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21964cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x219650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219654: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x219654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219658: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x219658u;
    SET_GPR_U32(ctx, 31, 0x219660u);
    ctx->pc = 0x21965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219658u;
    // 0x21965c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x219658u, 0x219660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219660u;
label_219660:
    // 0x219660: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x219660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x219664: 0x262205d0  addiu       $v0, $s1, 0x5D0
    ctx->pc = 0x219664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x219668: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x219668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x21966c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x21966cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219670: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x219670u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219674: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x219674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x219678: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x219678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21967c: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x21967cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x219680: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x219680u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x219684: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x219684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x219688: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x219688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x21968c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x21968cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x219690: 0x12120006  beq         $s0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x219690u;
    {
        const bool branch_taken_0x219690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x219694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219690u;
        // 0x219694: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219690) {
            ctx->pc = 0x2196ACu;
            goto label_2196ac;
        }
    }
    ctx->pc = 0x219698u;
    // 0x219698: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x219698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21969c: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x21969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x2196a0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2196a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2196a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2196a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2196a8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2196a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2196ac:
    // 0x2196ac: 0xae2005c4  sw          $zero, 0x5C4($s1)
    ctx->pc = 0x2196acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 0));
    // 0x2196b0: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2196B0u;
    SET_GPR_U32(ctx, 31, 0x2196B8u);
    ctx->pc = 0x2196B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196B0u;
    // 0x2196b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2196B0u, 0x2196B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196B8u;
label_2196b8:
    // 0x2196b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2196b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2196bc: 0x0  nop
    ctx->pc = 0x2196bcu;
    // NOP
    // 0x2196c0: 0x0  nop
    ctx->pc = 0x2196c0u;
    // NOP
    // 0x2196c4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2196c4u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x2196c8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2196c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2196cc: 0x0  nop
    ctx->pc = 0x2196ccu;
    // NOP
    // 0x2196d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2196D0u;
    {
        const bool branch_taken_0x2196d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2196d0) {
            ctx->pc = 0x2196E0u;
            goto label_2196e0;
        }
    }
    ctx->pc = 0x2196D8u;
    // 0x2196d8: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2196D8u;
    SET_GPR_U32(ctx, 31, 0x2196E0u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2196D8u, 0x2196E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2196E0u;
label_2196e0:
    // 0x2196e0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2196e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2196e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2196e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2196e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2196e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2196ec: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2196ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2196f0: 0x0  nop
    ctx->pc = 0x2196f0u;
    // NOP
    // 0x2196f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2196F4u;
    {
        const bool branch_taken_0x2196f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2196f4) {
            ctx->pc = 0x2196F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2196F4u;
            // 0x2196f8: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2196FCu;
            goto label_2196fc;
        }
    }
    ctx->pc = 0x2196FCu;
label_2196fc:
    // 0x2196fc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2196fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x219700: 0xc04078a  jal         func_101E28
    ctx->pc = 0x219700u;
    SET_GPR_U32(ctx, 31, 0x219708u);
    ctx->pc = 0x219704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219700u;
    // 0x219704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x219700u, 0x219708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219708u;
label_219708:
    // 0x219708: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x219708u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x21970c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21970cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219710: 0x0  nop
    ctx->pc = 0x219710u;
    // NOP
    // 0x219714: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x219714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219718: 0x0  nop
    ctx->pc = 0x219718u;
    // NOP
    // 0x21971c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x21971Cu;
    {
        const bool branch_taken_0x21971c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21971c) {
            ctx->pc = 0x219764u;
            goto label_219764;
        }
    }
    ctx->pc = 0x219724u;
    // 0x219724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219728: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x219728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21972c: 0xc62105c0  lwc1        $f1, 0x5C0($s1)
    ctx->pc = 0x21972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219730: 0x0  nop
    ctx->pc = 0x219730u;
    // NOP
    // 0x219734: 0x0  nop
    ctx->pc = 0x219734u;
    // NOP
    // 0x219738: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x219738u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x21973c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21973cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x219740: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x219740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x219744: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x219744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219748: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x219748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21974c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21974cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x219750: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x219750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219754: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x219754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x219758: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x219758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21975c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x21975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219760: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x219760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_219764:
    // 0x219764: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x219764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x219768: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x219768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21976c: 0x12120006  beq         $s0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x21976Cu;
    {
        const bool branch_taken_0x21976c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x219770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21976Cu;
        // 0x219770: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21976c) {
            ctx->pc = 0x219788u;
            goto label_219788;
        }
    }
    ctx->pc = 0x219774u;
    // 0x219774: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x219774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219778: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x219778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x21977c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x21977cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x219780: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x219780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219784: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x219784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_219788:
    // 0x219788: 0xda2405c0  lqc2        $vf4, 0x5C0($s1)
    ctx->pc = 0x219788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x21978c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x21978cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x219790: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x219790u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x219794: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x219794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x219798: 0xfa2405c0  sqc2        $vf4, 0x5C0($s1)
    ctx->pc = 0x219798u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1472), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21979c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x21979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2197a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2197a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2197a4: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x2197a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x2197a8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2197a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2197ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2197acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2197b0: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2197b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2197b4: 0xda2405c0  lqc2        $vf4, 0x5C0($s1)
    ctx->pc = 0x2197b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x2197b8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2197b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2197bc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2197bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2197c0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2197c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2197c4: 0xfa2405c0  sqc2        $vf4, 0x5C0($s1)
    ctx->pc = 0x2197c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1472), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2197c8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2197c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2197cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2197ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2197d0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2197d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2197d4:
    // 0x2197d4: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2197d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2197d8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2197d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2197dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2197dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2197e0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2197E0u;
    SET_GPR_U32(ctx, 31, 0x2197E8u);
    ctx->pc = 0x2197E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197E0u;
    // 0x2197e4: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2197E0u, 0x2197E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197E8u;
label_2197e8:
    // 0x2197e8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2197e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2197ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2197ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2197f0: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2197f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2197f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2197f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2197f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2197f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2197fc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2197fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x219800: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x219800u;
    SET_GPR_U32(ctx, 31, 0x219808u);
    ctx->pc = 0x219804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219800u;
    // 0x219804: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x219800u, 0x219808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219808u;
label_219808:
    // 0x219808: 0xc055f06  jal         func_157C18
    ctx->pc = 0x219808u;
    SET_GPR_U32(ctx, 31, 0x219810u);
    ctx->pc = 0x21980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219808u;
    // 0x21980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x219808u, 0x219810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219810u;
label_219810:
    // 0x219810: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x219810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219814: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x219814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x219818: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x219818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x21981c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x21981cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219820: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x219820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x219824: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x219824u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219828: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x219828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x21982c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x21982cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x219830: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x219830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x219834: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x219834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x219838: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x219838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21983c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x21983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x219840: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x219840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x219844: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x219844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x219848: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x219848u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21984c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x21984cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219850: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x219850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x219854: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x219854u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x219858: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x219858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21985c: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x21985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219860: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x219860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219864: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x219864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x219868: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x219868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21986c: 0x0  nop
    ctx->pc = 0x21986cu;
    // NOP
    // 0x219870: 0x4500016f  bc1f        . + 4 + (0x16F << 2)
    ctx->pc = 0x219870u;
    {
        const bool branch_taken_0x219870 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219870u;
        // 0x219874: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219870) {
            ctx->pc = 0x219E30u;
            goto label_219e30;
        }
    }
    ctx->pc = 0x219878u;
    // 0x219878: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x219878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21987c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219880: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x219880u;
    {
        const bool branch_taken_0x219880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219880u;
        // 0x219884: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219880) {
            ctx->pc = 0x219E30u;
            goto label_219e30;
        }
    }
    ctx->pc = 0x219888u;
label_219888:
    // 0x219888: 0xc09d91a  jal         func_276468
    ctx->pc = 0x219888u;
    SET_GPR_U32(ctx, 31, 0x219890u);
    ctx->pc = 0x21988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219888u;
    // 0x21988c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x219888u, 0x219890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219890u;
label_219890:
    // 0x219890: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x219890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x219894: 0x38630221  xori        $v1, $v1, 0x221
    ctx->pc = 0x219894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)545);
    // 0x219898: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x219898u;
    {
        const bool branch_taken_0x219898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219898u;
        // 0x21989c: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219898) {
            ctx->pc = 0x2198CCu;
            goto label_2198cc;
        }
    }
    ctx->pc = 0x2198A0u;
    // 0x2198a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2198A0u;
    SET_GPR_U32(ctx, 31, 0x2198A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2198A0u, 0x2198A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198A8u;
label_2198a8:
    // 0x2198a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2198a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2198ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2198ACu;
    {
        const bool branch_taken_0x2198ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2198B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198ACu;
        // 0x2198b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198ac) {
            ctx->pc = 0x2198BCu;
            goto label_2198bc;
        }
    }
    ctx->pc = 0x2198B4u;
    // 0x2198b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2198B4u;
    {
        const bool branch_taken_0x2198b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2198B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198B4u;
        // 0x2198b8: 0xa22217c3  sb          $v0, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198b4) {
            ctx->pc = 0x2198C0u;
            goto label_2198c0;
        }
    }
    ctx->pc = 0x2198BCu;
label_2198bc:
    // 0x2198bc: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x2198bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_2198c0:
    // 0x2198c0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2198C0u;
    SET_GPR_U32(ctx, 31, 0x2198C8u);
    ctx->pc = 0x2198C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198C0u;
    // 0x2198c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2198C0u, 0x2198C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198C8u;
label_2198c8:
    // 0x2198c8: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2198c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2198cc:
    // 0x2198cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2198ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2198d0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2198d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2198d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2198d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2198d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2198d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2198dc: 0x8c451bf0  lw          $a1, 0x1BF0($v0)
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7152)));
    // 0x2198e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2198e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2198e4: 0x8c461bf4  lw          $a2, 0x1BF4($v0)
    ctx->pc = 0x2198e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7156)));
    // 0x2198e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2198e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2198ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2198ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2198f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2198F0u;
    SET_GPR_U32(ctx, 31, 0x2198F8u);
    ctx->pc = 0x2198F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198F0u;
    // 0x2198f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2198F0u, 0x2198F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198F8u;
label_2198f8:
    // 0x2198f8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2198f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2198fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2198fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219900: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x219900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_219904:
    // 0x219904: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x219904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x219908: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21990c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219910: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x219910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x219914: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x219914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x219918: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x219918u;
    SET_GPR_U32(ctx, 31, 0x219920u);
    ctx->pc = 0x21991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219918u;
    // 0x21991c: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x219918u, 0x219920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219920u;
label_219920:
    // 0x219920: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x219920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219928: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x219928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x21992c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x21992cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x219930: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219934: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x219934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x219938: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x219938u;
    SET_GPR_U32(ctx, 31, 0x219940u);
    ctx->pc = 0x21993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219938u;
    // 0x21993c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x219938u, 0x219940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219940u;
label_219940:
    // 0x219940: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x219940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219944: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x219944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x219948: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x219948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21994c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21994cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219950: 0xc620024c  lwc1        $f0, 0x24C($s1)
    ctx->pc = 0x219950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219954: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x219954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x219958: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x219958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x21995c: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x21995cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x219960: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x219960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x219964: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x219964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x219968: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x219968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21996c: 0x0  nop
    ctx->pc = 0x21996cu;
    // NOP
    // 0x219970: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x219970u;
    {
        const bool branch_taken_0x219970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219970u;
        // 0x219974: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219970) {
            ctx->pc = 0x21998Cu;
            goto label_21998c;
        }
    }
    ctx->pc = 0x219978u;
    // 0x219978: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x219978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21997c: 0xe634024c  swc1        $f20, 0x24C($s1)
    ctx->pc = 0x21997cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x219980: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x219980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x219984: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x219984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219988: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x219988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_21998c:
    // 0x21998c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x21998Cu;
    SET_GPR_U32(ctx, 31, 0x219994u);
    ctx->pc = 0x219990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21998Cu;
    // 0x219990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x21998Cu, 0x219994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219994u;
label_219994:
    // 0x219994: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x219994u;
    {
        const bool branch_taken_0x219994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219994u;
        // 0x219998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219994) {
            ctx->pc = 0x2199BCu;
            goto label_2199bc;
        }
    }
    ctx->pc = 0x21999Cu;
    // 0x21999c: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x21999Cu;
    SET_GPR_U32(ctx, 31, 0x2199A4u);
    ctx->pc = 0x2199A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21999Cu;
    // 0x2199a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x21999Cu, 0x2199A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199A4u;
label_2199a4:
    // 0x2199a4: 0x54400123  bnel        $v0, $zero, . + 4 + (0x123 << 2)
    ctx->pc = 0x2199A4u;
    {
        const bool branch_taken_0x2199a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2199a4) {
            ctx->pc = 0x2199A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2199A4u;
            // 0x2199a8: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E34u;
            goto label_219e34;
        }
    }
    ctx->pc = 0x2199ACu;
    // 0x2199ac: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2199acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2199b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2199b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2199b4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2199b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2199b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2199b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2199bc:
    // 0x2199bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2199BCu;
    SET_GPR_U32(ctx, 31, 0x2199C4u);
    ctx->pc = 0x2199C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199BCu;
    // 0x2199c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2199BCu, 0x2199C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199C4u;
label_2199c4:
    // 0x2199c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2199c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2199c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2199C8u;
    SET_GPR_U32(ctx, 31, 0x2199D0u);
    ctx->pc = 0x2199CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199C8u;
    // 0x2199cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2199C8u, 0x2199D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199D0u;
label_2199d0:
    // 0x2199d0: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x2199D0u;
    {
        const bool branch_taken_0x2199d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2199D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199D0u;
        // 0x2199d4: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2199d0) {
            ctx->pc = 0x219E34u;
            goto label_219e34;
        }
    }
    ctx->pc = 0x2199D8u;
label_2199d8:
    // 0x2199d8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2199D8u;
    SET_GPR_U32(ctx, 31, 0x2199E0u);
    ctx->pc = 0x2199DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199D8u;
    // 0x2199dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2199D8u, 0x2199E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199E0u;
label_2199e0:
    // 0x2199e0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2199e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2199e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2199e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2199e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2199e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2199ec: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2199ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2199f0: 0x8c651bc0  lw          $a1, 0x1BC0($v1)
    ctx->pc = 0x2199f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7104)));
    // 0x2199f4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2199f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2199f8: 0x8c661bc4  lw          $a2, 0x1BC4($v1)
    ctx->pc = 0x2199f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7108)));
    // 0x2199fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2199fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a00: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x219a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x219a04: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x219A04u;
    SET_GPR_U32(ctx, 31, 0x219A0Cu);
    ctx->pc = 0x219A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A04u;
    // 0x219a08: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x219A04u, 0x219A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A0Cu;
label_219a0c:
    // 0x219a0c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x219a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x219a10: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x219A10u;
    SET_GPR_U32(ctx, 31, 0x219A18u);
    ctx->pc = 0x219A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A10u;
    // 0x219a14: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x219A10u, 0x219A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A18u;
label_219a18:
    // 0x219a18: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x219a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x219a1c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x219a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x219a20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x219A20u;
    {
        const bool branch_taken_0x219a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A20u;
        // 0x219a24: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a20) {
            ctx->pc = 0x219A40u;
            goto label_219a40;
        }
    }
    ctx->pc = 0x219A28u;
    // 0x219a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x219a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219a2c: 0x24426ce0  addiu       $v0, $v0, 0x6CE0
    ctx->pc = 0x219a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27872));
    // 0x219a30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x219a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219a34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x219a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219a38: 0x800008  jr          $a0
    ctx->pc = 0x219A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219A40u: goto label_219a40;
            case 0x219A48u: goto label_219a48;
            case 0x219A50u: goto label_219a50;
            case 0x219A58u: goto label_219a58;
            case 0x219A60u: goto label_219a60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219A38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219A40u;
label_219a40:
    // 0x219a40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219A40u;
    {
        const bool branch_taken_0x219a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A40u;
        // 0x219a44: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a40) {
            ctx->pc = 0x219A64u;
            goto label_219a64;
        }
    }
    ctx->pc = 0x219A48u;
label_219a48:
    // 0x219a48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x219A48u;
    {
        const bool branch_taken_0x219a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A48u;
        // 0x219a4c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a48) {
            ctx->pc = 0x219A64u;
            goto label_219a64;
        }
    }
    ctx->pc = 0x219A50u;
label_219a50:
    // 0x219a50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x219A50u;
    {
        const bool branch_taken_0x219a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A50u;
        // 0x219a54: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a50) {
            ctx->pc = 0x219A64u;
            goto label_219a64;
        }
    }
    ctx->pc = 0x219A58u;
label_219a58:
    // 0x219a58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x219A58u;
    {
        const bool branch_taken_0x219a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A58u;
        // 0x219a5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a58) {
            ctx->pc = 0x219A64u;
            goto label_219a64;
        }
    }
    ctx->pc = 0x219A60u;
label_219a60:
    // 0x219a60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x219a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_219a64:
    // 0x219a64: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x219A64u;
    SET_GPR_U32(ctx, 31, 0x219A6Cu);
    ctx->pc = 0x219A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A64u;
    // 0x219a68: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x219A64u, 0x219A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A6Cu;
label_219a6c:
    // 0x219a6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x219a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x219a70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x219A70u;
    {
        const bool branch_taken_0x219a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A70u;
        // 0x219a74: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a70) {
            ctx->pc = 0x219A7Cu;
            goto label_219a7c;
        }
    }
    ctx->pc = 0x219A78u;
    // 0x219a78: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x219a78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_219a7c:
    // 0x219a7c: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x219a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219a80: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x219a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x219a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a88: 0x0  nop
    ctx->pc = 0x219a88u;
    // NOP
    // 0x219a8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219a8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219a90: 0x0  nop
    ctx->pc = 0x219a90u;
    // NOP
    // 0x219a94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x219A94u;
    {
        const bool branch_taken_0x219a94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A94u;
        // 0x219a98: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a94) {
            ctx->pc = 0x219AA0u;
            goto label_219aa0;
        }
    }
    ctx->pc = 0x219A9Cu;
    // 0x219a9c: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x219a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_219aa0:
    // 0x219aa0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x219aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x219aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219aa8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x219aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_219aac:
    // 0x219aac: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x219aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x219ab0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219ab4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219ab8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x219ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x219abc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x219abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x219ac0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x219AC0u;
    SET_GPR_U32(ctx, 31, 0x219AC8u);
    ctx->pc = 0x219AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AC0u;
    // 0x219ac4: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x219AC0u, 0x219AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AC8u;
label_219ac8:
    // 0x219ac8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x219ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ad0: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x219ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x219ad4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x219ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x219ad8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219adc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x219adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x219ae0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x219AE0u;
    SET_GPR_U32(ctx, 31, 0x219AE8u);
    ctx->pc = 0x219AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AE0u;
    // 0x219ae4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x219AE0u, 0x219AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AE8u;
label_219ae8:
    // 0x219ae8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x219AE8u;
    SET_GPR_U32(ctx, 31, 0x219AF0u);
    ctx->pc = 0x219AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AE8u;
    // 0x219aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x219AE8u, 0x219AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AF0u;
label_219af0:
    // 0x219af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219af4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x219AF4u;
    SET_GPR_U32(ctx, 31, 0x219AFCu);
    ctx->pc = 0x219AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AF4u;
    // 0x219af8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x219AF4u, 0x219AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AFCu;
label_219afc:
    // 0x219afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b00: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x219B00u;
    SET_GPR_U32(ctx, 31, 0x219B08u);
    ctx->pc = 0x219B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B00u;
    // 0x219b04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x219B00u, 0x219B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B08u;
label_219b08:
    // 0x219b08: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x219b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219b0c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x219b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x219b10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x219b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x219b14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x219b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219b18: 0xc620024c  lwc1        $f0, 0x24C($s1)
    ctx->pc = 0x219b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219b1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x219b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x219b20: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x219b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x219b24: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x219b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x219b28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x219b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x219b2c: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x219b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x219b30: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x219b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219b34: 0x0  nop
    ctx->pc = 0x219b34u;
    // NOP
    // 0x219b38: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x219B38u;
    {
        const bool branch_taken_0x219b38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B38u;
        // 0x219b3c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b38) {
            ctx->pc = 0x219B54u;
            goto label_219b54;
        }
    }
    ctx->pc = 0x219B40u;
    // 0x219b40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x219b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x219b44: 0xe634024c  swc1        $f20, 0x24C($s1)
    ctx->pc = 0x219b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x219b48: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x219b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x219b4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x219b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219b50: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x219b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_219b54:
    // 0x219b54: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x219b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x219b58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x219b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x219b5c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x219b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x219b60: 0x1c6000b3  bgtz        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x219B60u;
    {
        const bool branch_taken_0x219b60 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x219B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B60u;
        // 0x219b64: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b60) {
            ctx->pc = 0x219E30u;
            goto label_219e30;
        }
    }
    ctx->pc = 0x219B68u;
    // 0x219b68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219b6c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x219B6Cu;
    {
        const bool branch_taken_0x219b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B6Cu;
        // 0x219b70: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b6c) {
            ctx->pc = 0x219E30u;
            goto label_219e30;
        }
    }
    ctx->pc = 0x219B74u;
label_219b74:
    // 0x219b74: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x219b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x219b78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x219b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x219b7c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x219b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x219b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b84: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x219b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x219b88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x219b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x219b8c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x219B8Cu;
    SET_GPR_U32(ctx, 31, 0x219B94u);
    ctx->pc = 0x219B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B8Cu;
    // 0x219b90: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x219B8Cu, 0x219B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B94u;
label_219b94:
    // 0x219b94: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x219b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x219b98: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x219b98u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x219b9c: 0x2463fdfe  addiu       $v1, $v1, -0x202
    ctx->pc = 0x219b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966782));
    // 0x219ba0: 0x2c62007d  sltiu       $v0, $v1, 0x7D
    ctx->pc = 0x219ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x219ba4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x219BA4u;
    {
        const bool branch_taken_0x219ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BA4u;
        // 0x219ba8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ba4) {
            ctx->pc = 0x219BC4u;
            goto label_219bc4;
        }
    }
    ctx->pc = 0x219BACu;
    // 0x219bac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x219bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219bb0: 0x24426d00  addiu       $v0, $v0, 0x6D00
    ctx->pc = 0x219bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27904));
    // 0x219bb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x219bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219bb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x219bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219bbc: 0x800008  jr          $a0
    ctx->pc = 0x219BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219BC4u: goto label_219bc4;
            case 0x219BD4u: goto label_219bd4;
            case 0x219BE4u: goto label_219be4;
            case 0x219BF4u: goto label_219bf4;
            case 0x219C04u: goto label_219c04;
            case 0x219C14u: goto label_219c14;
            case 0x219C24u: goto label_219c24;
            case 0x219C34u: goto label_219c34;
            case 0x219C44u: goto label_219c44;
            case 0x219C54u: goto label_219c54;
            case 0x219C64u: goto label_219c64;
            case 0x219C74u: goto label_219c74;
            case 0x219C84u: goto label_219c84;
            case 0x219C94u: goto label_219c94;
            case 0x219CA4u: goto label_219ca4;
            case 0x219CB4u: goto label_219cb4;
            case 0x219CC4u: goto label_219cc4;
            case 0x219CF4u: goto label_219cf4;
            case 0x219D04u: goto label_219d04;
            case 0x219D14u: goto label_219d14;
            case 0x219D24u: goto label_219d24;
            case 0x219D34u: goto label_219d34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219BBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219BC4u;
label_219bc4:
    // 0x219bc4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219bc8: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x219bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x219bcc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x219BCCu;
    {
        const bool branch_taken_0x219bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BCCu;
        // 0x219bd0: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bcc) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219BD4u;
label_219bd4:
    // 0x219bd4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219bd8: 0x8c430648  lw          $v1, 0x648($v0)
    ctx->pc = 0x219bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1608)));
    // 0x219bdc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x219BDCu;
    {
        const bool branch_taken_0x219bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BDCu;
        // 0x219be0: 0x8c44064c  lw          $a0, 0x64C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bdc) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219BE4u;
label_219be4:
    // 0x219be4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219be8: 0x8c4335cc  lw          $v1, 0x35CC($v0)
    ctx->pc = 0x219be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13772)));
    // 0x219bec: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x219BECu;
    {
        const bool branch_taken_0x219bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BECu;
        // 0x219bf0: 0x8c4435d0  lw          $a0, 0x35D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bec) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219BF4u;
label_219bf4:
    // 0x219bf4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219bf8: 0x8c4325ac  lw          $v1, 0x25AC($v0)
    ctx->pc = 0x219bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9644)));
    // 0x219bfc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x219BFCu;
    {
        const bool branch_taken_0x219bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BFCu;
        // 0x219c00: 0x8c4425b0  lw          $a0, 0x25B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bfc) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C04u;
label_219c04:
    // 0x219c04: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c08: 0x8c4310a8  lw          $v1, 0x10A8($v0)
    ctx->pc = 0x219c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x219c0c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x219C0Cu;
    {
        const bool branch_taken_0x219c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C0Cu;
        // 0x219c10: 0x8c4410ac  lw          $a0, 0x10AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c0c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C14u;
label_219c14:
    // 0x219c14: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c18: 0x8c433c88  lw          $v1, 0x3C88($v0)
    ctx->pc = 0x219c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15496)));
    // 0x219c1c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x219C1Cu;
    {
        const bool branch_taken_0x219c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C1Cu;
        // 0x219c20: 0x8c443c8c  lw          $a0, 0x3C8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c1c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C24u;
label_219c24:
    // 0x219c24: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c28: 0x8c4324ec  lw          $v1, 0x24EC($v0)
    ctx->pc = 0x219c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9452)));
    // 0x219c2c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x219C2Cu;
    {
        const bool branch_taken_0x219c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C2Cu;
        // 0x219c30: 0x8c4424f0  lw          $a0, 0x24F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c2c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C34u;
label_219c34:
    // 0x219c34: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c38: 0x8c430828  lw          $v1, 0x828($v0)
    ctx->pc = 0x219c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2088)));
    // 0x219c3c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x219C3Cu;
    {
        const bool branch_taken_0x219c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C3Cu;
        // 0x219c40: 0x8c44082c  lw          $a0, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c3c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C44u;
label_219c44:
    // 0x219c44: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c48: 0x8c431fb0  lw          $v1, 0x1FB0($v0)
    ctx->pc = 0x219c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
    // 0x219c4c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x219C4Cu;
    {
        const bool branch_taken_0x219c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C4Cu;
        // 0x219c50: 0x8c441fb4  lw          $a0, 0x1FB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c4c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C54u;
label_219c54:
    // 0x219c54: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c58: 0x8c431eac  lw          $v1, 0x1EAC($v0)
    ctx->pc = 0x219c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x219c5c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x219C5Cu;
    {
        const bool branch_taken_0x219c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C5Cu;
        // 0x219c60: 0x8c441eb0  lw          $a0, 0x1EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c5c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C64u;
label_219c64:
    // 0x219c64: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c68: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x219c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x219c6c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x219C6Cu;
    {
        const bool branch_taken_0x219c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C6Cu;
        // 0x219c70: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c6c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C74u;
label_219c74:
    // 0x219c74: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c78: 0x8c433a00  lw          $v1, 0x3A00($v0)
    ctx->pc = 0x219c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14848)));
    // 0x219c7c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x219C7Cu;
    {
        const bool branch_taken_0x219c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C7Cu;
        // 0x219c80: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c7c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C84u;
label_219c84:
    // 0x219c84: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c88: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x219c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x219c8c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x219C8Cu;
    {
        const bool branch_taken_0x219c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C8Cu;
        // 0x219c90: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c8c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219C94u;
label_219c94:
    // 0x219c94: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219c98: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x219c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x219c9c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x219C9Cu;
    {
        const bool branch_taken_0x219c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C9Cu;
        // 0x219ca0: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c9c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219CA4u;
label_219ca4:
    // 0x219ca4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219ca8: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x219ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x219cac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x219CACu;
    {
        const bool branch_taken_0x219cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CACu;
        // 0x219cb0: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cac) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219CB4u;
label_219cb4:
    // 0x219cb4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219cb8: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x219cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x219cbc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x219CBCu;
    {
        const bool branch_taken_0x219cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CBCu;
        // 0x219cc0: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cbc) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219CC4u;
label_219cc4:
    // 0x219cc4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219cc8: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x219cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x219ccc: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x219cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x219cd0: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x219cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
    // 0x219cd4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x219cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219cd8: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x219CD8u;
    {
        const bool branch_taken_0x219cd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CD8u;
        // 0x219cdc: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cd8) {
            ctx->pc = 0x219D48u;
            goto label_219d48;
        }
    }
    ctx->pc = 0x219CE0u;
    // 0x219ce0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x219ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ce4: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x219CE4u;
    SET_GPR_U32(ctx, 31, 0x219CECu);
    ctx->pc = 0x219CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219CE4u;
    // 0x219ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x219CE4u, 0x219CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CECu;
label_219cec:
    // 0x219cec: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x219CECu;
    {
        const bool branch_taken_0x219cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CECu;
        // 0x219cf0: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cec) {
            ctx->pc = 0x219D4Cu;
            goto label_219d4c;
        }
    }
    ctx->pc = 0x219CF4u;
label_219cf4:
    // 0x219cf4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219cf8: 0x8c430cf8  lw          $v1, 0xCF8($v0)
    ctx->pc = 0x219cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
    // 0x219cfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x219CFCu;
    {
        const bool branch_taken_0x219cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CFCu;
        // 0x219d00: 0x8c440cfc  lw          $a0, 0xCFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cfc) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219D04u;
label_219d04:
    // 0x219d04: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219d08: 0x8c43244c  lw          $v1, 0x244C($v0)
    ctx->pc = 0x219d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9292)));
    // 0x219d0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x219D0Cu;
    {
        const bool branch_taken_0x219d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D0Cu;
        // 0x219d10: 0x8c442450  lw          $a0, 0x2450($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d0c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219D14u;
label_219d14:
    // 0x219d14: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219d18: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x219d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x219d1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219D1Cu;
    {
        const bool branch_taken_0x219d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D1Cu;
        // 0x219d20: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d1c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219D24u;
label_219d24:
    // 0x219d24: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219d28: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x219d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x219d2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x219D2Cu;
    {
        const bool branch_taken_0x219d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D2Cu;
        // 0x219d30: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d2c) {
            ctx->pc = 0x219D40u;
            goto label_219d40;
        }
    }
    ctx->pc = 0x219D34u;
label_219d34:
    // 0x219d34: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219d38: 0x8c432274  lw          $v1, 0x2274($v0)
    ctx->pc = 0x219d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8820)));
    // 0x219d3c: 0x8c442278  lw          $a0, 0x2278($v0)
    ctx->pc = 0x219d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8824)));
label_219d40:
    // 0x219d40: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x219d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219d44: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x219d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_219d48:
    // 0x219d48: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x219d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_219d4c:
    // 0x219d4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219D4Cu;
    {
        const bool branch_taken_0x219d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219d4c) {
            ctx->pc = 0x219D68u;
            goto label_219d68;
        }
    }
    ctx->pc = 0x219D54u;
    // 0x219d54: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x219d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x219d58: 0x8c43044c  lw          $v1, 0x44C($v0)
    ctx->pc = 0x219d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1100)));
    // 0x219d5c: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x219d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x219d60: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x219d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219d64: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x219d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_219d68:
    // 0x219d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x219d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219d6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x219d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x219d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d74: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x219d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d7c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x219d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x219d80: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x219D80u;
    SET_GPR_U32(ctx, 31, 0x219D88u);
    ctx->pc = 0x219D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D80u;
    // 0x219d84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x219D80u, 0x219D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D88u;
label_219d88:
    // 0x219d88: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x219d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x219d8c: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x219d90: 0xa6230568  sh          $v1, 0x568($s1)
    ctx->pc = 0x219d90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x219d94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219d98: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x219d98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_219d9c:
    // 0x219d9c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x219D9Cu;
    SET_GPR_U32(ctx, 31, 0x219DA4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x219D9Cu, 0x219DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DA4u;
label_219da4:
    // 0x219da4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219da8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x219da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x219dac: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x219dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219db4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x219db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x219db8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x219db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x219dbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219dc0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x219dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x219dc4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x219DC4u;
    SET_GPR_U32(ctx, 31, 0x219DCCu);
    ctx->pc = 0x219DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DC4u;
    // 0x219dc8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x219DC4u, 0x219DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DCCu;
label_219dcc:
    // 0x219dcc: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x219dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x219dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219dd4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x219dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x219dd8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x219DD8u;
    SET_GPR_U32(ctx, 31, 0x219DE0u);
    ctx->pc = 0x219DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DD8u;
    // 0x219ddc: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x219DD8u, 0x219DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DE0u;
label_219de0:
    // 0x219de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219de4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x219DE4u;
    SET_GPR_U32(ctx, 31, 0x219DECu);
    ctx->pc = 0x219DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DE4u;
    // 0x219de8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x219DE4u, 0x219DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DECu;
label_219dec:
    // 0x219dec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x219decu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x219df0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x219DF0u;
    SET_GPR_U32(ctx, 31, 0x219DF8u);
    ctx->pc = 0x219DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DF0u;
    // 0x219df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x219DF0u, 0x219DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DF8u;
label_219df8:
    // 0x219df8: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x219df8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x219dfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x219dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x219e00: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x219e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x219e04: 0x4600046  bltz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x219E04u;
    {
        const bool branch_taken_0x219e04 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e04) {
            ctx->pc = 0x219F20u;
            goto label_219f20;
        }
    }
    ctx->pc = 0x219E0Cu;
    // 0x219e0c: 0xc62116c0  lwc1        $f1, 0x16C0($s1)
    ctx->pc = 0x219e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219e10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x219e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219e14: 0x0  nop
    ctx->pc = 0x219e14u;
    // NOP
    // 0x219e18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x219e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219e1c: 0x0  nop
    ctx->pc = 0x219e1cu;
    // NOP
    // 0x219e20: 0x450300f4  bc1tl       . + 4 + (0xF4 << 2)
    ctx->pc = 0x219E20u;
    {
        const bool branch_taken_0x219e20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219e20) {
            ctx->pc = 0x219E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219E20u;
            // 0x219e24: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A1F4u;
            goto label_21a1f4;
        }
    }
    ctx->pc = 0x219E28u;
    // 0x219e28: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x219E28u;
    {
        const bool branch_taken_0x219e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E28u;
        // 0x219e2c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e28) {
            ctx->pc = 0x21A1F8u;
            goto label_21a1f8;
        }
    }
    ctx->pc = 0x219E30u;
label_219e30:
    // 0x219e30: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x219e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_219e34:
    // 0x219e34: 0x262416b0  addiu       $a0, $s1, 0x16B0
    ctx->pc = 0x219e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5808));
    // 0x219e38: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x219E38u;
    SET_GPR_U32(ctx, 31, 0x219E40u);
    ctx->pc = 0x219E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E38u;
    // 0x219e3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x219E38u, 0x219E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E40u;
label_219e40:
    // 0x219e40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219e44: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x219e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x219e48: 0x0  nop
    ctx->pc = 0x219e48u;
    // NOP
    // 0x219e4c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x219e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219e50: 0x0  nop
    ctx->pc = 0x219e50u;
    // NOP
    // 0x219e54: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x219E54u;
    {
        const bool branch_taken_0x219e54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219e54) {
            ctx->pc = 0x219E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219E54u;
            // 0x219e58: 0xc62016c0  lwc1        $f0, 0x16C0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E98u;
            goto label_219e98;
        }
    }
    ctx->pc = 0x219E5Cu;
    // 0x219e5c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x219e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x219e60: 0xc62216b4  lwc1        $f2, 0x16B4($s1)
    ctx->pc = 0x219e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219e64: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x219e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219e68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x219e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219e6c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x219e6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x219e70: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x219e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219e74: 0x0  nop
    ctx->pc = 0x219e74u;
    // NOP
    // 0x219e78: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x219E78u;
    {
        const bool branch_taken_0x219e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E78u;
        // 0x219e7c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e78) {
            ctx->pc = 0x219E84u;
            goto label_219e84;
        }
    }
    ctx->pc = 0x219E80u;
    // 0x219e80: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x219e80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_219e84:
    // 0x219e84: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x219e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219e88: 0x0  nop
    ctx->pc = 0x219e88u;
    // NOP
    // 0x219e8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x219E8Cu;
    {
        const bool branch_taken_0x219e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219e8c) {
            ctx->pc = 0x219E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219E8Cu;
            // 0x219e90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E94u;
            goto label_219e94;
        }
    }
    ctx->pc = 0x219E94u;
label_219e94:
    // 0x219e94: 0xc62016c0  lwc1        $f0, 0x16C0($s1)
    ctx->pc = 0x219e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219e98:
    // 0x219e98: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x219e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x219e9c: 0x0  nop
    ctx->pc = 0x219e9cu;
    // NOP
    // 0x219ea0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x219ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219ea4: 0x0  nop
    ctx->pc = 0x219ea4u;
    // NOP
    // 0x219ea8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x219EA8u;
    {
        const bool branch_taken_0x219ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219ea8) {
            ctx->pc = 0x219EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219EA8u;
            // 0x219eac: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219EB0u;
            goto label_219eb0;
        }
    }
    ctx->pc = 0x219EB0u;
label_219eb0:
    // 0x219eb0: 0x12000086  beqz        $s0, . + 4 + (0x86 << 2)
    ctx->pc = 0x219EB0u;
    {
        const bool branch_taken_0x219eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EB0u;
        // 0x219eb4: 0x8e2316c4  lw          $v1, 0x16C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219eb0) {
            ctx->pc = 0x21A0CCu;
            goto label_21a0cc;
        }
    }
    ctx->pc = 0x219EB8u;
    // 0x219eb8: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x219eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x219ebc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x219EBCu;
    {
        const bool branch_taken_0x219ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EBCu;
        // 0x219ec0: 0xe63416c0  swc1        $f20, 0x16C0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ebc) {
            ctx->pc = 0x219F20u;
            goto label_219f20;
        }
    }
    ctx->pc = 0x219EC4u;
    // 0x219ec4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x219ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x219ec8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x219ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219ecc: 0x24426f00  addiu       $v0, $v0, 0x6F00
    ctx->pc = 0x219eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28416));
    // 0x219ed0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x219ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219ed4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x219ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219ed8: 0x800008  jr          $a0
    ctx->pc = 0x219ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219EE0u: goto label_219ee0;
            case 0x219F04u: goto label_219f04;
            case 0x219F20u: goto label_219f20;
            case 0x219F3Cu: goto label_219f3c;
            case 0x219F60u: goto label_219f60;
            case 0x219FA4u: goto label_219fa4;
            case 0x219FF0u: goto label_219ff0;
            case 0x21A014u: goto label_21a014;
            case 0x21A070u: goto label_21a070;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219ED8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219EE0u;
label_219ee0:
    // 0x219ee0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x219ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x219ee4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x219ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x219ee8: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x219ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x219eec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x219ef0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x219ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x219ef4: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x219ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x219ef8: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x219ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x219efc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x219EFCu;
    {
        const bool branch_taken_0x219efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EFCu;
        // 0x219f00: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219efc) {
            ctx->pc = 0x21A0C0u;
            goto label_21a0c0;
        }
    }
    ctx->pc = 0x219F04u;
label_219f04:
    // 0x219f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219f08: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219F08u;
    {
        const bool branch_taken_0x219f08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x219f08) {
            ctx->pc = 0x219F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219F08u;
            // 0x219f0c: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219F24u;
            goto label_219f24;
        }
    }
    ctx->pc = 0x219F10u;
    // 0x219f10: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x219f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x219f14: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x219f14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x219f18: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x219F18u;
    {
        const bool branch_taken_0x219f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F18u;
        // 0x219f1c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f18) {
            ctx->pc = 0x21A0C0u;
            goto label_21a0c0;
        }
    }
    ctx->pc = 0x219F20u;
label_219f20:
    // 0x219f20: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x219f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_219f24:
    // 0x219f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f28: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x219f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x219f2c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x219F2Cu;
    SET_GPR_U32(ctx, 31, 0x219F34u);
    ctx->pc = 0x219F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F2Cu;
    // 0x219f30: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x219F2Cu, 0x219F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F34u;
label_219f34:
    // 0x219f34: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x219F34u;
    {
        const bool branch_taken_0x219f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F34u;
        // 0x219f38: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f34) {
            ctx->pc = 0x21A1F8u;
            goto label_21a1f8;
        }
    }
    ctx->pc = 0x219F3Cu;
label_219f3c:
    // 0x219f3c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x219f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x219f40: 0x2402020a  addiu       $v0, $zero, 0x20A
    ctx->pc = 0x219f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    // 0x219f44: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219F44u;
    {
        const bool branch_taken_0x219f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x219F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F44u;
        // 0x219f48: 0x24020245  addiu       $v0, $zero, 0x245 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f44) {
            ctx->pc = 0x219F54u;
            goto label_219f54;
        }
    }
    ctx->pc = 0x219F4Cu;
    // 0x219f4c: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x219F4Cu;
    {
        const bool branch_taken_0x219f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219f4c) {
            ctx->pc = 0x219F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219F4Cu;
            // 0x219f50: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219FA8u;
            goto label_219fa8;
        }
    }
    ctx->pc = 0x219F54u;
label_219f54:
    // 0x219f54: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x219f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x219f58: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x219F58u;
    {
        const bool branch_taken_0x219f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F58u;
        // 0x219f5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f58) {
            ctx->pc = 0x21A0B8u;
            goto label_21a0b8;
        }
    }
    ctx->pc = 0x219F60u;
label_219f60:
    // 0x219f60: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x219f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x219f64: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x219f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x219f68: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x219F68u;
    {
        const bool branch_taken_0x219f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f68) {
            ctx->pc = 0x219FC4u;
            goto label_219fc4;
        }
    }
    ctx->pc = 0x219F70u;
    // 0x219f70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x219F70u;
    {
        const bool branch_taken_0x219f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F70u;
        // 0x219f74: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f70) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F78u;
    // 0x219f78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x219F78u;
    {
        const bool branch_taken_0x219f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F78u;
        // 0x219f7c: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f78) {
            ctx->pc = 0x219FA4u;
            goto label_219fa4;
        }
    }
    ctx->pc = 0x219F80u;
    // 0x219f80: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x219F80u;
    {
        const bool branch_taken_0x219f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219f80) {
            ctx->pc = 0x219F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219F80u;
            // 0x219f84: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219FA8u;
            goto label_219fa8;
        }
    }
    ctx->pc = 0x219F88u;
    // 0x219f88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x219F88u;
    {
        const bool branch_taken_0x219f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F88u;
        // 0x219f8c: 0x8e2316d0  lw          $v1, 0x16D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f88) {
            ctx->pc = 0x219FC8u;
            goto label_219fc8;
        }
    }
    ctx->pc = 0x219F90u;
label_219f90:
    // 0x219f90: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x219f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x219f94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219F94u;
    {
        const bool branch_taken_0x219f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F94u;
        // 0x219f98: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f94) {
            ctx->pc = 0x219FA4u;
            goto label_219fa4;
        }
    }
    ctx->pc = 0x219F9Cu;
    // 0x219f9c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x219F9Cu;
    {
        const bool branch_taken_0x219f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219f9c) {
            ctx->pc = 0x219FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219F9Cu;
            // 0x219fa0: 0x8e2316d0  lw          $v1, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219FC8u;
            goto label_219fc8;
        }
    }
    ctx->pc = 0x219FA4u;
label_219fa4:
    // 0x219fa4: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x219fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_219fa8:
    // 0x219fa8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x219fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x219fac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x219facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x219fb0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x219fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x219fb4: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x219fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x219fb8: 0xa22402f6  sb          $a0, 0x2F6($s1)
    ctx->pc = 0x219fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 4));
    // 0x219fbc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x219FBCu;
    {
        const bool branch_taken_0x219fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FBCu;
        // 0x219fc0: 0xa22002f4  sb          $zero, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fbc) {
            ctx->pc = 0x21A1F4u;
            goto label_21a1f4;
        }
    }
    ctx->pc = 0x219FC4u;
label_219fc4:
    // 0x219fc4: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x219fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_219fc8:
    // 0x219fc8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x219fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x219fcc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x219fd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x219fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219fd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x219fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219fd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x219fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219fdc: 0xae2316d0  sw          $v1, 0x16D0($s1)
    ctx->pc = 0x219fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 3));
    // 0x219fe0: 0xa2251650  sb          $a1, 0x1650($s1)
    ctx->pc = 0x219fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5712), (uint8_t)GPR_U32(ctx, 5));
    // 0x219fe4: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x219fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x219fe8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x219FE8u;
    {
        const bool branch_taken_0x219fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FE8u;
        // 0x219fec: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fe8) {
            ctx->pc = 0x21A0C0u;
            goto label_21a0c0;
        }
    }
    ctx->pc = 0x219FF0u;
label_219ff0:
    // 0x219ff0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x219ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x219ff4: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x219ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x219ff8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x219ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x219ffc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x219ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21a000: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21a004: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x21a004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x21a008: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x21a008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x21a00c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x21A00Cu;
    {
        const bool branch_taken_0x21a00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A00Cu;
        // 0x21a010: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a00c) {
            ctx->pc = 0x21A0C0u;
            goto label_21a0c0;
        }
    }
    ctx->pc = 0x21A014u;
label_21a014:
    // 0x21a014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a018: 0x16020022  bne         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21A018u;
    {
        const bool branch_taken_0x21a018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A018u;
        // 0x21a01c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a018) {
            ctx->pc = 0x21A0A4u;
            goto label_21a0a4;
        }
    }
    ctx->pc = 0x21A020u;
    // 0x21a020: 0x922517b1  lbu         $a1, 0x17B1($s1)
    ctx->pc = 0x21a020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6065)));
    // 0x21a024: 0xc0a5232  jal         func_2948C8
    ctx->pc = 0x21A024u;
    SET_GPR_U32(ctx, 31, 0x21A02Cu);
    ctx->pc = 0x21A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A024u;
    // 0x21a028: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948C8u, 0x21A024u, 0x21A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A02Cu;
label_21a02c:
    // 0x21a02c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a030: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21A030u;
    {
        const bool branch_taken_0x21a030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a030) {
            ctx->pc = 0x21A0A4u;
            goto label_21a0a4;
        }
    }
    ctx->pc = 0x21A038u;
    // 0x21a038: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x21a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x21a03c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21A03Cu;
    {
        const bool branch_taken_0x21a03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a03c) {
            ctx->pc = 0x21A0A4u;
            goto label_21a0a4;
        }
    }
    ctx->pc = 0x21A044u;
    // 0x21a044: 0xc06e190  jal         func_1B8640
    ctx->pc = 0x21A044u;
    SET_GPR_U32(ctx, 31, 0x21A04Cu);
    ctx->pc = 0x1B8640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8640u, 0x21A044u, 0x21A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A04Cu;
label_21a04c:
    // 0x21a04c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21A04Cu;
    {
        const bool branch_taken_0x21a04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A04Cu;
        // 0x21a050: 0x240403b7  addiu       $a0, $zero, 0x3B7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a04c) {
            ctx->pc = 0x21A0A4u;
            goto label_21a0a4;
        }
    }
    ctx->pc = 0x21A054u;
    // 0x21a054: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x21a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x21a058: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x21a058u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x21a05c: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21A05Cu;
    {
        const bool branch_taken_0x21a05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x21A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A05Cu;
        // 0x21a060: 0x24020085  addiu       $v0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a05c) {
            ctx->pc = 0x21A0A4u;
            goto label_21a0a4;
        }
    }
    ctx->pc = 0x21A064u;
    // 0x21a064: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x21a064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a068: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21A068u;
    {
        const bool branch_taken_0x21a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A068u;
        // 0x21a06c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a068) {
            ctx->pc = 0x21A0C0u;
            goto label_21a0c0;
        }
    }
    ctx->pc = 0x21A070u;
label_21a070:
    // 0x21a070: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x21a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x21a074: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x21a074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x21a078: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21a078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21a07c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x21a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x21a080: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21a084: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x21a084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x21a088: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x21a088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x21a08c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21a08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21a090: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x21a094: 0xc0a4b72  jal         func_292DC8
    ctx->pc = 0x21A094u;
    SET_GPR_U32(ctx, 31, 0x21A09Cu);
    ctx->pc = 0x21A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A094u;
    // 0x21a098: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292DC8u, 0x21A094u, 0x21A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A09Cu;
label_21a09c:
    // 0x21a09c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A09Cu;
    {
        const bool branch_taken_0x21a09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A09Cu;
        // 0x21a0a0: 0x24030071  addiu       $v1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a09c) {
            ctx->pc = 0x21A0B4u;
            goto label_21a0b4;
        }
    }
    ctx->pc = 0x21A0A4u;
label_21a0a4:
    // 0x21a0a4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x21A0A4u;
    SET_GPR_U32(ctx, 31, 0x21A0ACu);
    ctx->pc = 0x21A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0A4u;
    // 0x21a0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x21A0A4u, 0x21A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A0ACu;
label_21a0ac:
    // 0x21a0ac: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x21A0ACu;
    {
        const bool branch_taken_0x21a0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0ACu;
        // 0x21a0b0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0ac) {
            ctx->pc = 0x21A1F8u;
            goto label_21a1f8;
        }
    }
    ctx->pc = 0x21A0B4u;
label_21a0b4:
    // 0x21a0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a0b8:
    // 0x21a0b8: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x21a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x21a0bc: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x21a0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_21a0c0:
    // 0x21a0c0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x21a0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a0c4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x21A0C4u;
    {
        const bool branch_taken_0x21a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0C4u;
        // 0x21a0c8: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0c4) {
            ctx->pc = 0x21A1F4u;
            goto label_21a1f4;
        }
    }
    ctx->pc = 0x21A0CCu;
label_21a0cc:
    // 0x21a0cc: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x21a0ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x21a0d0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x21A0D0u;
    {
        const bool branch_taken_0x21a0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0D0u;
        // 0x21a0d4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0d0) {
            ctx->pc = 0x21A1DCu;
            goto label_21a1dc;
        }
    }
    ctx->pc = 0x21A0D8u;
    // 0x21a0d8: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x21A0D8u;
    {
        const bool branch_taken_0x21a0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a0d8) {
            ctx->pc = 0x21A1DCu;
            goto label_21a1dc;
        }
    }
    ctx->pc = 0x21A0E0u;
    // 0x21a0e0: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x21a0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a0e4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x21a0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x21a0e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21a0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a0ec: 0x0  nop
    ctx->pc = 0x21a0ecu;
    // NOP
    // 0x21a0f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21a0f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a0f4: 0x0  nop
    ctx->pc = 0x21a0f4u;
    // NOP
    // 0x21a0f8: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x21A0F8u;
    {
        const bool branch_taken_0x21a0f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0F8u;
        // 0x21a0fc: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0f8) {
            ctx->pc = 0x21A1DCu;
            goto label_21a1dc;
        }
    }
    ctx->pc = 0x21A100u;
    // 0x21a100: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x21a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x21a104: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x21a104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x21a108: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x21a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x21a10c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A10Cu;
    {
        const bool branch_taken_0x21a10c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a10c) {
            ctx->pc = 0x21A12Cu;
            goto label_21a12c;
        }
    }
    ctx->pc = 0x21A114u;
    // 0x21a114: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a118: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x21a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x21a11c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x21a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a120: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x21a120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x21a124: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21a124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a128: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x21a128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_21a12c:
    // 0x21a12c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x21A12Cu;
    SET_GPR_U32(ctx, 31, 0x21A134u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x21A12Cu, 0x21A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A134u;
label_21a134:
    // 0x21a134: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x21a134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x21a138: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x21a138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21a13c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A13Cu;
    {
        const bool branch_taken_0x21a13c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A13Cu;
        // 0x21a140: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a13c) {
            ctx->pc = 0x21A160u;
            goto label_21a160;
        }
    }
    ctx->pc = 0x21A144u;
    // 0x21a144: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21a144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a148: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x21a148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21a14c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x21a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a150: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x21a150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21a154: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a158: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x21a158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21a15c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x21a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a160:
    // 0x21a160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a164: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21a164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21a168: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21a168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21a16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a170: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x21a170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a178: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21a178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21a17c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x21a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x21a180: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x21a180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21a184: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21a184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21a188: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21a188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21a18c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a18cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a190: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x21a190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x21a194: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x21a194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21a198: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21a198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21a19c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a19cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1a0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x21a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x21a1a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21a1a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1a8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x21a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x21a1ac: 0xc04c784  jal         func_131E10
    ctx->pc = 0x21A1ACu;
    SET_GPR_U32(ctx, 31, 0x21A1B4u);
    ctx->pc = 0x21A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1ACu;
    // 0x21a1b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x21A1ACu, 0x21A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1B4u;
label_21a1b4:
    // 0x21a1b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A1B4u;
    {
        const bool branch_taken_0x21a1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1B4u;
        // 0x21a1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1b4) {
            ctx->pc = 0x21A1DCu;
            goto label_21a1dc;
        }
    }
    ctx->pc = 0x21A1BCu;
    // 0x21a1bc: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x21a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x21a1c0: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x21a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x21a1c4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x21a1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x21a1c8: 0xe63416c0  swc1        $f20, 0x16C0($s1)
    ctx->pc = 0x21a1c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5824), bits); }
    // 0x21a1cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21a1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21a1d0: 0xae2316d0  sw          $v1, 0x16D0($s1)
    ctx->pc = 0x21a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 3));
    // 0x21a1d4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x21A1D4u;
    SET_GPR_U32(ctx, 31, 0x21A1DCu);
    ctx->pc = 0x21A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1D4u;
    // 0x21a1d8: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x21A1D4u, 0x21A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1DCu;
label_21a1dc:
    // 0x21a1dc: 0xc092eda  jal         func_24BB68
    ctx->pc = 0x21A1DCu;
    SET_GPR_U32(ctx, 31, 0x21A1E4u);
    ctx->pc = 0x21A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1DCu;
    // 0x21a1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BB68u, 0x21A1DCu, 0x21A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1E4u;
label_21a1e4:
    // 0x21a1e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A1E4u;
    {
        const bool branch_taken_0x21a1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1E4u;
        // 0x21a1e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1e4) {
            ctx->pc = 0x21A1F8u;
            goto label_21a1f8;
        }
    }
    ctx->pc = 0x21A1ECu;
    // 0x21a1ec: 0xc092f68  jal         func_24BDA0
    ctx->pc = 0x21A1ECu;
    SET_GPR_U32(ctx, 31, 0x21A1F4u);
    ctx->pc = 0x21A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1ECu;
    // 0x21a1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BDA0u, 0x21A1ECu, 0x21A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1F4u;
label_21a1f4:
    // 0x21a1f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x21a1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21a1f8:
    // 0x21a1f8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x21a1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21a1fc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x21a1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21a200: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x21a200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a204: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21a204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a208: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x21a208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21a20c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A20Cu;
        // 0x21a210: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A214u;
    // 0x21a214: 0x0  nop
    ctx->pc = 0x21a214u;
    // NOP
    ctx->pc = 0x21a218u;
}
