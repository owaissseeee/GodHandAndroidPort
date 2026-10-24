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

// Function: func_00234D30
// Address: 0x234d30 - 0x235db8
void func_00234D30_0x234d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00234D30_0x234d30");
#endif

    switch (ctx->pc) {
        case 0x234d98u: goto label_234d98;
        case 0x234e0cu: goto label_234e0c;
        case 0x234e50u: goto label_234e50;
        case 0x234e94u: goto label_234e94;
        case 0x234ed8u: goto label_234ed8;
        case 0x234f20u: goto label_234f20;
        case 0x234f84u: goto label_234f84;
        case 0x234fa4u: goto label_234fa4;
        case 0x234fdcu: goto label_234fdc;
        case 0x235020u: goto label_235020;
        case 0x235074u: goto label_235074;
        case 0x2350dcu: goto label_2350dc;
        case 0x235124u: goto label_235124;
        case 0x235198u: goto label_235198;
        case 0x2351a8u: goto label_2351a8;
        case 0x2351f8u: goto label_2351f8;
        case 0x23521cu: goto label_23521c;
        case 0x235288u: goto label_235288;
        case 0x2352dcu: goto label_2352dc;
        case 0x235310u: goto label_235310;
        case 0x235364u: goto label_235364;
        case 0x2353b0u: goto label_2353b0;
        case 0x2353d8u: goto label_2353d8;
        case 0x2353e8u: goto label_2353e8;
        case 0x2353f8u: goto label_2353f8;
        case 0x23542cu: goto label_23542c;
        case 0x2354c4u: goto label_2354c4;
        case 0x235510u: goto label_235510;
        case 0x235564u: goto label_235564;
        case 0x2355acu: goto label_2355ac;
        case 0x2355d0u: goto label_2355d0;
        case 0x235674u: goto label_235674;
        case 0x235744u: goto label_235744;
        case 0x235764u: goto label_235764;
        case 0x23578cu: goto label_23578c;
        case 0x2357dcu: goto label_2357dc;
        case 0x2357ecu: goto label_2357ec;
        case 0x235840u: goto label_235840;
        case 0x23584cu: goto label_23584c;
        case 0x235868u: goto label_235868;
        case 0x235878u: goto label_235878;
        case 0x2358ccu: goto label_2358cc;
        case 0x2358f8u: goto label_2358f8;
        case 0x235918u: goto label_235918;
        case 0x235930u: goto label_235930;
        case 0x235960u: goto label_235960;
        case 0x23598cu: goto label_23598c;
        case 0x2359b8u: goto label_2359b8;
        case 0x2359e4u: goto label_2359e4;
        case 0x235a10u: goto label_235a10;
        case 0x235a3cu: goto label_235a3c;
        case 0x235a68u: goto label_235a68;
        case 0x235a94u: goto label_235a94;
        case 0x235ac0u: goto label_235ac0;
        case 0x235af4u: goto label_235af4;
        case 0x235b28u: goto label_235b28;
        case 0x235b54u: goto label_235b54;
        case 0x235b80u: goto label_235b80;
        case 0x235bb8u: goto label_235bb8;
        case 0x235becu: goto label_235bec;
        case 0x235c18u: goto label_235c18;
        case 0x235c44u: goto label_235c44;
        case 0x235c70u: goto label_235c70;
        case 0x235c9cu: goto label_235c9c;
        case 0x235cc8u: goto label_235cc8;
        case 0x235cf8u: goto label_235cf8;
        case 0x235d0cu: goto label_235d0c;
        case 0x235d28u: goto label_235d28;
        case 0x235d40u: goto label_235d40;
        case 0x235d5cu: goto label_235d5c;
        default: break;
    }

    ctx->pc = 0x234d30u;

    // 0x234d30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x234d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x234d34: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x234d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x234d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d3c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x234d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x234d40: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x234d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x234d44: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x234d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x234d48: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x234d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x234d4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x234d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x234d50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x234d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x234d54: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x234d54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x234d58: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x234d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x234d5c: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x234d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x234d60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x234d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234d64: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x234d64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x234d68: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x234d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x234d6c: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x234d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x234d70: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x234D70u;
    {
        const bool branch_taken_0x234d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D70u;
        // 0x234d74: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d70) {
            ctx->pc = 0x234D8Cu;
            goto label_234d8c;
        }
    }
    ctx->pc = 0x234D78u;
    // 0x234d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234d7c: 0x50820243  beql        $a0, $v0, . + 4 + (0x243 << 2)
    ctx->pc = 0x234D7Cu;
    {
        const bool branch_taken_0x234d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x234d7c) {
            ctx->pc = 0x234D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D7Cu;
            // 0x234d80: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23568Cu;
            goto label_23568c;
        }
    }
    ctx->pc = 0x234D84u;
    // 0x234d84: 0x100002b2  b           . + 4 + (0x2B2 << 2)
    ctx->pc = 0x234D84u;
    {
        const bool branch_taken_0x234d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D84u;
        // 0x234d88: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d84) {
            ctx->pc = 0x235850u;
            goto label_235850;
        }
    }
    ctx->pc = 0x234D8Cu;
label_234d8c:
    // 0x234d8c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x234d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x234d90: 0xc09d91a  jal         func_276468
    ctx->pc = 0x234D90u;
    SET_GPR_U32(ctx, 31, 0x234D98u);
    ctx->pc = 0x234D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D90u;
    // 0x234d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x234D90u, 0x234D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D98u;
label_234d98:
    // 0x234d98: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x234d98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x234d9c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x234d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x234da0: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x234da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x234da4: 0xae0005f8  sw          $zero, 0x5F8($s0)
    ctx->pc = 0x234da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 0));
    // 0x234da8: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x234da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x234dac: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x234dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x234db0: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x234db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x234db4: 0x2c82007d  sltiu       $v0, $a0, 0x7D
    ctx->pc = 0x234db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x234db8: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x234db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
    // 0x234dbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x234DBCu;
    {
        const bool branch_taken_0x234dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DBCu;
        // 0x234dc0: 0xae000588  sw          $zero, 0x588($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dbc) {
            ctx->pc = 0x234DE0u;
            goto label_234de0;
        }
    }
    ctx->pc = 0x234DC4u;
    // 0x234dc4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x234dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x234dc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x234dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x234dcc: 0x24429dc0  addiu       $v0, $v0, -0x6240
    ctx->pc = 0x234dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942144));
    // 0x234dd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x234dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234dd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x234dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234dd8: 0x800008  jr          $a0
    ctx->pc = 0x234DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234DE0u: goto label_234de0;
            case 0x234E24u: goto label_234e24;
            case 0x234E68u: goto label_234e68;
            case 0x234EACu: goto label_234eac;
            case 0x234EF0u: goto label_234ef0;
            case 0x234F38u: goto label_234f38;
            case 0x235044u: goto label_235044;
            case 0x23508Cu: goto label_23508c;
            case 0x2350ACu: goto label_2350ac;
            case 0x2350F4u: goto label_2350f4;
            case 0x23513Cu: goto label_23513c;
            case 0x235160u: goto label_235160;
            case 0x23525Cu: goto label_23525c;
            case 0x2352A0u: goto label_2352a0;
            case 0x235338u: goto label_235338;
            case 0x23537Cu: goto label_23537c;
            case 0x235400u: goto label_235400;
            case 0x235444u: goto label_235444;
            case 0x23547Cu: goto label_23547c;
            case 0x2354E4u: goto label_2354e4;
            case 0x235534u: goto label_235534;
            case 0x23557Cu: goto label_23557c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234DD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x234DE0u;
label_234de0:
    // 0x234de0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x234de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x234de4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x234de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234de8: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x234de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x234dec: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x234decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x234df0: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x234df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x234df4: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x234df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x234df8: 0x8c43050c  lw          $v1, 0x50C($v0)
    ctx->pc = 0x234df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1292)));
    // 0x234dfc: 0x8c450510  lw          $a1, 0x510($v0)
    ctx->pc = 0x234dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
    // 0x234e00: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x234e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234e04: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234E04u;
    SET_GPR_U32(ctx, 31, 0x234E0Cu);
    ctx->pc = 0x234E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E04u;
    // 0x234e08: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234E04u, 0x234E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E0Cu;
label_234e0c:
    // 0x234e0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x234e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234e10: 0x144301ed  bne         $v0, $v1, . + 4 + (0x1ED << 2)
    ctx->pc = 0x234E10u;
    {
        const bool branch_taken_0x234e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x234E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E10u;
        // 0x234e14: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e10) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x234E18u;
    // 0x234e18: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234e1c: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x234E1Cu;
    {
        const bool branch_taken_0x234e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E1Cu;
        // 0x234e20: 0x8c620514  lw          $v0, 0x514($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e1c) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x234E24u;
label_234e24:
    // 0x234e24: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x234e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x234e28: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x234e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234e2c: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x234e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x234e30: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x234e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x234e34: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x234e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x234e38: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x234e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x234e3c: 0x8c4307cc  lw          $v1, 0x7CC($v0)
    ctx->pc = 0x234e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1996)));
    // 0x234e40: 0x8c4507d0  lw          $a1, 0x7D0($v0)
    ctx->pc = 0x234e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2000)));
    // 0x234e44: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x234e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234e48: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234E48u;
    SET_GPR_U32(ctx, 31, 0x234E50u);
    ctx->pc = 0x234E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E48u;
    // 0x234e4c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234E48u, 0x234E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E50u;
label_234e50:
    // 0x234e50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x234e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234e54: 0x144301dc  bne         $v0, $v1, . + 4 + (0x1DC << 2)
    ctx->pc = 0x234E54u;
    {
        const bool branch_taken_0x234e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x234E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E54u;
        // 0x234e58: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e54) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x234E5Cu;
    // 0x234e5c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234e60: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x234E60u;
    {
        const bool branch_taken_0x234e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E60u;
        // 0x234e64: 0x8c6207d4  lw          $v0, 0x7D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e60) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x234E68u;
label_234e68:
    // 0x234e68: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x234e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x234e6c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x234e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234e70: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x234e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x234e74: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x234e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x234e78: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x234e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x234e7c: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x234e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x234e80: 0x8c432bd8  lw          $v1, 0x2BD8($v0)
    ctx->pc = 0x234e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11224)));
    // 0x234e84: 0x8c452bdc  lw          $a1, 0x2BDC($v0)
    ctx->pc = 0x234e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11228)));
    // 0x234e88: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x234e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234e8c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234E8Cu;
    SET_GPR_U32(ctx, 31, 0x234E94u);
    ctx->pc = 0x234E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E8Cu;
    // 0x234e90: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234E8Cu, 0x234E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E94u;
label_234e94:
    // 0x234e94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x234e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234e98: 0x144301cb  bne         $v0, $v1, . + 4 + (0x1CB << 2)
    ctx->pc = 0x234E98u;
    {
        const bool branch_taken_0x234e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x234E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E98u;
        // 0x234e9c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e98) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x234EA0u;
    // 0x234ea0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234ea4: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x234EA4u;
    {
        const bool branch_taken_0x234ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EA4u;
        // 0x234ea8: 0x8c622be0  lw          $v0, 0x2BE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ea4) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x234EACu;
label_234eac:
    // 0x234eac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x234eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x234eb0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x234eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234eb4: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x234eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x234eb8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x234eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x234ebc: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x234ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x234ec0: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x234ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x234ec4: 0x8c4336c4  lw          $v1, 0x36C4($v0)
    ctx->pc = 0x234ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14020)));
    // 0x234ec8: 0x8c4536c8  lw          $a1, 0x36C8($v0)
    ctx->pc = 0x234ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14024)));
    // 0x234ecc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x234eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234ed0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234ED0u;
    SET_GPR_U32(ctx, 31, 0x234ED8u);
    ctx->pc = 0x234ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ED0u;
    // 0x234ed4: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234ED0u, 0x234ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ED8u;
label_234ed8:
    // 0x234ed8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x234ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234edc: 0x144301ba  bne         $v0, $v1, . + 4 + (0x1BA << 2)
    ctx->pc = 0x234EDCu;
    {
        const bool branch_taken_0x234edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x234EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EDCu;
        // 0x234ee0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234edc) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x234EE4u;
    // 0x234ee4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234ee8: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x234EE8u;
    {
        const bool branch_taken_0x234ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EE8u;
        // 0x234eec: 0x8c6236cc  lw          $v0, 0x36CC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ee8) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x234EF0u;
label_234ef0:
    // 0x234ef0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x234ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x234ef4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x234ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x234ef8: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x234ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x234efc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x234efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x234f00: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x234f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234f04: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x234f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x234f08: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x234f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x234f0c: 0x8c430c5c  lw          $v1, 0xC5C($v0)
    ctx->pc = 0x234f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3164)));
    // 0x234f10: 0x8c450c60  lw          $a1, 0xC60($v0)
    ctx->pc = 0x234f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3168)));
    // 0x234f14: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x234f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234f18: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234F18u;
    SET_GPR_U32(ctx, 31, 0x234F20u);
    ctx->pc = 0x234F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F18u;
    // 0x234f1c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234F18u, 0x234F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F20u;
label_234f20:
    // 0x234f20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x234f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234f24: 0x144301a8  bne         $v0, $v1, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x234F24u;
    {
        const bool branch_taken_0x234f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x234F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F24u;
        // 0x234f28: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f24) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x234F2Cu;
    // 0x234f2c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234f30: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x234F30u;
    {
        const bool branch_taken_0x234f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F30u;
        // 0x234f34: 0x8c620c64  lw          $v0, 0xC64($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f30) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x234F38u;
label_234f38:
    // 0x234f38: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x234f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234f3c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x234f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x234f40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234f44: 0x0  nop
    ctx->pc = 0x234f44u;
    // NOP
    // 0x234f48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x234f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234f4c: 0x0  nop
    ctx->pc = 0x234f4cu;
    // NOP
    // 0x234f50: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x234F50u;
    {
        const bool branch_taken_0x234f50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F50u;
        // 0x234f54: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f50) {
            ctx->pc = 0x234F9Cu;
            goto label_234f9c;
        }
    }
    ctx->pc = 0x234F58u;
    // 0x234f58: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x234f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x234f5c: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x234f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x234f60: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x234f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x234f64: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x234f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234f68: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x234f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x234f6c: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x234f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x234f70: 0x8c43210c  lw          $v1, 0x210C($v0)
    ctx->pc = 0x234f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8460)));
    // 0x234f74: 0x8c452110  lw          $a1, 0x2110($v0)
    ctx->pc = 0x234f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8464)));
    // 0x234f78: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x234f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234f7c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234F7Cu;
    SET_GPR_U32(ctx, 31, 0x234F84u);
    ctx->pc = 0x234F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F7Cu;
    // 0x234f80: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234F7Cu, 0x234F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F84u;
label_234f84:
    // 0x234f84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x234f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234f88: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x234F88u;
    {
        const bool branch_taken_0x234f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x234F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F88u;
        // 0x234f8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f88) {
            ctx->pc = 0x23503Cu;
            goto label_23503c;
        }
    }
    ctx->pc = 0x234F90u;
    // 0x234f90: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234f94: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x234F94u;
    {
        const bool branch_taken_0x234f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F94u;
        // 0x234f98: 0x8c622114  lw          $v0, 0x2114($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f94) {
            ctx->pc = 0x235034u;
            goto label_235034;
        }
    }
    ctx->pc = 0x234F9Cu;
label_234f9c:
    // 0x234f9c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x234F9Cu;
    SET_GPR_U32(ctx, 31, 0x234FA4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x234F9Cu, 0x234FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FA4u;
label_234fa4:
    // 0x234fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x234fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x234fa8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x234FA8u;
    {
        const bool branch_taken_0x234fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FA8u;
        // 0x234fac: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fa8) {
            ctx->pc = 0x234FF4u;
            goto label_234ff4;
        }
    }
    ctx->pc = 0x234FB0u;
    // 0x234fb0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x234fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x234fb4: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x234fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x234fb8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x234fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x234fbc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x234fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234fc0: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x234fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x234fc4: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x234fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x234fc8: 0x8c4320cc  lw          $v1, 0x20CC($v0)
    ctx->pc = 0x234fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8396)));
    // 0x234fcc: 0x8c4520d0  lw          $a1, 0x20D0($v0)
    ctx->pc = 0x234fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8400)));
    // 0x234fd0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x234fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234fd4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234FD4u;
    SET_GPR_U32(ctx, 31, 0x234FDCu);
    ctx->pc = 0x234FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FD4u;
    // 0x234fd8: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234FD4u, 0x234FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FDCu;
label_234fdc:
    // 0x234fdc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x234fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234fe0: 0x14430179  bne         $v0, $v1, . + 4 + (0x179 << 2)
    ctx->pc = 0x234FE0u;
    {
        const bool branch_taken_0x234fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x234FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE0u;
        // 0x234fe4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fe0) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x234FE8u;
    // 0x234fe8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234fec: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x234FECu;
    {
        const bool branch_taken_0x234fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FECu;
        // 0x234ff0: 0x8c6220d4  lw          $v0, 0x20D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fec) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x234FF4u;
label_234ff4:
    // 0x234ff4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x234ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x234ff8: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x234ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x234ffc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x234ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x235000: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235004: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x235004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x235008: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x235008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x23500c: 0x8c4320f0  lw          $v1, 0x20F0($v0)
    ctx->pc = 0x23500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8432)));
    // 0x235010: 0x8c4520f4  lw          $a1, 0x20F4($v0)
    ctx->pc = 0x235010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8436)));
    // 0x235014: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x235014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235018: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x235018u;
    SET_GPR_U32(ctx, 31, 0x235020u);
    ctx->pc = 0x23501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235018u;
    // 0x23501c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x235018u, 0x235020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235020u;
label_235020:
    // 0x235020: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235024: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x235024u;
    {
        const bool branch_taken_0x235024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235024u;
        // 0x235028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235024) {
            ctx->pc = 0x23503Cu;
            goto label_23503c;
        }
    }
    ctx->pc = 0x23502Cu;
    // 0x23502c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235030: 0x8c6220f8  lw          $v0, 0x20F8($v1)
    ctx->pc = 0x235030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8440)));
label_235034:
    // 0x235034: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x235034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23503c:
    // 0x23503c: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x23503Cu;
    {
        const bool branch_taken_0x23503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23503Cu;
        // 0x235040: 0xae0205f8  sw          $v0, 0x5F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23503c) {
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x235044u;
label_235044:
    // 0x235044: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x235044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x235048: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x235048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23504c: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x23504cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x235050: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x235050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x235054: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235058: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x235058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x23505c: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x23505cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x235060: 0x8c431a58  lw          $v1, 0x1A58($v0)
    ctx->pc = 0x235060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6744)));
    // 0x235064: 0x8c451a5c  lw          $a1, 0x1A5C($v0)
    ctx->pc = 0x235064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6748)));
    // 0x235068: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x235068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23506c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23506Cu;
    SET_GPR_U32(ctx, 31, 0x235074u);
    ctx->pc = 0x235070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23506Cu;
    // 0x235070: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23506Cu, 0x235074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235074u;
label_235074:
    // 0x235074: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235078: 0x14430153  bne         $v0, $v1, . + 4 + (0x153 << 2)
    ctx->pc = 0x235078u;
    {
        const bool branch_taken_0x235078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235078u;
        // 0x23507c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235078) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x235080u;
    // 0x235080: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x235080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235084: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x235084u;
    {
        const bool branch_taken_0x235084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235084u;
        // 0x235088: 0x8c621a60  lw          $v0, 0x1A60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235084) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x23508Cu;
label_23508c:
    // 0x23508c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x23508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x235090: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x235090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x235094: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x235094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x235098: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23509c: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x23509cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x2350a0: 0x8c4330f0  lw          $v1, 0x30F0($v0)
    ctx->pc = 0x2350a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12528)));
    // 0x2350a4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2350A4u;
    {
        const bool branch_taken_0x2350a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2350A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350A4u;
        // 0x2350a8: 0x8c4430f4  lw          $a0, 0x30F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350a4) {
            ctx->pc = 0x235154u;
            goto label_235154;
        }
    }
    ctx->pc = 0x2350ACu;
label_2350ac:
    // 0x2350ac: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2350acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2350b0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2350b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2350b4: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x2350b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x2350b8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2350b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2350bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2350bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2350c0: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x2350c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x2350c4: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x2350c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x2350c8: 0x8c4333c0  lw          $v1, 0x33C0($v0)
    ctx->pc = 0x2350c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13248)));
    // 0x2350cc: 0x8c4533c4  lw          $a1, 0x33C4($v0)
    ctx->pc = 0x2350ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13252)));
    // 0x2350d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2350d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2350d4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2350D4u;
    SET_GPR_U32(ctx, 31, 0x2350DCu);
    ctx->pc = 0x2350D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350D4u;
    // 0x2350d8: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2350D4u, 0x2350DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350DCu;
label_2350dc:
    // 0x2350dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2350dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2350e0: 0x14430139  bne         $v0, $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x2350E0u;
    {
        const bool branch_taken_0x2350e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2350E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350E0u;
        // 0x2350e4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350e0) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x2350E8u;
    // 0x2350e8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2350e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2350ec: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x2350ECu;
    {
        const bool branch_taken_0x2350ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350ECu;
        // 0x2350f0: 0x8c6233c8  lw          $v0, 0x33C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350ec) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x2350F4u;
label_2350f4:
    // 0x2350f4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2350f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2350f8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2350f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2350fc: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x2350fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x235100: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x235100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x235104: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235108: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x235108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x23510c: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x23510cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x235110: 0x8c4339d0  lw          $v1, 0x39D0($v0)
    ctx->pc = 0x235110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14800)));
    // 0x235114: 0x8c4539d4  lw          $a1, 0x39D4($v0)
    ctx->pc = 0x235114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14804)));
    // 0x235118: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x235118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23511c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23511Cu;
    SET_GPR_U32(ctx, 31, 0x235124u);
    ctx->pc = 0x235120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23511Cu;
    // 0x235120: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23511Cu, 0x235124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235124u;
label_235124:
    // 0x235124: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235128: 0x14430127  bne         $v0, $v1, . + 4 + (0x127 << 2)
    ctx->pc = 0x235128u;
    {
        const bool branch_taken_0x235128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235128u;
        // 0x23512c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235128) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x235130u;
    // 0x235130: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x235130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235134: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x235134u;
    {
        const bool branch_taken_0x235134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235134u;
        // 0x235138: 0x8c6239d8  lw          $v0, 0x39D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235134) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x23513Cu;
label_23513c:
    // 0x23513c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x23513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x235140: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235144: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x235144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x235148: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x235148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x23514c: 0x8c430fec  lw          $v1, 0xFEC($v0)
    ctx->pc = 0x23514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4076)));
    // 0x235150: 0x8c440ff0  lw          $a0, 0xFF0($v0)
    ctx->pc = 0x235150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4080)));
label_235154:
    // 0x235154: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x235154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235158: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x235158u;
    {
        const bool branch_taken_0x235158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235158u;
        // 0x23515c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235158) {
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x235160u;
label_235160:
    // 0x235160: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x235160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x235164: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235168: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x235168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x23516c: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x23516cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x235170: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x235170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x235174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235178: 0x8c431d90  lw          $v1, 0x1D90($v0)
    ctx->pc = 0x235178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7568)));
    // 0x23517c: 0x8c441d94  lw          $a0, 0x1D94($v0)
    ctx->pc = 0x23517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7572)));
    // 0x235180: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x235180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235184: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x235184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x235188: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23518c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x23518cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x235190: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x235190u;
    SET_GPR_U32(ctx, 31, 0x235198u);
    ctx->pc = 0x235194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235190u;
    // 0x235194: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x235190u, 0x235198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235198u;
label_235198:
    // 0x235198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23519c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x23519cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2351a0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2351A0u;
    SET_GPR_U32(ctx, 31, 0x2351A8u);
    ctx->pc = 0x2351A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351A0u;
    // 0x2351a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2351A0u, 0x2351A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351A8u;
label_2351a8:
    // 0x2351a8: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2351a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2351ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2351acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2351b0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2351b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2351b4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2351b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2351b8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2351b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2351bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2351bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2351c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2351c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2351c4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2351c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2351c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2351c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2351cc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2351ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2351d0: 0x13a40006  beq         $sp, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2351D0u;
    {
        const bool branch_taken_0x2351d0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        ctx->pc = 0x2351D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351D0u;
        // 0x2351d4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351d0) {
            ctx->pc = 0x2351ECu;
            goto label_2351ec;
        }
    }
    ctx->pc = 0x2351D8u;
    // 0x2351d8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2351d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2351dc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2351dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2351e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2351e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2351e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2351e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2351e8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2351e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2351ec:
    // 0x2351ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2351ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2351f0: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2351F0u;
    SET_GPR_U32(ctx, 31, 0x2351F8u);
    ctx->pc = 0x2351F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351F0u;
    // 0x2351f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2351F0u, 0x2351F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351F8u;
label_2351f8:
    // 0x2351f8: 0x0  nop
    ctx->pc = 0x2351f8u;
    // NOP
    // 0x2351fc: 0x0  nop
    ctx->pc = 0x2351fcu;
    // NOP
    // 0x235200: 0x46000044  c1          0x44
    ctx->pc = 0x235200u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x235204: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x235204u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235208: 0x0  nop
    ctx->pc = 0x235208u;
    // NOP
    // 0x23520c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x23520Cu;
    {
        const bool branch_taken_0x23520c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23520c) {
            ctx->pc = 0x235220u;
            goto label_235220;
        }
    }
    ctx->pc = 0x235214u;
    // 0x235214: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x235214u;
    SET_GPR_U32(ctx, 31, 0x23521Cu);
    ctx->pc = 0x235218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235214u;
    // 0x235218: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x235214u, 0x23521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23521Cu;
label_23521c:
    // 0x23521c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x23521cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_235220:
    // 0x235220: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x235220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x235224: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235228: 0x0  nop
    ctx->pc = 0x235228u;
    // NOP
    // 0x23522c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23522cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235230: 0x0  nop
    ctx->pc = 0x235230u;
    // NOP
    // 0x235234: 0x450000e3  bc1f        . + 4 + (0xE3 << 2)
    ctx->pc = 0x235234u;
    {
        const bool branch_taken_0x235234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235234u;
        // 0x235238: 0x26020580  addiu       $v0, $s0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235234) {
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x23523Cu;
    // 0x23523c: 0x105d00e1  beq         $v0, $sp, . + 4 + (0xE1 << 2)
    ctx->pc = 0x23523Cu;
    {
        const bool branch_taken_0x23523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x235240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23523Cu;
        // 0x235240: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23523c) {
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x235244u;
    // 0x235244: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x235244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235248: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x235248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x23524c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x23524cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x235250: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x235250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235254: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x235254u;
    {
        const bool branch_taken_0x235254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235254u;
        // 0x235258: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235254) {
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x23525Cu;
label_23525c:
    // 0x23525c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x23525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x235260: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235264: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x235264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x235268: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x235268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x23526c: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x23526cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x235270: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x235270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x235274: 0x8c432eec  lw          $v1, 0x2EEC($v0)
    ctx->pc = 0x235274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12012)));
    // 0x235278: 0x8c452ef0  lw          $a1, 0x2EF0($v0)
    ctx->pc = 0x235278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12016)));
    // 0x23527c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23527cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235280: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x235280u;
    SET_GPR_U32(ctx, 31, 0x235288u);
    ctx->pc = 0x235284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235280u;
    // 0x235284: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x235280u, 0x235288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235288u;
label_235288:
    // 0x235288: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23528c: 0x144300ce  bne         $v0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x23528Cu;
    {
        const bool branch_taken_0x23528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23528Cu;
        // 0x235290: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23528c) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x235294u;
    // 0x235294: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x235294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235298: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x235298u;
    {
        const bool branch_taken_0x235298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235298u;
        // 0x23529c: 0x8c622ef4  lw          $v0, 0x2EF4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235298) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x2352A0u;
label_2352a0:
    // 0x2352a0: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2352a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2352a4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2352a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2352a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2352a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2352ac: 0x0  nop
    ctx->pc = 0x2352acu;
    // NOP
    // 0x2352b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2352b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2352b4: 0x0  nop
    ctx->pc = 0x2352b4u;
    // NOP
    // 0x2352b8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2352B8u;
    {
        const bool branch_taken_0x2352b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2352BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352B8u;
        // 0x2352bc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352b8) {
            ctx->pc = 0x2352F4u;
            goto label_2352f4;
        }
    }
    ctx->pc = 0x2352C0u;
    // 0x2352c0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2352c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2352c4: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x2352c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2352c8: 0x8c652400  lw          $a1, 0x2400($v1)
    ctx->pc = 0x2352c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9216)));
    // 0x2352cc: 0x8c622404  lw          $v0, 0x2404($v1)
    ctx->pc = 0x2352ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9220)));
    // 0x2352d0: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2352d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2352d4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2352D4u;
    SET_GPR_U32(ctx, 31, 0x2352DCu);
    ctx->pc = 0x2352D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2352D4u;
    // 0x2352d8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2352D4u, 0x2352DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352DCu;
label_2352dc:
    // 0x2352dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2352dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2352e0: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2352E0u;
    {
        const bool branch_taken_0x2352e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2352E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352E0u;
        // 0x2352e4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352e0) {
            ctx->pc = 0x23532Cu;
            goto label_23532c;
        }
    }
    ctx->pc = 0x2352E8u;
    // 0x2352e8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2352e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2352ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2352ECu;
    {
        const bool branch_taken_0x2352ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2352F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352ECu;
        // 0x2352f0: 0x8c622408  lw          $v0, 0x2408($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352ec) {
            ctx->pc = 0x235324u;
            goto label_235324;
        }
    }
    ctx->pc = 0x2352F4u;
label_2352f4:
    // 0x2352f4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2352f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2352f8: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x2352f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2352fc: 0x8c652414  lw          $a1, 0x2414($v1)
    ctx->pc = 0x2352fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9236)));
    // 0x235300: 0x8c622418  lw          $v0, 0x2418($v1)
    ctx->pc = 0x235300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9240)));
    // 0x235304: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x235304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x235308: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x235308u;
    SET_GPR_U32(ctx, 31, 0x235310u);
    ctx->pc = 0x23530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235308u;
    // 0x23530c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x235308u, 0x235310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235310u;
label_235310:
    // 0x235310: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235314: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x235314u;
    {
        const bool branch_taken_0x235314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235314u;
        // 0x235318: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235314) {
            ctx->pc = 0x23532Cu;
            goto label_23532c;
        }
    }
    ctx->pc = 0x23531Cu;
    // 0x23531c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235320: 0x8c62241c  lw          $v0, 0x241C($v1)
    ctx->pc = 0x235320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9244)));
label_235324:
    // 0x235324: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x235324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235328: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x235328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_23532c:
    // 0x23532c: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x23532cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x235330: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x235330u;
    {
        const bool branch_taken_0x235330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235330u;
        // 0x235334: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235330) {
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x235338u;
label_235338:
    // 0x235338: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x235338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23533c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235340: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x235340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x235344: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x235344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x235348: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x235348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x23534c: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x23534cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x235350: 0x8c431b4c  lw          $v1, 0x1B4C($v0)
    ctx->pc = 0x235350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6988)));
    // 0x235354: 0x8c451b50  lw          $a1, 0x1B50($v0)
    ctx->pc = 0x235354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6992)));
    // 0x235358: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x235358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23535c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23535Cu;
    SET_GPR_U32(ctx, 31, 0x235364u);
    ctx->pc = 0x235360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23535Cu;
    // 0x235360: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23535Cu, 0x235364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235364u;
label_235364:
    // 0x235364: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235368: 0x14430097  bne         $v0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x235368u;
    {
        const bool branch_taken_0x235368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235368u;
        // 0x23536c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235368) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x235370u;
    // 0x235370: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x235370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235374: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x235374u;
    {
        const bool branch_taken_0x235374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235374u;
        // 0x235378: 0x8c621b54  lw          $v0, 0x1B54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235374) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x23537Cu;
label_23537c:
    // 0x23537c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x23537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x235380: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x235380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235384: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x235384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x235388: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x235388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x23538c: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x23538cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x235390: 0x24b49b70  addiu       $s4, $a1, -0x6490
    ctx->pc = 0x235390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x235394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x235394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235398: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x235398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23539c: 0x8c661544  lw          $a2, 0x1544($v1)
    ctx->pc = 0x23539cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5444)));
    // 0x2353a0: 0x8c621548  lw          $v0, 0x1548($v1)
    ctx->pc = 0x2353a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5448)));
    // 0x2353a4: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x2353a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2353a8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2353A8u;
    SET_GPR_U32(ctx, 31, 0x2353B0u);
    ctx->pc = 0x2353ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353A8u;
    // 0x2353ac: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2353A8u, 0x2353B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353B0u;
label_2353b0:
    // 0x2353b0: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2353B0u;
    {
        const bool branch_taken_0x2353b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2353b0) {
            ctx->pc = 0x2353B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2353B0u;
            // 0x2353b4: 0x8e0206f0  lw          $v0, 0x6F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353C8u;
            goto label_2353c8;
        }
    }
    ctx->pc = 0x2353B8u;
    // 0x2353b8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2353b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2353bc: 0x8c62154c  lw          $v0, 0x154C($v1)
    ctx->pc = 0x2353bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5452)));
    // 0x2353c0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2353c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2353c4: 0x8e0206f0  lw          $v0, 0x6F0($s0)
    ctx->pc = 0x2353c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
label_2353c8:
    // 0x2353c8: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2353C8u;
    {
        const bool branch_taken_0x2353c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2353CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353C8u;
        // 0x2353cc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353c8) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x2353D0u;
    // 0x2353d0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2353D0u;
    SET_GPR_U32(ctx, 31, 0x2353D8u);
    ctx->pc = 0x2353D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353D0u;
    // 0x2353d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2353D0u, 0x2353D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353D8u;
label_2353d8:
    // 0x2353d8: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2353D8u;
    {
        const bool branch_taken_0x2353d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2353DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353D8u;
        // 0x2353dc: 0x8e0406f0  lw          $a0, 0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353d8) {
            ctx->pc = 0x2353F0u;
            goto label_2353f0;
        }
    }
    ctx->pc = 0x2353E0u;
    // 0x2353e0: 0xc074158  jal         func_1D0560
    ctx->pc = 0x2353E0u;
    SET_GPR_U32(ctx, 31, 0x2353E8u);
    ctx->pc = 0x2353E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353E0u;
    // 0x2353e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0560u, 0x2353E0u, 0x2353E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353E8u;
label_2353e8:
    // 0x2353e8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2353E8u;
    {
        const bool branch_taken_0x2353e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2353ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353E8u;
        // 0x2353ec: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353e8) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x2353F0u;
label_2353f0:
    // 0x2353f0: 0xc074158  jal         func_1D0560
    ctx->pc = 0x2353F0u;
    SET_GPR_U32(ctx, 31, 0x2353F8u);
    ctx->pc = 0x2353F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353F0u;
    // 0x2353f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0560u, 0x2353F0u, 0x2353F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353F8u;
label_2353f8:
    // 0x2353f8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2353F8u;
    {
        const bool branch_taken_0x2353f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2353FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353F8u;
        // 0x2353fc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353f8) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x235400u;
label_235400:
    // 0x235400: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x235400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x235404: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235408: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x235408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x23540c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x23540cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x235410: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x235410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x235414: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x235414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x235418: 0x8c431460  lw          $v1, 0x1460($v0)
    ctx->pc = 0x235418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5216)));
    // 0x23541c: 0x8c451464  lw          $a1, 0x1464($v0)
    ctx->pc = 0x23541cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5220)));
    // 0x235420: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x235420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235424: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x235424u;
    SET_GPR_U32(ctx, 31, 0x23542Cu);
    ctx->pc = 0x235428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235424u;
    // 0x235428: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x235424u, 0x23542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23542Cu;
label_23542c:
    // 0x23542c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235430: 0x14430065  bne         $v0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x235430u;
    {
        const bool branch_taken_0x235430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235430u;
        // 0x235434: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235430) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x235438u;
    // 0x235438: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x235438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23543c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x23543Cu;
    {
        const bool branch_taken_0x23543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23543Cu;
        // 0x235440: 0x8c621468  lw          $v0, 0x1468($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23543c) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x235444u;
label_235444:
    // 0x235444: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x235444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235448: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x235448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x23544c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23544cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235450: 0x0  nop
    ctx->pc = 0x235450u;
    // NOP
    // 0x235454: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235458: 0x0  nop
    ctx->pc = 0x235458u;
    // NOP
    // 0x23545c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x23545Cu;
    {
        const bool branch_taken_0x23545c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x235460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23545Cu;
        // 0x235460: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23545c) {
            ctx->pc = 0x23549Cu;
            goto label_23549c;
        }
    }
    ctx->pc = 0x235464u;
    // 0x235464: 0x9202186b  lbu         $v0, 0x186B($s0)
    ctx->pc = 0x235464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6251)));
    // 0x235468: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x235468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x23546c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23546Cu;
    {
        const bool branch_taken_0x23546c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23546Cu;
        // 0x235470: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23546c) {
            ctx->pc = 0x2354A0u;
            goto label_2354a0;
        }
    }
    ctx->pc = 0x235474u;
    // 0x235474: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x235474u;
    {
        const bool branch_taken_0x235474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235474) {
            ctx->pc = 0x2354ECu;
            goto label_2354ec;
        }
    }
    ctx->pc = 0x23547Cu;
label_23547c:
    // 0x23547c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x23547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235480: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x235480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x235484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235488: 0x0  nop
    ctx->pc = 0x235488u;
    // NOP
    // 0x23548c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23548cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235490: 0x0  nop
    ctx->pc = 0x235490u;
    // NOP
    // 0x235494: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x235494u;
    {
        const bool branch_taken_0x235494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235494u;
        // 0x235498: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235494) {
            ctx->pc = 0x2354E4u;
            goto label_2354e4;
        }
    }
    ctx->pc = 0x23549Cu;
label_23549c:
    // 0x23549c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_2354a0:
    // 0x2354a0: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x2354a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x2354a4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2354a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2354a8: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x2354a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x2354ac: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x2354acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x2354b0: 0x8c431460  lw          $v1, 0x1460($v0)
    ctx->pc = 0x2354b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5216)));
    // 0x2354b4: 0x8c451464  lw          $a1, 0x1464($v0)
    ctx->pc = 0x2354b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5220)));
    // 0x2354b8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2354b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2354bc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2354BCu;
    SET_GPR_U32(ctx, 31, 0x2354C4u);
    ctx->pc = 0x2354C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354BCu;
    // 0x2354c0: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2354BCu, 0x2354C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354C4u;
label_2354c4:
    // 0x2354c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2354c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2354c8: 0x5443003e  bnel        $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2354C8u;
    {
        const bool branch_taken_0x2354c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2354c8) {
            ctx->pc = 0x2354CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2354C8u;
            // 0x2354cc: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x2354D0u;
    // 0x2354d0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2354d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2354d4: 0x8c621468  lw          $v0, 0x1468($v1)
    ctx->pc = 0x2354d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5224)));
    // 0x2354d8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2354d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2354dc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2354DCu;
    {
        const bool branch_taken_0x2354dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354DCu;
        // 0x2354e0: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354dc) {
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x2354E4u;
label_2354e4:
    // 0x2354e4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2354e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2354e8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2354e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_2354ec:
    // 0x2354ec: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x2354ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x2354f0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2354f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2354f4: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x2354f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x2354f8: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x2354f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x2354fc: 0x8c431494  lw          $v1, 0x1494($v0)
    ctx->pc = 0x2354fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5268)));
    // 0x235500: 0x8c451498  lw          $a1, 0x1498($v0)
    ctx->pc = 0x235500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5272)));
    // 0x235504: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x235504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235508: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x235508u;
    SET_GPR_U32(ctx, 31, 0x235510u);
    ctx->pc = 0x23550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235508u;
    // 0x23550c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x235508u, 0x235510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235510u;
label_235510:
    // 0x235510: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235514: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x235514u;
    {
        const bool branch_taken_0x235514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235514u;
        // 0x235518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235514) {
            ctx->pc = 0x23552Cu;
            goto label_23552c;
        }
    }
    ctx->pc = 0x23551Cu;
    // 0x23551c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235520: 0x8c62149c  lw          $v0, 0x149C($v1)
    ctx->pc = 0x235520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5276)));
    // 0x235524: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x235524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23552c:
    // 0x23552c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x23552Cu;
    {
        const bool branch_taken_0x23552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23552Cu;
        // 0x235530: 0xa20202f7  sb          $v0, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23552c) {
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x235534u;
label_235534:
    // 0x235534: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x235534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x235538: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x235538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23553c: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x23553cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x235540: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x235540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x235544: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235548: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x235548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x23554c: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x23554cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x235550: 0x8c433bcc  lw          $v1, 0x3BCC($v0)
    ctx->pc = 0x235550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15308)));
    // 0x235554: 0x8c453bd0  lw          $a1, 0x3BD0($v0)
    ctx->pc = 0x235554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15312)));
    // 0x235558: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x235558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23555c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23555Cu;
    SET_GPR_U32(ctx, 31, 0x235564u);
    ctx->pc = 0x235560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23555Cu;
    // 0x235560: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23555Cu, 0x235564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235564u;
label_235564:
    // 0x235564: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x235564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235568: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x235568u;
    {
        const bool branch_taken_0x235568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235568u;
        // 0x23556c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235568) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x235570u;
    // 0x235570: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x235570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235574: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x235574u;
    {
        const bool branch_taken_0x235574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235574u;
        // 0x235578: 0x8c623bd4  lw          $v0, 0x3BD4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235574) {
            ctx->pc = 0x2355C0u;
            goto label_2355c0;
        }
    }
    ctx->pc = 0x23557Cu;
label_23557c:
    // 0x23557c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x23557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x235580: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x235580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x235584: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x235584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x235588: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x235588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x23558c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235590: 0x24a49b70  addiu       $a0, $a1, -0x6490
    ctx->pc = 0x235590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x235594: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x235594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x235598: 0x8c433b2c  lw          $v1, 0x3B2C($v0)
    ctx->pc = 0x235598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15148)));
    // 0x23559c: 0x8c453b30  lw          $a1, 0x3B30($v0)
    ctx->pc = 0x23559cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15152)));
    // 0x2355a0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2355a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2355a4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2355A4u;
    SET_GPR_U32(ctx, 31, 0x2355ACu);
    ctx->pc = 0x2355A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355A4u;
    // 0x2355a8: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2355A4u, 0x2355ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355ACu;
label_2355ac:
    // 0x2355ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2355acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2355b0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2355B0u;
    {
        const bool branch_taken_0x2355b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2355B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355B0u;
        // 0x2355b4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355b0) {
            ctx->pc = 0x2355C8u;
            goto label_2355c8;
        }
    }
    ctx->pc = 0x2355B8u;
    // 0x2355b8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2355b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2355bc: 0x8c623b34  lw          $v0, 0x3B34($v1)
    ctx->pc = 0x2355bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15156)));
label_2355c0:
    // 0x2355c0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2355c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2355c4:
    // 0x2355c4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2355c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2355c8:
    // 0x2355c8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2355C8u;
    SET_GPR_U32(ctx, 31, 0x2355D0u);
    ctx->pc = 0x2355CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355C8u;
    // 0x2355cc: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2355C8u, 0x2355D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355D0u;
label_2355d0:
    // 0x2355d0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2355d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2355d4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2355d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2355d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2355D8u;
    {
        const bool branch_taken_0x2355d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2355DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D8u;
        // 0x2355dc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355d8) {
            ctx->pc = 0x2355F8u;
            goto label_2355f8;
        }
    }
    ctx->pc = 0x2355E0u;
    // 0x2355e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2355e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2355e4: 0x24429fc0  addiu       $v0, $v0, -0x6040
    ctx->pc = 0x2355e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942656));
    // 0x2355e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2355e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2355ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2355ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2355f0: 0x800008  jr          $a0
    ctx->pc = 0x2355F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2355F8u: goto label_2355f8;
            case 0x235610u: goto label_235610;
            case 0x23562Cu: goto label_23562c;
            case 0x235650u: goto label_235650;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2355F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2355F8u;
label_2355f8:
    // 0x2355f8: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x2355f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2355fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2355fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x235600: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x235600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x235604: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235608: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x235608u;
    {
        const bool branch_taken_0x235608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235608u;
        // 0x23560c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235608) {
            ctx->pc = 0x235648u;
            goto label_235648;
        }
    }
    ctx->pc = 0x235610u;
label_235610:
    // 0x235610: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x235610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x235614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x235618: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x235618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x23561c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23561cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x235620: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x235624u;
    {
        const bool branch_taken_0x235624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235624u;
        // 0x235628: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235624) {
            ctx->pc = 0x235648u;
            goto label_235648;
        }
    }
    ctx->pc = 0x23562Cu;
label_23562c:
    // 0x23562c: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x23562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x235630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x235634: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x235634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x235638: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x235638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x23563c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23563cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235640: 0x0  nop
    ctx->pc = 0x235640u;
    // NOP
    // 0x235644: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x235644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_235648:
    // 0x235648: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23564c: 0xe60105f0  swc1        $f1, 0x5F0($s0)
    ctx->pc = 0x23564cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1520), bits); }
label_235650:
    // 0x235650: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x235650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x235654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235658: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x235658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23565c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x23565cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235664: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x235664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x235668: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x235668u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23566c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23566Cu;
    SET_GPR_U32(ctx, 31, 0x235674u);
    ctx->pc = 0x235670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23566Cu;
    // 0x235670: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23566Cu, 0x235674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235674u;
label_235674:
    // 0x235674: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x235674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x235678: 0xe614060c  swc1        $f20, 0x60C($s0)
    ctx->pc = 0x235678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1548), bits); }
    // 0x23567c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x235680: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x235680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x235684: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x235684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x235688: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x235688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23568c:
    // 0x23568c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x23568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235690: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x235690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x235694: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x235694u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235698: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x235698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23569c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x23569cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2356a0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2356a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2356a4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2356a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2356a8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2356a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2356ac: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2356acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2356b0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2356b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2356b4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2356b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2356b8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2356b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2356bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2356bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2356c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2356c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2356c4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2356c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2356c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2356c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2356cc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2356ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2356d0: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2356d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2356d4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2356d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2356d8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2356d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2356dc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2356dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2356e0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2356e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2356e4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2356e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2356e8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2356e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2356ec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2356ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2356f0: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2356F0u;
    {
        const bool branch_taken_0x2356f0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2356F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356F0u;
        // 0x2356f4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356f0) {
            ctx->pc = 0x23570Cu;
            goto label_23570c;
        }
    }
    ctx->pc = 0x2356F8u;
    // 0x2356f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2356f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2356fc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2356fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235700: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x235700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x235704: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x235704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x235708: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x235708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_23570c:
    // 0x23570c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x23570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x235710: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x235710u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235714: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x235714u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235718: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x235718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23571c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x23571cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x235720: 0xda040580  lqc2        $vf4, 0x580($s0)
    ctx->pc = 0x235720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x235724: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x235724u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235728: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x235728u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23572c: 0xfa040580  sqc2        $vf4, 0x580($s0)
    ctx->pc = 0x23572cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x235730: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x235730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x235734: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x235734u;
    {
        const bool branch_taken_0x235734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235734u;
        // 0x235738: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235734) {
            ctx->pc = 0x235764u;
            goto label_235764;
        }
    }
    ctx->pc = 0x23573Cu;
    // 0x23573c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23573Cu;
    SET_GPR_U32(ctx, 31, 0x235744u);
    ctx->pc = 0x235740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23573Cu;
    // 0x235740: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23573Cu, 0x235744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235744u;
label_235744:
    // 0x235744: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x235744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23574c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x23574cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x235750: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x235750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x235754: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x235754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235758: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x235758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23575c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23575Cu;
    SET_GPR_U32(ctx, 31, 0x235764u);
    ctx->pc = 0x235760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23575Cu;
    // 0x235760: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23575Cu, 0x235764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235764u;
label_235764:
    // 0x235764: 0x8e0405f4  lw          $a0, 0x5F4($s0)
    ctx->pc = 0x235764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x235768: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235768u;
    {
        const bool branch_taken_0x235768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235768u;
        // 0x23576c: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235768) {
            ctx->pc = 0x235784u;
            goto label_235784;
        }
    }
    ctx->pc = 0x235770u;
    // 0x235770: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x235770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x235774: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x235774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x235778: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x235778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23577c: 0xae0405f4  sw          $a0, 0x5F4($s0)
    ctx->pc = 0x23577cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 4));
    // 0x235780: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x235780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_235784:
    // 0x235784: 0xc055f06  jal         func_157C18
    ctx->pc = 0x235784u;
    SET_GPR_U32(ctx, 31, 0x23578Cu);
    ctx->pc = 0x235788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235784u;
    // 0x235788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x235784u, 0x23578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23578Cu;
label_23578c:
    // 0x23578c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23578Cu;
    {
        const bool branch_taken_0x23578c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23578Cu;
        // 0x235790: 0x24020226  addiu       $v0, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23578c) {
            ctx->pc = 0x2357ECu;
            goto label_2357ec;
        }
    }
    ctx->pc = 0x235794u;
    // 0x235794: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x235794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x235798: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x235798u;
    {
        const bool branch_taken_0x235798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235798u;
        // 0x23579c: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235798) {
            ctx->pc = 0x2357E4u;
            goto label_2357e4;
        }
    }
    ctx->pc = 0x2357A0u;
    // 0x2357a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2357A0u;
    {
        const bool branch_taken_0x2357a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357A0u;
        // 0x2357a4: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357a0) {
            ctx->pc = 0x2357C0u;
            goto label_2357c0;
        }
    }
    ctx->pc = 0x2357A8u;
    // 0x2357a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2357A8u;
    {
        const bool branch_taken_0x2357a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357A8u;
        // 0x2357ac: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357a8) {
            ctx->pc = 0x2357D4u;
            goto label_2357d4;
        }
    }
    ctx->pc = 0x2357B0u;
    // 0x2357b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2357B0u;
    {
        const bool branch_taken_0x2357b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2357b0) {
            ctx->pc = 0x2357D4u;
            goto label_2357d4;
        }
    }
    ctx->pc = 0x2357B8u;
    // 0x2357b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2357B8u;
    {
        const bool branch_taken_0x2357b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2357b8) {
            ctx->pc = 0x2357E4u;
            goto label_2357e4;
        }
    }
    ctx->pc = 0x2357C0u;
label_2357c0:
    // 0x2357c0: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x2357c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x2357c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2357C4u;
    {
        const bool branch_taken_0x2357c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357C4u;
        // 0x2357c8: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357c4) {
            ctx->pc = 0x2357D4u;
            goto label_2357d4;
        }
    }
    ctx->pc = 0x2357CCu;
    // 0x2357cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2357CCu;
    {
        const bool branch_taken_0x2357cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2357cc) {
            ctx->pc = 0x2357E4u;
            goto label_2357e4;
        }
    }
    ctx->pc = 0x2357D4u;
label_2357d4:
    // 0x2357d4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2357D4u;
    SET_GPR_U32(ctx, 31, 0x2357DCu);
    ctx->pc = 0x2357D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357D4u;
    // 0x2357d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2357D4u, 0x2357DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357DCu;
label_2357dc:
    // 0x2357dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2357DCu;
    {
        const bool branch_taken_0x2357dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357DCu;
        // 0x2357e0: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357dc) {
            ctx->pc = 0x2357F0u;
            goto label_2357f0;
        }
    }
    ctx->pc = 0x2357E4u;
label_2357e4:
    // 0x2357e4: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x2357E4u;
    SET_GPR_U32(ctx, 31, 0x2357ECu);
    ctx->pc = 0x2357E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357E4u;
    // 0x2357e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x2357E4u, 0x2357ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357ECu;
label_2357ec:
    // 0x2357ec: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2357ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2357f0:
    // 0x2357f0: 0x3c013fd8  lui         $at, 0x3FD8
    ctx->pc = 0x2357f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16344 << 16));
    // 0x2357f4: 0x342151ea  ori         $at, $at, 0x51EA
    ctx->pc = 0x2357f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20970);
    // 0x2357f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2357f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2357fc: 0x0  nop
    ctx->pc = 0x2357fcu;
    // NOP
    // 0x235800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235804: 0x0  nop
    ctx->pc = 0x235804u;
    // NOP
    // 0x235808: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x235808u;
    {
        const bool branch_taken_0x235808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x235808) {
            ctx->pc = 0x23582Cu;
            goto label_23582c;
        }
    }
    ctx->pc = 0x235810u;
    // 0x235810: 0xc6000338  lwc1        $f0, 0x338($s0)
    ctx->pc = 0x235810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235814: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x235814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x235818: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x235818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x23581c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23581cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235820: 0x0  nop
    ctx->pc = 0x235820u;
    // NOP
    // 0x235824: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x235824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x235828: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x235828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_23582c:
    // 0x23582c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23582cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235830: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x235830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x235834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235838: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x235838u;
    SET_GPR_U32(ctx, 31, 0x235840u);
    ctx->pc = 0x23583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235838u;
    // 0x23583c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x235838u, 0x235840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235840u;
label_235840:
    // 0x235840: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x235840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x235844: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x235844u;
    SET_GPR_U32(ctx, 31, 0x23584Cu);
    ctx->pc = 0x235848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235844u;
    // 0x235848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x235844u, 0x23584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23584Cu;
label_23584c:
    // 0x23584c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x23584cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_235850:
    // 0x235850: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x235850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x235854: 0x5040011e  beql        $v0, $zero, . + 4 + (0x11E << 2)
    ctx->pc = 0x235854u;
    {
        const bool branch_taken_0x235854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235854) {
            ctx->pc = 0x235858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235854u;
            // 0x235858: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235CD0u;
            goto label_235cd0;
        }
    }
    ctx->pc = 0x23585Cu;
    // 0x23585c: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x23585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x235860: 0xc09c36c  jal         func_270DB0
    ctx->pc = 0x235860u;
    SET_GPR_U32(ctx, 31, 0x235868u);
    ctx->pc = 0x235864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235860u;
    // 0x235864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270DB0u, 0x235860u, 0x235868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235868u;
label_235868:
    // 0x235868: 0x50400119  beql        $v0, $zero, . + 4 + (0x119 << 2)
    ctx->pc = 0x235868u;
    {
        const bool branch_taken_0x235868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235868) {
            ctx->pc = 0x23586Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235868u;
            // 0x23586c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235CD0u;
            goto label_235cd0;
        }
    }
    ctx->pc = 0x235870u;
    // 0x235870: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x235870u;
    SET_GPR_U32(ctx, 31, 0x235878u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x235870u, 0x235878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235878u;
label_235878:
    // 0x235878: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x235878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23587c: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x23587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x235880: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x235880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x235884: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x235884u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x235888: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x235888u;
    {
        const bool branch_taken_0x235888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235888u;
        // 0x23588c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235888) {
            ctx->pc = 0x2358A8u;
            goto label_2358a8;
        }
    }
    ctx->pc = 0x235890u;
    // 0x235890: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x235890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x235894: 0x24429fe0  addiu       $v0, $v0, -0x6020
    ctx->pc = 0x235894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942688));
    // 0x235898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x235898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23589c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2358a0: 0x800008  jr          $a0
    ctx->pc = 0x2358A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2358A8u: goto label_2358a8;
            case 0x2358D4u: goto label_2358d4;
            case 0x235900u: goto label_235900;
            case 0x23593Cu: goto label_23593c;
            case 0x235968u: goto label_235968;
            case 0x235994u: goto label_235994;
            case 0x2359C0u: goto label_2359c0;
            case 0x2359ECu: goto label_2359ec;
            case 0x235A18u: goto label_235a18;
            case 0x235A44u: goto label_235a44;
            case 0x235A70u: goto label_235a70;
            case 0x235A9Cu: goto label_235a9c;
            case 0x235AC8u: goto label_235ac8;
            case 0x235AFCu: goto label_235afc;
            case 0x235B5Cu: goto label_235b5c;
            case 0x235B88u: goto label_235b88;
            case 0x235BC0u: goto label_235bc0;
            case 0x235C20u: goto label_235c20;
            case 0x235C4Cu: goto label_235c4c;
            case 0x235C78u: goto label_235c78;
            case 0x235CA4u: goto label_235ca4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2358A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2358A8u;
label_2358a8:
    // 0x2358a8: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x2358a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2358ac: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2358acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2358b0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2358b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2358b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2358b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358b8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2358b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2358bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2358bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358c0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2358c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2358c4: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2358C4u;
    SET_GPR_U32(ctx, 31, 0x2358CCu);
    ctx->pc = 0x2358C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358C4u;
    // 0x2358c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2358C4u, 0x2358CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358CCu;
label_2358cc:
    // 0x2358cc: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x2358CCu;
    {
        const bool branch_taken_0x2358cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358CCu;
        // 0x2358d0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358cc) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x2358D4u;
label_2358d4:
    // 0x2358d4: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2358d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2358d8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2358d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2358dc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2358dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2358e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2358e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358e4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2358e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2358e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2358e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358ec: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2358ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2358f0: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2358F0u;
    SET_GPR_U32(ctx, 31, 0x2358F8u);
    ctx->pc = 0x2358F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358F0u;
    // 0x2358f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2358F0u, 0x2358F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358F8u;
label_2358f8:
    // 0x2358f8: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x2358F8u;
    {
        const bool branch_taken_0x2358f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358F8u;
        // 0x2358fc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358f8) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235900u;
label_235900:
    // 0x235900: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x235900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x235904: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235908: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23590c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23590cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235910: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x235910u;
    SET_GPR_U32(ctx, 31, 0x235918u);
    ctx->pc = 0x235914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235910u;
    // 0x235914: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x235910u, 0x235918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235918u;
label_235918:
    // 0x235918: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x235918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23591c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23591cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235920: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x235920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x235924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235928: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235928u;
    SET_GPR_U32(ctx, 31, 0x235930u);
    ctx->pc = 0x23592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235928u;
    // 0x23592c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235928u, 0x235930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235930u;
label_235930:
    // 0x235930: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x235930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x235934: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x235934u;
    {
        const bool branch_taken_0x235934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235934u;
        // 0x235938: 0xa22202f7  sb          $v0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235934) {
            ctx->pc = 0x235D90u;
            goto label_235d90;
        }
    }
    ctx->pc = 0x23593Cu;
label_23593c:
    // 0x23593c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x23593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x235940: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235944: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23594c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23594cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235954: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235958: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235958u;
    SET_GPR_U32(ctx, 31, 0x235960u);
    ctx->pc = 0x23595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235958u;
    // 0x23595c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235958u, 0x235960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235960u;
label_235960:
    // 0x235960: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x235960u;
    {
        const bool branch_taken_0x235960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235960u;
        // 0x235964: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235960) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235968u;
label_235968:
    // 0x235968: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x235968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x23596c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23596cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235970: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235978: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x23597c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23597cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235980: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235984: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235984u;
    SET_GPR_U32(ctx, 31, 0x23598Cu);
    ctx->pc = 0x235988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235984u;
    // 0x235988: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235984u, 0x23598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23598Cu;
label_23598c:
    // 0x23598c: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x23598Cu;
    {
        const bool branch_taken_0x23598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23598Cu;
        // 0x235990: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23598c) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235994u;
label_235994:
    // 0x235994: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x235994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x235998: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23599c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23599cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2359a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2359a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359a4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2359a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2359a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2359a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359ac: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2359acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2359b0: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2359B0u;
    SET_GPR_U32(ctx, 31, 0x2359B8u);
    ctx->pc = 0x2359B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2359B0u;
    // 0x2359b4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2359B0u, 0x2359B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2359B8u;
label_2359b8:
    // 0x2359b8: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x2359B8u;
    {
        const bool branch_taken_0x2359b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359B8u;
        // 0x2359bc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359b8) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x2359C0u;
label_2359c0:
    // 0x2359c0: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x2359c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x2359c4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2359c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2359c8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2359c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2359cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2359ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359d0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2359d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2359d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2359d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359d8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2359d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2359dc: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2359DCu;
    SET_GPR_U32(ctx, 31, 0x2359E4u);
    ctx->pc = 0x2359E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2359DCu;
    // 0x2359e0: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2359DCu, 0x2359E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2359E4u;
label_2359e4:
    // 0x2359e4: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x2359E4u;
    {
        const bool branch_taken_0x2359e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359E4u;
        // 0x2359e8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359e4) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x2359ECu;
label_2359ec:
    // 0x2359ec: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2359ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2359f0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2359f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2359f4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2359f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2359f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2359f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359fc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2359fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a04: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235a08: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235A08u;
    SET_GPR_U32(ctx, 31, 0x235A10u);
    ctx->pc = 0x235A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A08u;
    // 0x235a0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235A08u, 0x235A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A10u;
label_235a10:
    // 0x235a10: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x235A10u;
    {
        const bool branch_taken_0x235a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A10u;
        // 0x235a14: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a10) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235A18u;
label_235a18:
    // 0x235a18: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x235a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x235a1c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a20: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a28: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235a28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a30: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235a30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235a34: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235A34u;
    SET_GPR_U32(ctx, 31, 0x235A3Cu);
    ctx->pc = 0x235A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A34u;
    // 0x235a38: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235A34u, 0x235A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A3Cu;
label_235a3c:
    // 0x235a3c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x235A3Cu;
    {
        const bool branch_taken_0x235a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A3Cu;
        // 0x235a40: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a3c) {
            ctx->pc = 0x235CD0u;
            goto label_235cd0;
        }
    }
    ctx->pc = 0x235A44u;
label_235a44:
    // 0x235a44: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x235a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x235a48: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a4c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a54: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a5c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235a60: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235A60u;
    SET_GPR_U32(ctx, 31, 0x235A68u);
    ctx->pc = 0x235A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A60u;
    // 0x235a64: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235A60u, 0x235A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A68u;
label_235a68:
    // 0x235a68: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x235A68u;
    {
        const bool branch_taken_0x235a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A68u;
        // 0x235a6c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a68) {
            ctx->pc = 0x235CD0u;
            goto label_235cd0;
        }
    }
    ctx->pc = 0x235A70u;
label_235a70:
    // 0x235a70: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x235a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x235a74: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235a74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a78: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a80: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235a80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a88: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235a88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235a8c: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235A8Cu;
    SET_GPR_U32(ctx, 31, 0x235A94u);
    ctx->pc = 0x235A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A8Cu;
    // 0x235a90: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235A8Cu, 0x235A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A94u;
label_235a94:
    // 0x235a94: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x235A94u;
    {
        const bool branch_taken_0x235a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A94u;
        // 0x235a98: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a94) {
            ctx->pc = 0x235CD0u;
            goto label_235cd0;
        }
    }
    ctx->pc = 0x235A9Cu;
label_235a9c:
    // 0x235a9c: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x235a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x235aa0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235aa4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235aac: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235ab0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ab4: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235ab8: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235AB8u;
    SET_GPR_U32(ctx, 31, 0x235AC0u);
    ctx->pc = 0x235ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AB8u;
    // 0x235abc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235AB8u, 0x235AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AC0u;
label_235ac0:
    // 0x235ac0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x235AC0u;
    {
        const bool branch_taken_0x235ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AC0u;
        // 0x235ac4: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ac0) {
            ctx->pc = 0x235CD0u;
            goto label_235cd0;
        }
    }
    ctx->pc = 0x235AC8u;
label_235ac8:
    // 0x235ac8: 0x8e0205f8  lw          $v0, 0x5F8($s0)
    ctx->pc = 0x235ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1528)));
    // 0x235acc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x235ACCu;
    {
        const bool branch_taken_0x235acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ACCu;
        // 0x235ad0: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235acc) {
            ctx->pc = 0x235B30u;
            goto label_235b30;
        }
    }
    ctx->pc = 0x235AD4u;
    // 0x235ad4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235ad8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235adc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ae0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ae8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235aec: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235AECu;
    SET_GPR_U32(ctx, 31, 0x235AF4u);
    ctx->pc = 0x235AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AECu;
    // 0x235af0: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235AECu, 0x235AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AF4u;
label_235af4:
    // 0x235af4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x235AF4u;
    {
        const bool branch_taken_0x235af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AF4u;
        // 0x235af8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235af4) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235AFCu;
label_235afc:
    // 0x235afc: 0x8e0205f8  lw          $v0, 0x5F8($s0)
    ctx->pc = 0x235afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1528)));
    // 0x235b00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x235B00u;
    {
        const bool branch_taken_0x235b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B00u;
        // 0x235b04: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b00) {
            ctx->pc = 0x235B30u;
            goto label_235b30;
        }
    }
    ctx->pc = 0x235B08u;
    // 0x235b08: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235b08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b0c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b14: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b1c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235b20: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235B20u;
    SET_GPR_U32(ctx, 31, 0x235B28u);
    ctx->pc = 0x235B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B20u;
    // 0x235b24: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235B20u, 0x235B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B28u;
label_235b28:
    // 0x235b28: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x235B28u;
    {
        const bool branch_taken_0x235b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B28u;
        // 0x235b2c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b28) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235B30u;
label_235b30:
    // 0x235b30: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x235b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x235b34: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b38: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b40: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b48: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235b48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235b4c: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235B4Cu;
    SET_GPR_U32(ctx, 31, 0x235B54u);
    ctx->pc = 0x235B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B4Cu;
    // 0x235b50: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235B4Cu, 0x235B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B54u;
label_235b54:
    // 0x235b54: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x235B54u;
    {
        const bool branch_taken_0x235b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B54u;
        // 0x235b58: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b54) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235B5Cu;
label_235b5c:
    // 0x235b5c: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x235b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x235b60: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235b60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b64: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235b64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b6c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b74: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235b78: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235B78u;
    SET_GPR_U32(ctx, 31, 0x235B80u);
    ctx->pc = 0x235B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B78u;
    // 0x235b7c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235B78u, 0x235B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B80u;
label_235b80:
    // 0x235b80: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x235B80u;
    {
        const bool branch_taken_0x235b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B80u;
        // 0x235b84: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b80) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235B88u;
label_235b88:
    // 0x235b88: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x235b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x235b8c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x235B8Cu;
    {
        const bool branch_taken_0x235b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B8Cu;
        // 0x235b90: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b8c) {
            ctx->pc = 0x235BCCu;
            goto label_235bcc;
        }
    }
    ctx->pc = 0x235B94u;
    // 0x235b94: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x235b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x235b98: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235b98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235b9c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ba4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235ba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235bac: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235bb0: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235BB0u;
    SET_GPR_U32(ctx, 31, 0x235BB8u);
    ctx->pc = 0x235BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BB0u;
    // 0x235bb4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235BB0u, 0x235BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BB8u;
label_235bb8:
    // 0x235bb8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x235BB8u;
    {
        const bool branch_taken_0x235bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BB8u;
        // 0x235bbc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bb8) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235BC0u;
label_235bc0:
    // 0x235bc0: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x235bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x235bc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x235BC4u;
    {
        const bool branch_taken_0x235bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BC4u;
        // 0x235bc8: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bc4) {
            ctx->pc = 0x235BF4u;
            goto label_235bf4;
        }
    }
    ctx->pc = 0x235BCCu;
label_235bcc:
    // 0x235bcc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235bd0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235bd8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235be0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235be4: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235BE4u;
    SET_GPR_U32(ctx, 31, 0x235BECu);
    ctx->pc = 0x235BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BE4u;
    // 0x235be8: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235BE4u, 0x235BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BECu;
label_235bec:
    // 0x235bec: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x235BECu;
    {
        const bool branch_taken_0x235bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BECu;
        // 0x235bf0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bec) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235BF4u;
label_235bf4:
    // 0x235bf4: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x235bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x235bf8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235bfc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c04: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c0c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235c10: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235C10u;
    SET_GPR_U32(ctx, 31, 0x235C18u);
    ctx->pc = 0x235C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C10u;
    // 0x235c14: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235C10u, 0x235C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C18u;
label_235c18:
    // 0x235c18: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x235C18u;
    {
        const bool branch_taken_0x235c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C18u;
        // 0x235c1c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c18) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235C20u;
label_235c20:
    // 0x235c20: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x235c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x235c24: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235c24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c28: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235c28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c30: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c38: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235c38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235c3c: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235C3Cu;
    SET_GPR_U32(ctx, 31, 0x235C44u);
    ctx->pc = 0x235C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C3Cu;
    // 0x235c40: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235C3Cu, 0x235C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C44u;
label_235c44:
    // 0x235c44: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x235C44u;
    {
        const bool branch_taken_0x235c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C44u;
        // 0x235c48: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c44) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235C4Cu;
label_235c4c:
    // 0x235c4c: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x235c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x235c50: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c54: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c5c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c64: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235c64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235c68: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235C68u;
    SET_GPR_U32(ctx, 31, 0x235C70u);
    ctx->pc = 0x235C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C68u;
    // 0x235c6c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235C68u, 0x235C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C70u;
label_235c70:
    // 0x235c70: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x235C70u;
    {
        const bool branch_taken_0x235c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C70u;
        // 0x235c74: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c70) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235C78u;
label_235c78:
    // 0x235c78: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x235c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x235c7c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c80: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c88: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c90: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235c94: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235C94u;
    SET_GPR_U32(ctx, 31, 0x235C9Cu);
    ctx->pc = 0x235C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C94u;
    // 0x235c98: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235C94u, 0x235C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C9Cu;
label_235c9c:
    // 0x235c9c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x235C9Cu;
    {
        const bool branch_taken_0x235c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C9Cu;
        // 0x235ca0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c9c) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235CA4u;
label_235ca4:
    // 0x235ca4: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x235ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x235ca8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x235ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x235cac: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x235cacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x235cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cb4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x235cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x235cb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cbc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x235cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x235cc0: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x235CC0u;
    SET_GPR_U32(ctx, 31, 0x235CC8u);
    ctx->pc = 0x235CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CC0u;
    // 0x235cc4: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x235CC0u, 0x235CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CC8u;
label_235cc8:
    // 0x235cc8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x235CC8u;
    {
        const bool branch_taken_0x235cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CC8u;
        // 0x235ccc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cc8) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235CD0u;
label_235cd0:
    // 0x235cd0: 0x28620220  slti        $v0, $v1, 0x220
    ctx->pc = 0x235cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
    // 0x235cd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235CD4u;
    {
        const bool branch_taken_0x235cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CD4u;
        // 0x235cd8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cd4) {
            ctx->pc = 0x235CF0u;
            goto label_235cf0;
        }
    }
    ctx->pc = 0x235CDCu;
    // 0x235cdc: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x235cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x235ce0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x235CE0u;
    {
        const bool branch_taken_0x235ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CE0u;
        // 0x235ce4: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ce0) {
            ctx->pc = 0x235D38u;
            goto label_235d38;
        }
    }
    ctx->pc = 0x235CE8u;
    // 0x235ce8: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x235CE8u;
    {
        const bool branch_taken_0x235ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x235ce8) {
            ctx->pc = 0x235CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235CE8u;
            // 0x235cec: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235D48u;
            goto label_235d48;
        }
    }
    ctx->pc = 0x235CF0u;
label_235cf0:
    // 0x235cf0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x235CF0u;
    SET_GPR_U32(ctx, 31, 0x235CF8u);
    ctx->pc = 0x235CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CF0u;
    // 0x235cf4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x235CF0u, 0x235CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CF8u;
label_235cf8:
    // 0x235cf8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x235cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x235cfc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x235CFCu;
    {
        const bool branch_taken_0x235cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235cfc) {
            ctx->pc = 0x235D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235CFCu;
            // 0x235d00: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235D60u;
            goto label_235d60;
        }
    }
    ctx->pc = 0x235D04u;
    // 0x235d04: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x235D04u;
    SET_GPR_U32(ctx, 31, 0x235D0Cu);
    ctx->pc = 0x235D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D04u;
    // 0x235d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x235D04u, 0x235D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D0Cu;
label_235d0c:
    // 0x235d0c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x235D0Cu;
    {
        const bool branch_taken_0x235d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D0Cu;
        // 0x235d10: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d0c) {
            ctx->pc = 0x235D60u;
            goto label_235d60;
        }
    }
    ctx->pc = 0x235D14u;
    // 0x235d14: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x235d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x235d18: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x235D18u;
    {
        const bool branch_taken_0x235d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235d18) {
            ctx->pc = 0x235D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235D18u;
            // 0x235d1c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235D60u;
            goto label_235d60;
        }
    }
    ctx->pc = 0x235D20u;
    // 0x235d20: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x235D20u;
    SET_GPR_U32(ctx, 31, 0x235D28u);
    ctx->pc = 0x235D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D20u;
    // 0x235d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x235D20u, 0x235D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D28u;
label_235d28:
    // 0x235d28: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x235D28u;
    {
        const bool branch_taken_0x235d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235d28) {
            ctx->pc = 0x235D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235D28u;
            // 0x235d2c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235D30u;
    // 0x235d30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x235D30u;
    {
        const bool branch_taken_0x235d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D30u;
        // 0x235d34: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d30) {
            ctx->pc = 0x235D60u;
            goto label_235d60;
        }
    }
    ctx->pc = 0x235D38u;
label_235d38:
    // 0x235d38: 0xc09c452  jal         func_271148
    ctx->pc = 0x235D38u;
    SET_GPR_U32(ctx, 31, 0x235D40u);
    ctx->pc = 0x235D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D38u;
    // 0x235d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271148u, 0x235D38u, 0x235D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D40u;
label_235d40:
    // 0x235d40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x235D40u;
    {
        const bool branch_taken_0x235d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D40u;
        // 0x235d44: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d40) {
            ctx->pc = 0x235D60u;
            goto label_235d60;
        }
    }
    ctx->pc = 0x235D48u;
label_235d48:
    // 0x235d48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x235d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x235d4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x235D4Cu;
    {
        const bool branch_taken_0x235d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235d4c) {
            ctx->pc = 0x235D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235D4Cu;
            // 0x235d50: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235D60u;
            goto label_235d60;
        }
    }
    ctx->pc = 0x235D54u;
    // 0x235d54: 0xc09c4a6  jal         func_271298
    ctx->pc = 0x235D54u;
    SET_GPR_U32(ctx, 31, 0x235D5Cu);
    ctx->pc = 0x235D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D54u;
    // 0x235d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271298u, 0x235D54u, 0x235D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D5Cu;
label_235d5c:
    // 0x235d5c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x235d5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_235d60:
    // 0x235d60: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x235d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x235d64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235D64u;
    {
        const bool branch_taken_0x235d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D64u;
        // 0x235d68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d64) {
            ctx->pc = 0x235D70u;
            goto label_235d70;
        }
    }
    ctx->pc = 0x235D6Cu;
    // 0x235d6c: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x235d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_235d70:
    // 0x235d70: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x235d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x235d74: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x235D74u;
    {
        const bool branch_taken_0x235d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235d74) {
            ctx->pc = 0x235D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235D74u;
            // 0x235d78: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235D7Cu;
    // 0x235d7c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x235d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x235d80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x235d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x235d84: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x235d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x235d88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x235d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x235d8c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x235d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
label_235d90:
    // 0x235d90: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x235d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_235d94:
    // 0x235d94: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x235d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x235d98: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x235d98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x235d9c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x235d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x235da0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x235da0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x235da4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x235da4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235da8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x235da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235dac: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x235dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x235db0: 0x3e00008  jr          $ra
    ctx->pc = 0x235DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DB0u;
        // 0x235db4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235DB8u;
}
