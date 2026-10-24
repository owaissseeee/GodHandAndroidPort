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

// Function: func_0022CBC8
// Address: 0x22cbc8 - 0x22d938
void func_0022CBC8_0x22cbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022CBC8_0x22cbc8");
#endif

    switch (ctx->pc) {
        case 0x22cc64u: goto label_22cc64;
        case 0x22cce0u: goto label_22cce0;
        case 0x22ccf0u: goto label_22ccf0;
        case 0x22cd1cu: goto label_22cd1c;
        case 0x22cd60u: goto label_22cd60;
        case 0x22cd68u: goto label_22cd68;
        case 0x22cd74u: goto label_22cd74;
        case 0x22cd80u: goto label_22cd80;
        case 0x22cd8cu: goto label_22cd8c;
        case 0x22ce04u: goto label_22ce04;
        case 0x22ce1cu: goto label_22ce1c;
        case 0x22ce2cu: goto label_22ce2c;
        case 0x22ce6cu: goto label_22ce6c;
        case 0x22ce7cu: goto label_22ce7c;
        case 0x22ce88u: goto label_22ce88;
        case 0x22ce94u: goto label_22ce94;
        case 0x22cee0u: goto label_22cee0;
        case 0x22cf38u: goto label_22cf38;
        case 0x22cf48u: goto label_22cf48;
        case 0x22cf54u: goto label_22cf54;
        case 0x22cf60u: goto label_22cf60;
        case 0x22cf70u: goto label_22cf70;
        case 0x22cf78u: goto label_22cf78;
        case 0x22cfd4u: goto label_22cfd4;
        case 0x22cff4u: goto label_22cff4;
        case 0x22d038u: goto label_22d038;
        case 0x22d0ccu: goto label_22d0cc;
        case 0x22d18cu: goto label_22d18c;
        case 0x22d19cu: goto label_22d19c;
        case 0x22d1b0u: goto label_22d1b0;
        case 0x22d1bcu: goto label_22d1bc;
        case 0x22d204u: goto label_22d204;
        case 0x22d214u: goto label_22d214;
        case 0x22d24cu: goto label_22d24c;
        case 0x22d260u: goto label_22d260;
        case 0x22d28cu: goto label_22d28c;
        case 0x22d2e0u: goto label_22d2e0;
        case 0x22d2f8u: goto label_22d2f8;
        case 0x22d320u: goto label_22d320;
        case 0x22d32cu: goto label_22d32c;
        case 0x22d370u: goto label_22d370;
        case 0x22d3e8u: goto label_22d3e8;
        case 0x22d3f0u: goto label_22d3f0;
        case 0x22d3fcu: goto label_22d3fc;
        case 0x22d408u: goto label_22d408;
        case 0x22d458u: goto label_22d458;
        case 0x22d480u: goto label_22d480;
        case 0x22d488u: goto label_22d488;
        case 0x22d4ecu: goto label_22d4ec;
        case 0x22d4f4u: goto label_22d4f4;
        case 0x22d510u: goto label_22d510;
        case 0x22d520u: goto label_22d520;
        case 0x22d52cu: goto label_22d52c;
        case 0x22d54cu: goto label_22d54c;
        case 0x22d5e0u: goto label_22d5e0;
        case 0x22d6a0u: goto label_22d6a0;
        case 0x22d6c8u: goto label_22d6c8;
        case 0x22d6d4u: goto label_22d6d4;
        case 0x22d6fcu: goto label_22d6fc;
        case 0x22d704u: goto label_22d704;
        case 0x22d744u: goto label_22d744;
        case 0x22d76cu: goto label_22d76c;
        case 0x22d778u: goto label_22d778;
        case 0x22d784u: goto label_22d784;
        case 0x22d858u: goto label_22d858;
        case 0x22d860u: goto label_22d860;
        case 0x22d870u: goto label_22d870;
        case 0x22d8acu: goto label_22d8ac;
        case 0x22d8c0u: goto label_22d8c0;
        case 0x22d8d0u: goto label_22d8d0;
        case 0x22d8e4u: goto label_22d8e4;
        case 0x22d8f0u: goto label_22d8f0;
        case 0x22d910u: goto label_22d910;
        default: break;
    }

    ctx->pc = 0x22cbc8u;

    // 0x22cbc8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x22cbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x22cbcc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x22cbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x22cbd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22cbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbd4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x22cbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x22cbd8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x22cbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x22cbdc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x22cbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x22cbe0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x22cbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x22cbe4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22cbe8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x22cbe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x22cbec: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x22cbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22cbf0: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x22cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22cbf4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22cbf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbf8: 0x8e240564  lw          $a0, 0x564($s1)
    ctx->pc = 0x22cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22cbfc: 0x24030214  addiu       $v1, $zero, 0x214
    ctx->pc = 0x22cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x22cc00: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22cc04: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22CC04u;
    {
        const bool branch_taken_0x22cc04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC04u;
        // 0x22cc08: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc04) {
            ctx->pc = 0x22CC20u;
            goto label_22cc20;
        }
    }
    ctx->pc = 0x22CC0Cu;
    // 0x22cc0c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x22cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x22cc10: 0x244364f0  addiu       $v1, $v0, 0x64F0
    ctx->pc = 0x22cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x22cc14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22cc14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22CC18u;
    {
        const bool branch_taken_0x22cc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC18u;
        // 0x22cc1c: 0x8c720564  lw          $s2, 0x564($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc18) {
            ctx->pc = 0x22CC30u;
            goto label_22cc30;
        }
    }
    ctx->pc = 0x22CC20u;
label_22cc20:
    // 0x22cc20: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x22cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x22cc24: 0x244364f0  addiu       $v1, $v0, 0x64F0
    ctx->pc = 0x22cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x22cc28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22cc28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc2c: 0x8c720560  lw          $s2, 0x560($v1)
    ctx->pc = 0x22cc2cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x586A50u));
label_22cc30:
    // 0x22cc30: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x22CC30u;
    {
        const bool branch_taken_0x22cc30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc30) {
            ctx->pc = 0x22CC5Cu;
            goto label_22cc5c;
        }
    }
    ctx->pc = 0x22CC38u;
    // 0x22cc38: 0xde4202f0  ld          $v0, 0x2F0($s2)
    ctx->pc = 0x22cc38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 752)));
    // 0x22cc3c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x22cc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22cc40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x22cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x22cc44: 0x3404ec00  ori         $a0, $zero, 0xEC00
    ctx->pc = 0x22cc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60416);
    // 0x22cc48: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x22cc48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x22cc4c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22cc4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cc50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22cc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22cc54: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x22cc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x22cc58: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x22cc58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_22cc5c:
    // 0x22cc5c: 0xc098a84  jal         func_262A10
    ctx->pc = 0x22CC5Cu;
    SET_GPR_U32(ctx, 31, 0x22CC64u);
    ctx->pc = 0x22CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC5Cu;
    // 0x22cc60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x22CC5Cu, 0x22CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC64u;
label_22cc64:
    // 0x22cc64: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22cc64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22cc68: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x22cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22cc6c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CC6Cu;
    {
        const bool branch_taken_0x22cc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC6Cu;
        // 0x22cc70: 0x2c620012  sltiu       $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc6c) {
            ctx->pc = 0x22CC90u;
            goto label_22cc90;
        }
    }
    ctx->pc = 0x22CC74u;
    // 0x22cc74: 0x268264f0  addiu       $v0, $s4, 0x64F0
    ctx->pc = 0x22cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    // 0x22cc78: 0x904305a2  lbu         $v1, 0x5A2($v0)
    ctx->pc = 0x22cc78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1442)));
    // 0x22cc7c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22CC7Cu;
    {
        const bool branch_taken_0x22cc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC7Cu;
        // 0x22cc80: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc7c) {
            ctx->pc = 0x22CC88u;
            goto label_22cc88;
        }
    }
    ctx->pc = 0x22CC84u;
    // 0x22cc84: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22cc84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22cc88:
    // 0x22cc88: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22cc88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22cc8c: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x22cc8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_22cc90:
    // 0x22cc90: 0x10400317  beqz        $v0, . + 4 + (0x317 << 2)
    ctx->pc = 0x22CC90u;
    {
        const bool branch_taken_0x22cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC90u;
        // 0x22cc94: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc90) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22CC98u;
    // 0x22cc98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22cc9c: 0x24428cf0  addiu       $v0, $v0, -0x7310
    ctx->pc = 0x22cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
    // 0x22cca0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22cca4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22cca8: 0x800008  jr          $a0
    ctx->pc = 0x22CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22CCB0u: goto label_22ccb0;
            case 0x22CD34u: goto label_22cd34;
            case 0x22CDDCu: goto label_22cddc;
            case 0x22CE44u: goto label_22ce44;
            case 0x22CED4u: goto label_22ced4;
            case 0x22CF10u: goto label_22cf10;
            case 0x22CFA4u: goto label_22cfa4;
            case 0x22D0DCu: goto label_22d0dc;
            case 0x22D21Cu: goto label_22d21c;
            case 0x22D2F0u: goto label_22d2f0;
            case 0x22D344u: goto label_22d344;
            case 0x22D394u: goto label_22d394;
            case 0x22D4B0u: goto label_22d4b0;
            case 0x22D618u: goto label_22d618;
            case 0x22D714u: goto label_22d714;
            case 0x22D75Cu: goto label_22d75c;
            case 0x22D880u: goto label_22d880;
            case 0x22D8B8u: goto label_22d8b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CCA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22CCB0u;
label_22ccb0:
    // 0x22ccb0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22ccb4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22ccb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22ccb8: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x22ccb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ccbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22ccbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ccc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22ccc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ccc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22ccc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ccc8: 0x8c4510c0  lw          $a1, 0x10C0($v0)
    ctx->pc = 0x22ccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4288)));
    // 0x22cccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ccd0: 0x8c4610c8  lw          $a2, 0x10C8($v0)
    ctx->pc = 0x22ccd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4296)));
    // 0x22ccd4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22ccd8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22CCD8u;
    SET_GPR_U32(ctx, 31, 0x22CCE0u);
    ctx->pc = 0x22CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCD8u;
    // 0x22ccdc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22CCD8u, 0x22CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCE0u;
label_22cce0:
    // 0x22cce0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x22cce0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x22cce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cce8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x22CCE8u;
    SET_GPR_U32(ctx, 31, 0x22CCF0u);
    ctx->pc = 0x22CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCE8u;
    // 0x22ccec: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x22CCE8u, 0x22CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCF0u;
label_22ccf0:
    // 0x22ccf0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x22ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x22ccf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ccf8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22ccfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22ccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cd00: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x22cd00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x22cd04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22cd04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22cd08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22cd0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22cd10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd14: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x22CD14u;
    SET_GPR_U32(ctx, 31, 0x22CD1Cu);
    ctx->pc = 0x22CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD14u;
    // 0x22cd18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x22CD14u, 0x22CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD1Cu;
label_22cd1c:
    // 0x22cd1c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22cd1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22cd20: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x22cd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x22cd24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22cd24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22cd2c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22cd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22cd30: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x22cd30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_22cd34:
    // 0x22cd34: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22cd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cd38: 0x26300580  addiu       $s0, $s1, 0x580
    ctx->pc = 0x22cd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x22cd3c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22cd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22cd40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22cd40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22cd44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22cd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22cd48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22cd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22cd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22cd54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22cd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22cd58: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22CD58u;
    SET_GPR_U32(ctx, 31, 0x22CD60u);
    ctx->pc = 0x22CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD58u;
    // 0x22cd5c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22CD58u, 0x22CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD60u;
label_22cd60:
    // 0x22cd60: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22CD60u;
    SET_GPR_U32(ctx, 31, 0x22CD68u);
    ctx->pc = 0x22CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD60u;
    // 0x22cd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22CD60u, 0x22CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD68u;
label_22cd68:
    // 0x22cd68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd6c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22CD6Cu;
    SET_GPR_U32(ctx, 31, 0x22CD74u);
    ctx->pc = 0x22CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD6Cu;
    // 0x22cd70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22CD6Cu, 0x22CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD74u;
label_22cd74:
    // 0x22cd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd78: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22CD78u;
    SET_GPR_U32(ctx, 31, 0x22CD80u);
    ctx->pc = 0x22CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD78u;
    // 0x22cd7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22CD78u, 0x22CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD80u;
label_22cd80:
    // 0x22cd80: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x22cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22cd84: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x22CD84u;
    SET_GPR_U32(ctx, 31, 0x22CD8Cu);
    ctx->pc = 0x22CD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD84u;
    // 0x22cd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x22CD84u, 0x22CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD8Cu;
label_22cd8c:
    // 0x22cd8c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22cd8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cd90: 0x0  nop
    ctx->pc = 0x22cd90u;
    // NOP
    // 0x22cd94: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x22CD94u;
    {
        const bool branch_taken_0x22cd94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cd94) {
            ctx->pc = 0x22CD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CD94u;
            // 0x22cd98: 0xc6210600  lwc1        $f1, 0x600($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CDACu;
            goto label_22cdac;
        }
    }
    ctx->pc = 0x22CD9Cu;
    // 0x22cd9c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22cd9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22cda0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22cda4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22cda4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22cda8: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x22cda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22cdac:
    // 0x22cdac: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cdb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22cdb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22cdb4: 0x1240006c  beqz        $s2, . + 4 + (0x6C << 2)
    ctx->pc = 0x22CDB4u;
    {
        const bool branch_taken_0x22cdb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDB4u;
        // 0x22cdb8: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cdb4) {
            ctx->pc = 0x22CF68u;
            goto label_22cf68;
        }
    }
    ctx->pc = 0x22CDBCu;
    // 0x22cdbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cdbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cdc0: 0x0  nop
    ctx->pc = 0x22cdc0u;
    // NOP
    // 0x22cdc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22cdc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cdc8: 0x0  nop
    ctx->pc = 0x22cdc8u;
    // NOP
    // 0x22cdcc: 0x450202c9  bc1fl       . + 4 + (0x2C9 << 2)
    ctx->pc = 0x22CDCCu;
    {
        const bool branch_taken_0x22cdcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cdcc) {
            ctx->pc = 0x22CDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CDCCu;
            // 0x22cdd0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D8F4u;
            goto label_22d8f4;
        }
    }
    ctx->pc = 0x22CDD4u;
    // 0x22cdd4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x22CDD4u;
    {
        const bool branch_taken_0x22cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cdd4) {
            ctx->pc = 0x22CF68u;
            goto label_22cf68;
        }
    }
    ctx->pc = 0x22CDDCu;
label_22cddc:
    // 0x22cddc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22cde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cde4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22cde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22cde8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22cde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22cdec: 0x8c451a98  lw          $a1, 0x1A98($v0)
    ctx->pc = 0x22cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6808)));
    // 0x22cdf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22cdf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22cdf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdf8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22cdfc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22CDFCu;
    SET_GPR_U32(ctx, 31, 0x22CE04u);
    ctx->pc = 0x22CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDFCu;
    // 0x22ce00: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22CDFCu, 0x22CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE04u;
label_22ce04:
    // 0x22ce04: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22ce08: 0x24020214  addiu       $v0, $zero, 0x214
    ctx->pc = 0x22ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x22ce0c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22CE0Cu;
    {
        const bool branch_taken_0x22ce0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE0Cu;
        // 0x22ce10: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce0c) {
            ctx->pc = 0x22CE24u;
            goto label_22ce24;
        }
    }
    ctx->pc = 0x22CE14u;
    // 0x22ce14: 0xc0a4dc6  jal         func_293718
    ctx->pc = 0x22CE14u;
    SET_GPR_U32(ctx, 31, 0x22CE1Cu);
    ctx->pc = 0x22CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE14u;
    // 0x22ce18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293718u, 0x22CE14u, 0x22CE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE1Cu;
label_22ce1c:
    // 0x22ce1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22CE1Cu;
    {
        const bool branch_taken_0x22ce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE1Cu;
        // 0x22ce20: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce1c) {
            ctx->pc = 0x22CE30u;
            goto label_22ce30;
        }
    }
    ctx->pc = 0x22CE24u;
label_22ce24:
    // 0x22ce24: 0xc0a4dc6  jal         func_293718
    ctx->pc = 0x22CE24u;
    SET_GPR_U32(ctx, 31, 0x22CE2Cu);
    ctx->pc = 0x22CE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE24u;
    // 0x22ce28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293718u, 0x22CE24u, 0x22CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE2Cu;
label_22ce2c:
    // 0x22ce2c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22ce2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_22ce30:
    // 0x22ce30: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x22ce30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x22ce34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ce34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ce38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ce3c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22ce3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22ce40: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22ce40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22ce44:
    // 0x22ce44: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x22CE44u;
    {
        const bool branch_taken_0x22ce44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ce44) {
            ctx->pc = 0x22CE6Cu;
            goto label_22ce6c;
        }
    }
    ctx->pc = 0x22CE4Cu;
    // 0x22ce4c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ce50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ce50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce54: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22ce54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22ce58: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22ce58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22ce5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ce5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ce60: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x22ce60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22ce64: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22CE64u;
    SET_GPR_U32(ctx, 31, 0x22CE6Cu);
    ctx->pc = 0x22CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE64u;
    // 0x22ce68: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22CE64u, 0x22CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE6Cu;
label_22ce6c:
    // 0x22ce6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22ce6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22ce70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22ce70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22ce74: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22CE74u;
    SET_GPR_U32(ctx, 31, 0x22CE7Cu);
    ctx->pc = 0x22CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE74u;
    // 0x22ce78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22CE74u, 0x22CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE7Cu;
label_22ce7c:
    // 0x22ce7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce80: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22CE80u;
    SET_GPR_U32(ctx, 31, 0x22CE88u);
    ctx->pc = 0x22CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE80u;
    // 0x22ce84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22CE80u, 0x22CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE88u;
label_22ce88:
    // 0x22ce88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22ce88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22ce8c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22CE8Cu;
    SET_GPR_U32(ctx, 31, 0x22CE94u);
    ctx->pc = 0x22CE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE8Cu;
    // 0x22ce90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22CE8Cu, 0x22CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE94u;
label_22ce94:
    // 0x22ce94: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x22ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ce98: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ce9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22ce9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22cea0: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x22CEA0u;
    {
        const bool branch_taken_0x22cea0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEA0u;
        // 0x22cea4: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cea0) {
            ctx->pc = 0x22CF68u;
            goto label_22cf68;
        }
    }
    ctx->pc = 0x22CEA8u;
    // 0x22cea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ceac: 0x0  nop
    ctx->pc = 0x22ceacu;
    // NOP
    // 0x22ceb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ceb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ceb4: 0x0  nop
    ctx->pc = 0x22ceb4u;
    // NOP
    // 0x22ceb8: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x22CEB8u;
    {
        const bool branch_taken_0x22ceb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEB8u;
        // 0x22cebc: 0x268264f0  addiu       $v0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ceb8) {
            ctx->pc = 0x22CF68u;
            goto label_22cf68;
        }
    }
    ctx->pc = 0x22CEC0u;
    // 0x22cec0: 0x904305a0  lbu         $v1, 0x5A0($v0)
    ctx->pc = 0x22cec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1440)));
    // 0x22cec4: 0x5060028b  beql        $v1, $zero, . + 4 + (0x28B << 2)
    ctx->pc = 0x22CEC4u;
    {
        const bool branch_taken_0x22cec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cec4) {
            ctx->pc = 0x22CEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CEC4u;
            // 0x22cec8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D8F4u;
            goto label_22d8f4;
        }
    }
    ctx->pc = 0x22CECCu;
    // 0x22cecc: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x22CECCu;
    {
        const bool branch_taken_0x22cecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CECCu;
        // 0x22ced0: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cecc) {
            ctx->pc = 0x22D1D4u;
            goto label_22d1d4;
        }
    }
    ctx->pc = 0x22CED4u;
label_22ced4:
    // 0x22ced4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22ced8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22CED8u;
    SET_GPR_U32(ctx, 31, 0x22CEE0u);
    ctx->pc = 0x22CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CED8u;
    // 0x22cedc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22CED8u, 0x22CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEE0u;
label_22cee0:
    // 0x22cee0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22cee4: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x22cee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x22cee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22cee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ceec: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22CEECu;
    {
        const bool branch_taken_0x22ceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22ceec) {
            ctx->pc = 0x22CEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CEECu;
            // 0x22cef0: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CF04u;
            goto label_22cf04;
        }
    }
    ctx->pc = 0x22CEF4u;
    // 0x22cef4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x22cef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x22cef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22cef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cefc: 0x0  nop
    ctx->pc = 0x22cefcu;
    // NOP
    // 0x22cf00: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22cf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_22cf04:
    // 0x22cf04: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22cf04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22cf08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22cf0c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22cf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22cf10:
    // 0x22cf10: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x22CF10u;
    {
        const bool branch_taken_0x22cf10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cf10) {
            ctx->pc = 0x22CF38u;
            goto label_22cf38;
        }
    }
    ctx->pc = 0x22CF18u;
    // 0x22cf18: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cf1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf20: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22cf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22cf24: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22cf24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22cf28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22cf28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22cf2c: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x22cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22cf30: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22CF30u;
    SET_GPR_U32(ctx, 31, 0x22CF38u);
    ctx->pc = 0x22CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF30u;
    // 0x22cf34: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22CF30u, 0x22CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF38u;
label_22cf38:
    // 0x22cf38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22cf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22cf3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22cf3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22cf40: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22CF40u;
    SET_GPR_U32(ctx, 31, 0x22CF48u);
    ctx->pc = 0x22CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF40u;
    // 0x22cf44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22CF40u, 0x22CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF48u;
label_22cf48:
    // 0x22cf48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf4c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22CF4Cu;
    SET_GPR_U32(ctx, 31, 0x22CF54u);
    ctx->pc = 0x22CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF4Cu;
    // 0x22cf50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22CF4Cu, 0x22CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF54u;
label_22cf54:
    // 0x22cf54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22cf54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22cf58: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22CF58u;
    SET_GPR_U32(ctx, 31, 0x22CF60u);
    ctx->pc = 0x22CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF58u;
    // 0x22cf5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22CF58u, 0x22CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF60u;
label_22cf60:
    // 0x22cf60: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22CF60u;
    {
        const bool branch_taken_0x22cf60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cf60) {
            ctx->pc = 0x22CF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CF60u;
            // 0x22cf64: 0xc6200600  lwc1        $f0, 0x600($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CF80u;
            goto label_22cf80;
        }
    }
    ctx->pc = 0x22CF68u;
label_22cf68:
    // 0x22cf68: 0xc0a4dca  jal         func_293728
    ctx->pc = 0x22CF68u;
    SET_GPR_U32(ctx, 31, 0x22CF70u);
    ctx->pc = 0x22CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF68u;
    // 0x22cf6c: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293728u, 0x22CF68u, 0x22CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF70u;
label_22cf70:
    // 0x22cf70: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22CF70u;
    SET_GPR_U32(ctx, 31, 0x22CF78u);
    ctx->pc = 0x22CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF70u;
    // 0x22cf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22CF70u, 0x22CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF78u;
label_22cf78:
    // 0x22cf78: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x22CF78u;
    {
        const bool branch_taken_0x22cf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF78u;
        // 0x22cf7c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf78) {
            ctx->pc = 0x22D8F4u;
            goto label_22d8f4;
        }
    }
    ctx->pc = 0x22CF80u;
label_22cf80:
    // 0x22cf80: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x22cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cf84: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22cf84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22cf88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22cf88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22cf8c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22cf8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cf90: 0x0  nop
    ctx->pc = 0x22cf90u;
    // NOP
    // 0x22cf94: 0x45000256  bc1f        . + 4 + (0x256 << 2)
    ctx->pc = 0x22CF94u;
    {
        const bool branch_taken_0x22cf94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF94u;
        // 0x22cf98: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf94) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22CF9Cu;
    // 0x22cf9c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x22CF9Cu;
    {
        const bool branch_taken_0x22cf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF9Cu;
        // 0x22cfa0: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf9c) {
            ctx->pc = 0x22D1D4u;
            goto label_22d1d4;
        }
    }
    ctx->pc = 0x22CFA4u;
label_22cfa4:
    // 0x22cfa4: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x22cfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22cfa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22cfacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22cfb0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22cfb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22cfb4: 0x8cc51aa8  lw          $a1, 0x1AA8($a2)
    ctx->pc = 0x22cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6824)));
    // 0x22cfb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22cfb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfbc: 0x8cc21aac  lw          $v0, 0x1AAC($a2)
    ctx->pc = 0x22cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6828)));
    // 0x22cfc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22cfc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22cfc4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x22cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22cfc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22cfc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfcc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22CFCCu;
    SET_GPR_U32(ctx, 31, 0x22CFD4u);
    ctx->pc = 0x22CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CFCCu;
    // 0x22cfd0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22CFCCu, 0x22CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFD4u;
label_22cfd4:
    // 0x22cfd4: 0xe6340590  swc1        $f20, 0x590($s1)
    ctx->pc = 0x22cfd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x22cfd8: 0xe6340594  swc1        $f20, 0x594($s1)
    ctx->pc = 0x22cfd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x22cfdc: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
    ctx->pc = 0x22CFDCu;
    {
        const bool branch_taken_0x22cfdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFDCu;
        // 0x22cfe0: 0xe6340598  swc1        $f20, 0x598($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfdc) {
            ctx->pc = 0x22D0D0u;
            goto label_22d0d0;
        }
    }
    ctx->pc = 0x22CFE4u;
    // 0x22cfe4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x22cfe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22cfe8: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x22cfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22cfec: 0xc051e62  jal         func_147988
    ctx->pc = 0x22CFECu;
    SET_GPR_U32(ctx, 31, 0x22CFF4u);
    ctx->pc = 0x22CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CFECu;
    // 0x22cff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x22CFECu, 0x22CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFF4u;
label_22cff4:
    // 0x22cff4: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x22cff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cff8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cffc: 0xc6200118  lwc1        $f0, 0x118($s1)
    ctx->pc = 0x22cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d004: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x22d004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x22d008: 0x3421bac7  ori         $at, $at, 0xBAC7
    ctx->pc = 0x22d008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47815);
    // 0x22d00c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22d00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22d010: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22d010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d014: 0x3c013fe9  lui         $at, 0x3FE9
    ctx->pc = 0x22d014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16361 << 16));
    // 0x22d018: 0x3421ff2e  ori         $at, $at, 0xFF2E
    ctx->pc = 0x22d018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65326);
    // 0x22d01c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x22d01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22d020: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22d020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x22d024: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x22d024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22d028: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x22d028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x22d02c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x22d02cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22d030: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x22D030u;
    SET_GPR_U32(ctx, 31, 0x22D038u);
    ctx->pc = 0x22D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D030u;
    // 0x22d034: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x22D030u, 0x22D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D038u;
label_22d038:
    // 0x22d038: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22d03c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22d040: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22d040u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d044: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d048: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d048u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d04c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22d04cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d050: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22d050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d054: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d058: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22d058u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d05c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x22d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d060: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x22d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d064: 0x13a30006  beq         $sp, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D064u;
    {
        const bool branch_taken_0x22d064 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 3));
        ctx->pc = 0x22D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D064u;
        // 0x22d068: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d064) {
            ctx->pc = 0x22D080u;
            goto label_22d080;
        }
    }
    ctx->pc = 0x22D06Cu;
    // 0x22d06c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x22d06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d070: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x22d070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d074: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22d074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22d078: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22d078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22d07c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22d07cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22d080:
    // 0x22d080: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x22d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22d084: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x22d084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22d088: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22d088u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d08c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x22d08cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d090: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22d090u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d094: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d098: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22d098u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d09c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x22d09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d0a0: 0x26220590  addiu       $v0, $s1, 0x590
    ctx->pc = 0x22d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x22d0a4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D0A4u;
    {
        const bool branch_taken_0x22d0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0A4u;
        // 0x22d0a8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0a4) {
            ctx->pc = 0x22D0C0u;
            goto label_22d0c0;
        }
    }
    ctx->pc = 0x22D0ACu;
    // 0x22d0ac: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x22d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d0b0: 0xe6200590  swc1        $f0, 0x590($s1)
    ctx->pc = 0x22d0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x22d0b4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x22d0b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22d0b8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x22d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d0bc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x22d0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22d0c0:
    // 0x22d0c0: 0xe6340594  swc1        $f20, 0x594($s1)
    ctx->pc = 0x22d0c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x22d0c4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22D0C4u;
    SET_GPR_U32(ctx, 31, 0x22D0CCu);
    ctx->pc = 0x22D0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D0C4u;
    // 0x22d0c8: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22D0C4u, 0x22D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D0CCu;
label_22d0cc:
    // 0x22d0cc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x22d0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_22d0d0:
    // 0x22d0d0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22d0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22d0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d0d8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d0dc:
    // 0x22d0dc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x22d0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x22d0e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22d0e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22d0e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d0e8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x22d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22d0ec: 0x26220590  addiu       $v0, $s1, 0x590
    ctx->pc = 0x22d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x22d0f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22d0f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d0f4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x22d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d0f8: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x22d0f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22d0fc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22d0fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22d100: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22d100u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22d104: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22d104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d108: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x22d108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d10c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22d10cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d110: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d114: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22d114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d118: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22d11c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22d11cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d120: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x22d120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d124: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x22d124u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22d128: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22d128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22d12c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22d12cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22d130: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22d130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d134: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x22d134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d138: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22d138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d13c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x22d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d140: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x22d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d144: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D144u;
    {
        const bool branch_taken_0x22d144 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D144u;
        // 0x22d148: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d144) {
            ctx->pc = 0x22D160u;
            goto label_22d160;
        }
    }
    ctx->pc = 0x22D14Cu;
    // 0x22d14c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x22d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d150: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x22d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d154: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22d154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22d158: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22d158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22d15c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22d15cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22d160:
    // 0x22d160: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x22d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22d164: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22d164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d168: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22d168u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d16c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22d16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d170: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22d170u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d174: 0xda240590  lqc2        $vf4, 0x590($s1)
    ctx->pc = 0x22d174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1424)));
    // 0x22d178: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22d178u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d17c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22d17cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d180: 0xfa240590  sqc2        $vf4, 0x590($s1)
    ctx->pc = 0x22d180u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d184: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22D184u;
    SET_GPR_U32(ctx, 31, 0x22D18Cu);
    ctx->pc = 0x22D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D184u;
    // 0x22d188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22D184u, 0x22D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D18Cu;
label_22d18c:
    // 0x22d18c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D18Cu;
    {
        const bool branch_taken_0x22d18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d18c) {
            ctx->pc = 0x22D19Cu;
            goto label_22d19c;
        }
    }
    ctx->pc = 0x22D194u;
    // 0x22d194: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22D194u;
    SET_GPR_U32(ctx, 31, 0x22D19Cu);
    ctx->pc = 0x22D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D194u;
    // 0x22d198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22D194u, 0x22D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D19Cu;
label_22d19c:
    // 0x22d19c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d1a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22d1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1a8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22D1A8u;
    SET_GPR_U32(ctx, 31, 0x22D1B0u);
    ctx->pc = 0x22D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D1A8u;
    // 0x22d1ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22D1A8u, 0x22D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D1B0u;
label_22d1b0:
    // 0x22d1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1b4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22D1B4u;
    SET_GPR_U32(ctx, 31, 0x22D1BCu);
    ctx->pc = 0x22D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D1B4u;
    // 0x22d1b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22D1B4u, 0x22D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D1BCu;
label_22d1bc:
    // 0x22d1bc: 0x268464f0  addiu       $a0, $s4, 0x64F0
    ctx->pc = 0x22d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    // 0x22d1c0: 0x908205a1  lbu         $v0, 0x5A1($a0)
    ctx->pc = 0x22d1c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1441)));
    // 0x22d1c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D1C4u;
    {
        const bool branch_taken_0x22d1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1C4u;
        // 0x22d1c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1c4) {
            ctx->pc = 0x22D1E0u;
            goto label_22d1e0;
        }
    }
    ctx->pc = 0x22D1CCu;
    // 0x22d1cc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22d1ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22d1d0: 0xa2230617  sb          $v1, 0x617($s1)
    ctx->pc = 0x22d1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 3));
label_22d1d4:
    // 0x22d1d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d1d8: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x22D1D8u;
    {
        const bool branch_taken_0x22d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1D8u;
        // 0x22d1dc: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1d8) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22D1E0u;
label_22d1e0:
    // 0x22d1e0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22d1e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22d1e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22d1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22d1e8: 0x104001c1  beqz        $v0, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x22D1E8u;
    {
        const bool branch_taken_0x22d1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1E8u;
        // 0x22d1ec: 0x24020214  addiu       $v0, $zero, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1e8) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22D1F0u;
    // 0x22d1f0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22d1f4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D1F4u;
    {
        const bool branch_taken_0x22d1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d1f4) {
            ctx->pc = 0x22D20Cu;
            goto label_22d20c;
        }
    }
    ctx->pc = 0x22D1FCu;
    // 0x22d1fc: 0xc0a4dce  jal         func_293738
    ctx->pc = 0x22D1FCu;
    SET_GPR_U32(ctx, 31, 0x22D204u);
    ctx->pc = 0x22D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D1FCu;
    // 0x22d200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293738u, 0x22D1FCu, 0x22D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D204u;
label_22d204:
    // 0x22d204: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x22D204u;
    {
        const bool branch_taken_0x22d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D204u;
        // 0x22d208: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d204) {
            ctx->pc = 0x22D8F4u;
            goto label_22d8f4;
        }
    }
    ctx->pc = 0x22D20Cu;
label_22d20c:
    // 0x22d20c: 0xc0a4dce  jal         func_293738
    ctx->pc = 0x22D20Cu;
    SET_GPR_U32(ctx, 31, 0x22D214u);
    ctx->pc = 0x22D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D20Cu;
    // 0x22d210: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293738u, 0x22D20Cu, 0x22D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D214u;
label_22d214:
    // 0x22d214: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x22D214u;
    {
        const bool branch_taken_0x22d214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D214u;
        // 0x22d218: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d214) {
            ctx->pc = 0x22D8F4u;
            goto label_22d8f4;
        }
    }
    ctx->pc = 0x22D21Cu;
label_22d21c:
    // 0x22d21c: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x22d21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22d220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d224: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22d224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22d228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d22c: 0x8cc51ab8  lw          $a1, 0x1AB8($a2)
    ctx->pc = 0x22d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6840)));
    // 0x22d230: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d234: 0x8cc21abc  lw          $v0, 0x1ABC($a2)
    ctx->pc = 0x22d234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6844)));
    // 0x22d238: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d238u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22d23c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x22d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22d240: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22d240u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d244: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22D244u;
    SET_GPR_U32(ctx, 31, 0x22D24Cu);
    ctx->pc = 0x22D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D244u;
    // 0x22d248: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22D244u, 0x22D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D24Cu;
label_22d24c:
    // 0x22d24c: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x22D24Cu;
    {
        const bool branch_taken_0x22d24c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D24Cu;
        // 0x22d250: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d24c) {
            ctx->pc = 0x22D2E4u;
            goto label_22d2e4;
        }
    }
    ctx->pc = 0x22D254u;
    // 0x22d254: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x22d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22d258: 0xc051e62  jal         func_147988
    ctx->pc = 0x22D258u;
    SET_GPR_U32(ctx, 31, 0x22D260u);
    ctx->pc = 0x22D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D258u;
    // 0x22d25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x22D258u, 0x22D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D260u;
label_22d260:
    // 0x22d260: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x22d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d268: 0xc6200118  lwc1        $f0, 0x118($s1)
    ctx->pc = 0x22d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d26c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22d26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d270: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x22d270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x22d274: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x22d274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22d278: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x22d278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x22d27c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22d27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d280: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x22d280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22d284: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x22D284u;
    SET_GPR_U32(ctx, 31, 0x22D28Cu);
    ctx->pc = 0x22D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D284u;
    // 0x22d288: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x22D284u, 0x22D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D28Cu;
label_22d28c:
    // 0x22d28c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x22d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22d290: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22d294: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22d294u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d298: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d29c: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d29cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d2a0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22d2a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d2a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22d2a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d2a8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d2ac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22d2acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d2b0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x22d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d2b4: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x22d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22d2b8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x22d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d2bc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D2BCu;
    {
        const bool branch_taken_0x22d2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2BCu;
        // 0x22d2c0: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2bc) {
            ctx->pc = 0x22D2D8u;
            goto label_22d2d8;
        }
    }
    ctx->pc = 0x22D2C4u;
    // 0x22d2c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x22d2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22d2c8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x22d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d2cc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x22d2ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x22d2d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x22d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d2d4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x22d2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_22d2d8:
    // 0x22d2d8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22D2D8u;
    SET_GPR_U32(ctx, 31, 0x22D2E0u);
    ctx->pc = 0x22D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2D8u;
    // 0x22d2dc: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22D2D8u, 0x22D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2E0u;
label_22d2e0:
    // 0x22d2e0: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x22d2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_22d2e4:
    // 0x22d2e4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22d2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22d2e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d2ec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d2f0:
    // 0x22d2f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22D2F0u;
    SET_GPR_U32(ctx, 31, 0x22D2F8u);
    ctx->pc = 0x22D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2F0u;
    // 0x22d2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22D2F0u, 0x22D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2F8u;
label_22d2f8:
    // 0x22d2f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D2F8u;
    {
        const bool branch_taken_0x22d2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d2f8) {
            ctx->pc = 0x22D30Cu;
            goto label_22d30c;
        }
    }
    ctx->pc = 0x22D300u;
    // 0x22d300: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22d300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22d304: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d308: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d308u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d30c:
    // 0x22d30c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d310: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22d310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d318: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22D318u;
    SET_GPR_U32(ctx, 31, 0x22D320u);
    ctx->pc = 0x22D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D318u;
    // 0x22d31c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22D318u, 0x22D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D320u;
label_22d320:
    // 0x22d320: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d320u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22d324: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22D324u;
    SET_GPR_U32(ctx, 31, 0x22D32Cu);
    ctx->pc = 0x22D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D324u;
    // 0x22d328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22D324u, 0x22D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D32Cu;
label_22d32c:
    // 0x22d32c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22d32cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22d330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22d330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22d334: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x22D334u;
    {
        const bool branch_taken_0x22d334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D334u;
        // 0x22d338: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d334) {
            ctx->pc = 0x22D488u;
            goto label_22d488;
        }
    }
    ctx->pc = 0x22D33Cu;
    // 0x22d33c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x22D33Cu;
    {
        const bool branch_taken_0x22d33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D33Cu;
        // 0x22d340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d33c) {
            ctx->pc = 0x22D46Cu;
            goto label_22d46c;
        }
    }
    ctx->pc = 0x22D344u;
label_22d344:
    // 0x22d344: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22d348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d34c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22d34cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22d350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d354: 0x8c451ac8  lw          $a1, 0x1AC8($v0)
    ctx->pc = 0x22d354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6856)));
    // 0x22d358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d35c: 0x8c461acc  lw          $a2, 0x1ACC($v0)
    ctx->pc = 0x22d35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6860)));
    // 0x22d360: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22d360u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d364: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22d364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22d368: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22D368u;
    SET_GPR_U32(ctx, 31, 0x22D370u);
    ctx->pc = 0x22D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D368u;
    // 0x22d36c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22D368u, 0x22D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D370u;
label_22d370:
    // 0x22d370: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22d370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22d374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d37c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x22d37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x22d380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22d380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22d384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d388: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x22d388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x22d38c: 0xe6210608  swc1        $f1, 0x608($s1)
    ctx->pc = 0x22d38cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
    // 0x22d390: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d394:
    // 0x22d394: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x22d394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x22d398: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22d398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x22d39c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22d39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22d3a0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22d3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d3a4: 0xc6210604  lwc1        $f1, 0x604($s1)
    ctx->pc = 0x22d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d3a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22d3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22d3ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22d3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22d3b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22d3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22d3b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22d3b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d3b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x22d3b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d3bc: 0x0  nop
    ctx->pc = 0x22d3bcu;
    // NOP
    // 0x22d3c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22D3C0u;
    {
        const bool branch_taken_0x22d3c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3C0u;
        // 0x22d3c4: 0xe6210604  swc1        $f1, 0x604($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3c0) {
            ctx->pc = 0x22D3CCu;
            goto label_22d3cc;
        }
    }
    ctx->pc = 0x22D3C8u;
    // 0x22d3c8: 0xe6220604  swc1        $f2, 0x604($s1)
    ctx->pc = 0x22d3c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_22d3cc:
    // 0x22d3cc: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22d3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3d4: 0xc62c0604  lwc1        $f12, 0x604($s1)
    ctx->pc = 0x22d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22d3d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d3dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22d3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d3e0: 0xc0560a2  jal         func_158288
    ctx->pc = 0x22D3E0u;
    SET_GPR_U32(ctx, 31, 0x22D3E8u);
    ctx->pc = 0x22D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3E0u;
    // 0x22d3e4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x22D3E0u, 0x22D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3E8u;
label_22d3e8:
    // 0x22d3e8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22D3E8u;
    SET_GPR_U32(ctx, 31, 0x22D3F0u);
    ctx->pc = 0x22D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3E8u;
    // 0x22d3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22D3E8u, 0x22D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3F0u;
label_22d3f0:
    // 0x22d3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3f4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22D3F4u;
    SET_GPR_U32(ctx, 31, 0x22D3FCu);
    ctx->pc = 0x22D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3F4u;
    // 0x22d3f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22D3F4u, 0x22D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3FCu;
label_22d3fc:
    // 0x22d3fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d3fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22d400: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22D400u;
    SET_GPR_U32(ctx, 31, 0x22D408u);
    ctx->pc = 0x22D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D400u;
    // 0x22d404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22D400u, 0x22D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D408u;
label_22d408:
    // 0x22d408: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x22d408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d40c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22d40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22d410: 0x0  nop
    ctx->pc = 0x22d410u;
    // NOP
    // 0x22d414: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x22d414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d418: 0x0  nop
    ctx->pc = 0x22d418u;
    // NOP
    // 0x22d41c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x22D41Cu;
    {
        const bool branch_taken_0x22d41c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d41c) {
            ctx->pc = 0x22D420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D41Cu;
            // 0x22d420: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D45Cu;
            goto label_22d45c;
        }
    }
    ctx->pc = 0x22D424u;
    // 0x22d424: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22d424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d428: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22d42c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22d42cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d430: 0x0  nop
    ctx->pc = 0x22d430u;
    // NOP
    // 0x22d434: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22D434u;
    {
        const bool branch_taken_0x22d434 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D434u;
        // 0x22d438: 0xe6200608  swc1        $f0, 0x608($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d434) {
            ctx->pc = 0x22D458u;
            goto label_22d458;
        }
    }
    ctx->pc = 0x22D43Cu;
    // 0x22d43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d440: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x22d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x22d444: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x22d444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22d448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22d448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d44c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d450: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x22D450u;
    SET_GPR_U32(ctx, 31, 0x22D458u);
    ctx->pc = 0x22D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D450u;
    // 0x22d454: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x22D450u, 0x22D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D458u;
label_22d458:
    // 0x22d458: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22d458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_22d45c:
    // 0x22d45c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22d45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22d460: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D460u;
    {
        const bool branch_taken_0x22d460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D460u;
        // 0x22d464: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d460) {
            ctx->pc = 0x22D488u;
            goto label_22d488;
        }
    }
    ctx->pc = 0x22D468u;
    // 0x22d468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d46c:
    // 0x22d46c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22d46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d470: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22d470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22d474: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22d474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22d478: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22D478u;
    SET_GPR_U32(ctx, 31, 0x22D480u);
    ctx->pc = 0x22D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D478u;
    // 0x22d47c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22D478u, 0x22D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D480u;
label_22d480:
    // 0x22d480: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22D480u;
    SET_GPR_U32(ctx, 31, 0x22D488u);
    ctx->pc = 0x22D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D480u;
    // 0x22d484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22D480u, 0x22D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D488u;
label_22d488:
    // 0x22d488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d48c: 0x16600118  bnez        $s3, . + 4 + (0x118 << 2)
    ctx->pc = 0x22D48Cu;
    {
        const bool branch_taken_0x22d48c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D48Cu;
        // 0x22d490: 0xa2220617  sb          $v0, 0x617($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d48c) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22D494u;
    // 0x22d494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d498: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22d49c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x22d49cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x22d4a0: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x22d4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d4a4: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x22d4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d4a8: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x22D4A8u;
    {
        const bool branch_taken_0x22d4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4A8u;
        // 0x22d4ac: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4a8) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22D4B0u;
label_22d4b0:
    // 0x22d4b0: 0x268264f0  addiu       $v0, $s4, 0x64F0
    ctx->pc = 0x22d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    // 0x22d4b4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22d4b8: 0xc440059c  lwc1        $f0, 0x59C($v0)
    ctx->pc = 0x22d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d4bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22d4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d4c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22d4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d4c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d4c8: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x22d4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x22d4cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22d4ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d4d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d4d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22d4d8: 0x8c651ad8  lw          $a1, 0x1AD8($v1)
    ctx->pc = 0x22d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6872)));
    // 0x22d4dc: 0x8c661adc  lw          $a2, 0x1ADC($v1)
    ctx->pc = 0x22d4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6876)));
    // 0x22d4e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22d4e4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22D4E4u;
    SET_GPR_U32(ctx, 31, 0x22D4ECu);
    ctx->pc = 0x22D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D4E4u;
    // 0x22d4e8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22D4E4u, 0x22D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D4ECu;
label_22d4ec:
    // 0x22d4ec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22D4ECu;
    SET_GPR_U32(ctx, 31, 0x22D4F4u);
    ctx->pc = 0x22D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D4ECu;
    // 0x22d4f0: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22D4ECu, 0x22D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D4F4u;
label_22d4f4:
    // 0x22d4f4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x22d4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x22d4f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22d4f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22d4fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22d4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22d500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d504: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22d504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22d508: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22D508u;
    SET_GPR_U32(ctx, 31, 0x22D510u);
    ctx->pc = 0x22D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D508u;
    // 0x22d50c: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22D508u, 0x22D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D510u;
label_22d510:
    // 0x22d510: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x22d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22d514: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22d514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22d518: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22D518u;
    SET_GPR_U32(ctx, 31, 0x22D520u);
    ctx->pc = 0x22D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D518u;
    // 0x22d51c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22D518u, 0x22D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D520u;
label_22d520:
    // 0x22d520: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22d520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22d524: 0xc051e62  jal         func_147988
    ctx->pc = 0x22D524u;
    SET_GPR_U32(ctx, 31, 0x22D52Cu);
    ctx->pc = 0x22D528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D524u;
    // 0x22d528: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x22D524u, 0x22D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D52Cu;
label_22d52c:
    // 0x22d52c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22d52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22d530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d534: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22d534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22d538: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x22d538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22d53c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22d540: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x22d540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22d544: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22D544u;
    SET_GPR_U32(ctx, 31, 0x22D54Cu);
    ctx->pc = 0x22D548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D544u;
    // 0x22d548: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22D544u, 0x22D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D54Cu;
label_22d54c:
    // 0x22d54c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22d550: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22d550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22d554: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22D554u;
    {
        const bool branch_taken_0x22d554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D554u;
        // 0x22d558: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d554) {
            ctx->pc = 0x22D574u;
            goto label_22d574;
        }
    }
    ctx->pc = 0x22D55Cu;
    // 0x22d55c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22d560: 0x24428d40  addiu       $v0, $v0, -0x72C0
    ctx->pc = 0x22d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937920));
    // 0x22d564: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22d568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d56c: 0x800008  jr          $a0
    ctx->pc = 0x22D56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D574u: goto label_22d574;
            case 0x22D584u: goto label_22d584;
            case 0x22D594u: goto label_22d594;
            case 0x22D5A4u: goto label_22d5a4;
            case 0x22D5B4u: goto label_22d5b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D56Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22D574u;
label_22d574:
    // 0x22d574: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d57c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22D57Cu;
    {
        const bool branch_taken_0x22d57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D57Cu;
        // 0x22d580: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d57c) {
            ctx->pc = 0x22D5C4u;
            goto label_22d5c4;
        }
    }
    ctx->pc = 0x22D584u;
label_22d584:
    // 0x22d584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d588: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d58c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22D58Cu;
    {
        const bool branch_taken_0x22d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D58Cu;
        // 0x22d590: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d58c) {
            ctx->pc = 0x22D5C4u;
            goto label_22d5c4;
        }
    }
    ctx->pc = 0x22D594u;
label_22d594:
    // 0x22d594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d59c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22D59Cu;
    {
        const bool branch_taken_0x22d59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D59Cu;
        // 0x22d5a0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d59c) {
            ctx->pc = 0x22D5C4u;
            goto label_22d5c4;
        }
    }
    ctx->pc = 0x22D5A4u;
label_22d5a4:
    // 0x22d5a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d5a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d5a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d5ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22D5ACu;
    {
        const bool branch_taken_0x22d5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5ACu;
        // 0x22d5b0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5ac) {
            ctx->pc = 0x22D5C4u;
            goto label_22d5c4;
        }
    }
    ctx->pc = 0x22D5B4u;
label_22d5b4:
    // 0x22d5b4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22d5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22d5b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d5bc: 0x0  nop
    ctx->pc = 0x22d5bcu;
    // NOP
    // 0x22d5c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x22d5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22d5c4:
    // 0x22d5c4: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x22d5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22d5c8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22d5c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d5cc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d5d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x22d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22d5d8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x22D5D8u;
    SET_GPR_U32(ctx, 31, 0x22D5E0u);
    ctx->pc = 0x22D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D5D8u;
    // 0x22d5dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x22D5D8u, 0x22D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D5E0u;
label_22d5e0:
    // 0x22d5e0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x22d5e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d5e4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x22d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d5e8: 0x26230590  addiu       $v1, $s1, 0x590
    ctx->pc = 0x22d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x22d5ec: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x22d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d5f0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D5F0u;
    {
        const bool branch_taken_0x22d5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5F0u;
        // 0x22d5f4: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5f0) {
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D5F8u;
    // 0x22d5f8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x22d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d5fc: 0xe6200590  swc1        $f0, 0x590($s1)
    ctx->pc = 0x22d5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x22d600: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x22d600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x22d604: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x22d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d608: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x22d608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_22d60c:
    // 0x22d60c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22d60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22d610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d614: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d614u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d618:
    // 0x22d618: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22d618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22d61c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22d61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22d620: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22D620u;
    {
        const bool branch_taken_0x22d620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D620u;
        // 0x22d624: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d620) {
            ctx->pc = 0x22D698u;
            goto label_22d698;
        }
    }
    ctx->pc = 0x22D628u;
    // 0x22d628: 0xc6220600  lwc1        $f2, 0x600($s1)
    ctx->pc = 0x22d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d62c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x22d62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x22d630: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x22d630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x22d634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d638: 0x26220590  addiu       $v0, $s1, 0x590
    ctx->pc = 0x22d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x22d63c: 0xc62305a8  lwc1        $f3, 0x5A8($s1)
    ctx->pc = 0x22d63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d640: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x22d640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22d644: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x22d644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d648: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x22d648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x22d64c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x22d64cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x22d650: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22d650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d654: 0xe6220600  swc1        $f2, 0x600($s1)
    ctx->pc = 0x22d654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22d658: 0xe6210104  swc1        $f1, 0x104($s1)
    ctx->pc = 0x22d658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x22d65c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22d65cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d660: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d664: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d664u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d668: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x22d668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22d66c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22d66cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22d670: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22d670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d674: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d678: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22d678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d67c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x22d67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d680: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x22d680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22d684: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x22d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d688: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22d688u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d68c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x22d68cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d690: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22d690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d694: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22d694u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_22d698:
    // 0x22d698: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22D698u;
    SET_GPR_U32(ctx, 31, 0x22D6A0u);
    ctx->pc = 0x22D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D698u;
    // 0x22d69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22D698u, 0x22D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6A0u;
label_22d6a0:
    // 0x22d6a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D6A0u;
    {
        const bool branch_taken_0x22d6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d6a0) {
            ctx->pc = 0x22D6B4u;
            goto label_22d6b4;
        }
    }
    ctx->pc = 0x22D6A8u;
    // 0x22d6a8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22d6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22d6ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d6b0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d6b4:
    // 0x22d6b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d6b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22d6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d6c0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22D6C0u;
    SET_GPR_U32(ctx, 31, 0x22D6C8u);
    ctx->pc = 0x22D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6C0u;
    // 0x22d6c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22D6C0u, 0x22D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6C8u;
label_22d6c8:
    // 0x22d6c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d6c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22d6cc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22D6CCu;
    SET_GPR_U32(ctx, 31, 0x22D6D4u);
    ctx->pc = 0x22D6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6CCu;
    // 0x22d6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22D6CCu, 0x22D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6D4u;
label_22d6d4:
    // 0x22d6d4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22d6d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22d6d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22d6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22d6dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22D6DCu;
    {
        const bool branch_taken_0x22d6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6DCu;
        // 0x22d6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6dc) {
            ctx->pc = 0x22D70Cu;
            goto label_22d70c;
        }
    }
    ctx->pc = 0x22D6E4u;
    // 0x22d6e4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22d6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22d6e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22d6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d6ec: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22d6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22d6f0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22d6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22d6f4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22D6F4u;
    SET_GPR_U32(ctx, 31, 0x22D6FCu);
    ctx->pc = 0x22D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6F4u;
    // 0x22d6f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22D6F4u, 0x22D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6FCu;
label_22d6fc:
    // 0x22d6fc: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22D6FCu;
    SET_GPR_U32(ctx, 31, 0x22D704u);
    ctx->pc = 0x22D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D6FCu;
    // 0x22d700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22D6FCu, 0x22D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D704u;
label_22d704:
    // 0x22d704: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x22D704u;
    {
        const bool branch_taken_0x22d704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D704u;
        // 0x22d708: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d704) {
            ctx->pc = 0x22D870u;
            goto label_22d870;
        }
    }
    ctx->pc = 0x22D70Cu;
label_22d70c:
    // 0x22d70c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x22D70Cu;
    {
        const bool branch_taken_0x22d70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D70Cu;
        // 0x22d710: 0xa2201864  sb          $zero, 0x1864($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d70c) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22D714u;
label_22d714:
    // 0x22d714: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22d718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d71c: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x22d71cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22d720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22d724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d728: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d72c: 0x8c451ae0  lw          $a1, 0x1AE0($v0)
    ctx->pc = 0x22d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6880)));
    // 0x22d730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22d730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d734: 0x8c461ae4  lw          $a2, 0x1AE4($v0)
    ctx->pc = 0x22d734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6884)));
    // 0x22d738: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22d738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22d73c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22D73Cu;
    SET_GPR_U32(ctx, 31, 0x22D744u);
    ctx->pc = 0x22D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D73Cu;
    // 0x22d740: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22D73Cu, 0x22D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D744u;
label_22d744:
    // 0x22d744: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22d744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22d748: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x22d748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x22d74c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d754: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x22d754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x22d758: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d758u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d75c:
    // 0x22d75c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d760: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22d760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d764: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22D764u;
    SET_GPR_U32(ctx, 31, 0x22D76Cu);
    ctx->pc = 0x22D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D764u;
    // 0x22d768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22D764u, 0x22D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D76Cu;
label_22d76c:
    // 0x22d76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d770: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22D770u;
    SET_GPR_U32(ctx, 31, 0x22D778u);
    ctx->pc = 0x22D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D770u;
    // 0x22d774: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22D770u, 0x22D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D778u;
label_22d778:
    // 0x22d778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d77c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22D77Cu;
    SET_GPR_U32(ctx, 31, 0x22D784u);
    ctx->pc = 0x22D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D77Cu;
    // 0x22d780: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22D77Cu, 0x22D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D784u;
label_22d784:
    // 0x22d784: 0xc6220600  lwc1        $f2, 0x600($s1)
    ctx->pc = 0x22d784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d788: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22d78c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x22d78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x22d790: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x22d790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x22d794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d798: 0x26220590  addiu       $v0, $s1, 0x590
    ctx->pc = 0x22d798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x22d79c: 0xc62305a8  lwc1        $f3, 0x5A8($s1)
    ctx->pc = 0x22d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d7a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x22d7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22d7a4: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x22d7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d7a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x22d7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x22d7ac: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x22d7acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x22d7b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22d7b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d7b4: 0xe6220600  swc1        $f2, 0x600($s1)
    ctx->pc = 0x22d7b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22d7b8: 0xe6210104  swc1        $f1, 0x104($s1)
    ctx->pc = 0x22d7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x22d7bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22d7bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d7c0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d7c4: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d7c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d7c8: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x22d7c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22d7cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22d7ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22d7d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22d7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d7d4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22d7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d7d8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22d7d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d7dc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x22d7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d7e0: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x22d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22d7e4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x22d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d7e8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22d7e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d7ec: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x22d7ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d7f0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22d7f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d7f4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22d7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22d7f8: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x22d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d7fc: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x22d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d800: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22d800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22d804: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d808: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22d808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d80c: 0x0  nop
    ctx->pc = 0x22d80cu;
    // NOP
    // 0x22d810: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22D810u;
    {
        const bool branch_taken_0x22d810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D810u;
        // 0x22d814: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d810) {
            ctx->pc = 0x22D820u;
            goto label_22d820;
        }
    }
    ctx->pc = 0x22D818u;
    // 0x22d818: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x22d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22d81c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d81cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d820:
    // 0x22d820: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x22d820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x22d824: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22D824u;
    {
        const bool branch_taken_0x22d824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D824u;
        // 0x22d828: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d824) {
            ctx->pc = 0x22D830u;
            goto label_22d830;
        }
    }
    ctx->pc = 0x22D82Cu;
    // 0x22d82c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d82cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d830:
    // 0x22d830: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22d830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22d834: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22d834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22d838: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D838u;
    {
        const bool branch_taken_0x22d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D838u;
        // 0x22d83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d838) {
            ctx->pc = 0x22D860u;
            goto label_22d860;
        }
    }
    ctx->pc = 0x22D840u;
    // 0x22d840: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22d840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22d844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22d844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d848: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22d848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22d84c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22d850: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22D850u;
    SET_GPR_U32(ctx, 31, 0x22D858u);
    ctx->pc = 0x22D854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D850u;
    // 0x22d854: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22D850u, 0x22D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D858u;
label_22d858:
    // 0x22d858: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22D858u;
    SET_GPR_U32(ctx, 31, 0x22D860u);
    ctx->pc = 0x22D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D858u;
    // 0x22d85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22D858u, 0x22D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D860u;
label_22d860:
    // 0x22d860: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x22d860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x22d864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22d864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d868: 0xc09d622  jal         func_275888
    ctx->pc = 0x22D868u;
    SET_GPR_U32(ctx, 31, 0x22D870u);
    ctx->pc = 0x22D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D868u;
    // 0x22d86c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275888u, 0x22D868u, 0x22D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D870u;
label_22d870:
    // 0x22d870: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22D870u;
    {
        const bool branch_taken_0x22d870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D870u;
        // 0x22d874: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d870) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22D878u;
    // 0x22d878: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x22D878u;
    {
        const bool branch_taken_0x22d878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D878u;
        // 0x22d87c: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d878) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22D880u;
label_22d880:
    // 0x22d880: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22d884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d888: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22d888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d88c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22d88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22d890: 0x8c451ae8  lw          $a1, 0x1AE8($v0)
    ctx->pc = 0x22d890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6888)));
    // 0x22d894: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d898: 0x8c461aec  lw          $a2, 0x1AEC($v0)
    ctx->pc = 0x22d898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6892)));
    // 0x22d89c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22d89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d8a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22d8a4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22D8A4u;
    SET_GPR_U32(ctx, 31, 0x22D8ACu);
    ctx->pc = 0x22D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8A4u;
    // 0x22d8a8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22D8A4u, 0x22D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8ACu;
label_22d8ac:
    // 0x22d8ac: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22d8acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22d8b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d8b4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22d8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22d8b8:
    // 0x22d8b8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22D8B8u;
    SET_GPR_U32(ctx, 31, 0x22D8C0u);
    ctx->pc = 0x22D8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8B8u;
    // 0x22d8bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22D8B8u, 0x22D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8C0u;
label_22d8c0:
    // 0x22d8c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D8C0u;
    {
        const bool branch_taken_0x22d8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d8c0) {
            ctx->pc = 0x22D8D0u;
            goto label_22d8d0;
        }
    }
    ctx->pc = 0x22D8C8u;
    // 0x22d8c8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22D8C8u;
    SET_GPR_U32(ctx, 31, 0x22D8D0u);
    ctx->pc = 0x22D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8C8u;
    // 0x22d8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22D8C8u, 0x22D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8D0u;
label_22d8d0:
    // 0x22d8d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d8d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22d8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22d8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d8dc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22D8DCu;
    SET_GPR_U32(ctx, 31, 0x22D8E4u);
    ctx->pc = 0x22D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8DCu;
    // 0x22d8e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22D8DCu, 0x22D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8E4u;
label_22d8e4:
    // 0x22d8e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d8e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22d8e8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22D8E8u;
    SET_GPR_U32(ctx, 31, 0x22D8F0u);
    ctx->pc = 0x22D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8E8u;
    // 0x22d8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22D8E8u, 0x22D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8F0u;
label_22d8f0:
    // 0x22d8f0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22d8f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_22d8f4:
    // 0x22d8f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22d8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x22d8f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D8F8u;
    {
        const bool branch_taken_0x22d8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8F8u;
        // 0x22d8fc: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8f8) {
            ctx->pc = 0x22D910u;
            goto label_22d910;
        }
    }
    ctx->pc = 0x22D900u;
    // 0x22d900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d904: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x22d904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x22d908: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x22D908u;
    SET_GPR_U32(ctx, 31, 0x22D910u);
    ctx->pc = 0x22D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D908u;
    // 0x22d90c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x22D908u, 0x22D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D910u;
label_22d910:
    // 0x22d910: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x22d910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22d914: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x22d914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22d918: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x22d918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22d91c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x22d91cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22d920: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x22d920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22d924: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22d924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22d928: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x22d928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22d92c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D92Cu;
        // 0x22d930: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D934u;
    // 0x22d934: 0x0  nop
    ctx->pc = 0x22d934u;
    // NOP
    ctx->pc = 0x22d938u;
}
