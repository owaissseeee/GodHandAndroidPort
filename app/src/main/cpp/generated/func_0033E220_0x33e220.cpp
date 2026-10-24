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

// Function: func_0033E220
// Address: 0x33e220 - 0x33e3b8
void func_0033E220_0x33e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E220_0x33e220");
#endif

    switch (ctx->pc) {
        case 0x33e220u: goto label_33e220;
        case 0x33e224u: goto label_33e224;
        case 0x33e228u: goto label_33e228;
        case 0x33e22cu: goto label_33e22c;
        case 0x33e230u: goto label_33e230;
        case 0x33e234u: goto label_33e234;
        case 0x33e238u: goto label_33e238;
        case 0x33e23cu: goto label_33e23c;
        case 0x33e240u: goto label_33e240;
        case 0x33e244u: goto label_33e244;
        case 0x33e248u: goto label_33e248;
        case 0x33e24cu: goto label_33e24c;
        case 0x33e250u: goto label_33e250;
        case 0x33e254u: goto label_33e254;
        case 0x33e258u: goto label_33e258;
        case 0x33e25cu: goto label_33e25c;
        case 0x33e260u: goto label_33e260;
        case 0x33e264u: goto label_33e264;
        case 0x33e268u: goto label_33e268;
        case 0x33e26cu: goto label_33e26c;
        case 0x33e270u: goto label_33e270;
        case 0x33e274u: goto label_33e274;
        case 0x33e278u: goto label_33e278;
        case 0x33e27cu: goto label_33e27c;
        case 0x33e280u: goto label_33e280;
        case 0x33e284u: goto label_33e284;
        case 0x33e288u: goto label_33e288;
        case 0x33e28cu: goto label_33e28c;
        case 0x33e290u: goto label_33e290;
        case 0x33e294u: goto label_33e294;
        case 0x33e298u: goto label_33e298;
        case 0x33e29cu: goto label_33e29c;
        case 0x33e2a0u: goto label_33e2a0;
        case 0x33e2a4u: goto label_33e2a4;
        case 0x33e2a8u: goto label_33e2a8;
        case 0x33e2acu: goto label_33e2ac;
        case 0x33e2b0u: goto label_33e2b0;
        case 0x33e2b4u: goto label_33e2b4;
        case 0x33e2b8u: goto label_33e2b8;
        case 0x33e2bcu: goto label_33e2bc;
        case 0x33e2c0u: goto label_33e2c0;
        case 0x33e2c4u: goto label_33e2c4;
        case 0x33e2c8u: goto label_33e2c8;
        case 0x33e2ccu: goto label_33e2cc;
        case 0x33e2d0u: goto label_33e2d0;
        case 0x33e2d4u: goto label_33e2d4;
        case 0x33e2d8u: goto label_33e2d8;
        case 0x33e2dcu: goto label_33e2dc;
        case 0x33e2e0u: goto label_33e2e0;
        case 0x33e2e4u: goto label_33e2e4;
        case 0x33e2e8u: goto label_33e2e8;
        case 0x33e2ecu: goto label_33e2ec;
        case 0x33e2f0u: goto label_33e2f0;
        case 0x33e2f4u: goto label_33e2f4;
        case 0x33e2f8u: goto label_33e2f8;
        case 0x33e2fcu: goto label_33e2fc;
        case 0x33e300u: goto label_33e300;
        case 0x33e304u: goto label_33e304;
        case 0x33e308u: goto label_33e308;
        case 0x33e30cu: goto label_33e30c;
        case 0x33e310u: goto label_33e310;
        case 0x33e314u: goto label_33e314;
        case 0x33e318u: goto label_33e318;
        case 0x33e31cu: goto label_33e31c;
        case 0x33e320u: goto label_33e320;
        case 0x33e324u: goto label_33e324;
        case 0x33e328u: goto label_33e328;
        case 0x33e32cu: goto label_33e32c;
        case 0x33e330u: goto label_33e330;
        case 0x33e334u: goto label_33e334;
        case 0x33e338u: goto label_33e338;
        case 0x33e33cu: goto label_33e33c;
        case 0x33e340u: goto label_33e340;
        case 0x33e344u: goto label_33e344;
        case 0x33e348u: goto label_33e348;
        case 0x33e34cu: goto label_33e34c;
        case 0x33e350u: goto label_33e350;
        case 0x33e354u: goto label_33e354;
        case 0x33e358u: goto label_33e358;
        case 0x33e35cu: goto label_33e35c;
        case 0x33e360u: goto label_33e360;
        case 0x33e364u: goto label_33e364;
        case 0x33e368u: goto label_33e368;
        case 0x33e36cu: goto label_33e36c;
        case 0x33e370u: goto label_33e370;
        case 0x33e374u: goto label_33e374;
        case 0x33e378u: goto label_33e378;
        case 0x33e37cu: goto label_33e37c;
        case 0x33e380u: goto label_33e380;
        case 0x33e384u: goto label_33e384;
        case 0x33e388u: goto label_33e388;
        case 0x33e38cu: goto label_33e38c;
        case 0x33e390u: goto label_33e390;
        case 0x33e394u: goto label_33e394;
        case 0x33e398u: goto label_33e398;
        case 0x33e39cu: goto label_33e39c;
        case 0x33e3a0u: goto label_33e3a0;
        case 0x33e3a4u: goto label_33e3a4;
        case 0x33e3a8u: goto label_33e3a8;
        case 0x33e3acu: goto label_33e3ac;
        case 0x33e3b0u: goto label_33e3b0;
        case 0x33e3b4u: goto label_33e3b4;
        default: break;
    }

    ctx->pc = 0x33e220u;

label_33e220:
    // 0x33e220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33e224:
    // 0x33e224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e228:
    // 0x33e228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e22c:
    // 0x33e22c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e230:
    // 0x33e230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e234:
    // 0x33e234: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x33e234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_33e238:
    // 0x33e238: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33e23c:
    // 0x33e23c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33e23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33e240:
    // 0x33e240: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33e244:
    // 0x33e244: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
label_33e248:
    if (ctx->pc == 0x33E248u) {
        ctx->pc = 0x33E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E244u;
        // 0x33e248: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E24Cu;
        goto label_33e24c;
    }
    ctx->pc = 0x33E244u;
    {
        const bool branch_taken_0x33e244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E244u;
        // 0x33e248: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e244) {
            ctx->pc = 0x33E374u;
            goto label_33e374;
        }
    }
    ctx->pc = 0x33E24Cu;
label_33e24c:
    // 0x33e24c: 0xc0cfe9a  jal         func_33FA68
label_33e250:
    if (ctx->pc == 0x33E250u) {
        ctx->pc = 0x33E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E24Cu;
        // 0x33e250: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E254u;
        goto label_33e254;
    }
    ctx->pc = 0x33E24Cu;
    SET_GPR_U32(ctx, 31, 0x33E254u);
    ctx->pc = 0x33E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E24Cu;
    // 0x33e250: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x33E24Cu, 0x33E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E254u;
label_33e254:
    // 0x33e254: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
label_33e258:
    if (ctx->pc == 0x33E258u) {
        ctx->pc = 0x33E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E254u;
        // 0x33e258: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E25Cu;
        goto label_33e25c;
    }
    ctx->pc = 0x33E254u;
    {
        const bool branch_taken_0x33e254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e254) {
            ctx->pc = 0x33E258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E254u;
            // 0x33e258: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E374u;
            goto label_33e374;
        }
    }
    ctx->pc = 0x33E25Cu;
label_33e25c:
    // 0x33e25c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x33e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_33e260:
    // 0x33e260: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x33e260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_33e264:
    // 0x33e264: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x33e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_33e268:
    // 0x33e268: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x33e268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_33e26c:
    // 0x33e26c: 0x40f809  jalr        $v0
label_33e270:
    if (ctx->pc == 0x33E270u) {
        ctx->pc = 0x33E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E26Cu;
        // 0x33e270: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E274u;
        goto label_33e274;
    }
    ctx->pc = 0x33E26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E274u);
        ctx->pc = 0x33E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E26Cu;
        // 0x33e270: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E26Cu, 0x33E274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E274u;
label_33e274:
    // 0x33e274: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x33e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33e278:
    // 0x33e278: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x33e278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_33e27c:
    // 0x33e27c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e280:
    // 0x33e280: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x33e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_33e284:
    // 0x33e284: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x33e284u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_33e288:
    // 0x33e288: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x33e288u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33e28c:
    // 0x33e28c: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x33e28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e290:
    // 0x33e290: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x33e290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_33e294:
    // 0x33e294: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x33e294u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_33e298:
    // 0x33e298: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x33e298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_33e29c:
    // 0x33e29c: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x33e29cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_33e2a0:
    // 0x33e2a0: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x33e2a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e2a4:
    // 0x33e2a4: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x33e2a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_33e2a8:
    // 0x33e2a8: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x33e2a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_33e2ac:
    // 0x33e2ac: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_33e2b0:
    if (ctx->pc == 0x33E2B0u) {
        ctx->pc = 0x33E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2ACu;
        // 0x33e2b0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E2B4u;
        goto label_33e2b4;
    }
    ctx->pc = 0x33E2ACu;
    {
        const bool branch_taken_0x33e2ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x33E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2ACu;
        // 0x33e2b0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e2ac) {
            ctx->pc = 0x33E320u;
            goto label_33e320;
        }
    }
    ctx->pc = 0x33E2B4u;
label_33e2b4:
    // 0x33e2b4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x33e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33e2b8:
    // 0x33e2b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33e2b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e2bc:
    // 0x33e2bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x33e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_33e2c0:
    // 0x33e2c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33e2c4:
    // 0x33e2c4: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_33e2c8:
    if (ctx->pc == 0x33E2C8u) {
        ctx->pc = 0x33E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2C4u;
        // 0x33e2c8: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E2CCu;
        goto label_33e2cc;
    }
    ctx->pc = 0x33E2C4u;
    {
        const bool branch_taken_0x33e2c4 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x33E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2C4u;
        // 0x33e2c8: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e2c4) {
            ctx->pc = 0x33E358u;
            goto label_33e358;
        }
    }
    ctx->pc = 0x33E2CCu;
label_33e2cc:
    // 0x33e2cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33e2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e2d0:
    // 0x33e2d0: 0x340aff80  ori         $t2, $zero, 0xFF80
    ctx->pc = 0x33e2d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_33e2d4:
    // 0x33e2d4: 0x0  nop
    ctx->pc = 0x33e2d4u;
    // NOP
label_33e2d8:
    // 0x33e2d8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x33e2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_33e2dc:
    // 0x33e2dc: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x33e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_33e2e0:
    // 0x33e2e0: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x33e2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_33e2e4:
    // 0x33e2e4: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x33e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_33e2e8:
    // 0x33e2e8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x33e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_33e2ec:
    // 0x33e2ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33e2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33e2f0:
    // 0x33e2f0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_33e2f4:
    // 0x33e2f4: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x33e2f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e2f8:
    // 0x33e2f8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x33e2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_33e2fc:
    // 0x33e2fc: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x33e2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_33e300:
    // 0x33e300: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x33e300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_33e304:
    // 0x33e304: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x33e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_33e308:
    // 0x33e308: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x33e308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_33e30c:
    // 0x33e30c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
label_33e310:
    if (ctx->pc == 0x33E310u) {
        ctx->pc = 0x33E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E30Cu;
        // 0x33e310: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E314u;
        goto label_33e314;
    }
    ctx->pc = 0x33E30Cu;
    {
        const bool branch_taken_0x33e30c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E30Cu;
        // 0x33e310: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e30c) {
            ctx->pc = 0x33E2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e2d8;
        }
    }
    ctx->pc = 0x33E314u;
label_33e314:
    // 0x33e314: 0x10000010  b           . + 4 + (0x10 << 2)
label_33e318:
    if (ctx->pc == 0x33E318u) {
        ctx->pc = 0x33E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E314u;
        // 0x33e318: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E31Cu;
        goto label_33e31c;
    }
    ctx->pc = 0x33E314u;
    {
        const bool branch_taken_0x33e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E314u;
        // 0x33e318: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e314) {
            ctx->pc = 0x33E358u;
            goto label_33e358;
        }
    }
    ctx->pc = 0x33E31Cu;
label_33e31c:
    // 0x33e31c: 0x0  nop
    ctx->pc = 0x33e31cu;
    // NOP
label_33e320:
    // 0x33e320: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_33e324:
    if (ctx->pc == 0x33E324u) {
        ctx->pc = 0x33E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E320u;
        // 0x33e324: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E328u;
        goto label_33e328;
    }
    ctx->pc = 0x33E320u;
    {
        const bool branch_taken_0x33e320 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x33E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E320u;
        // 0x33e324: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e320) {
            ctx->pc = 0x33E358u;
            goto label_33e358;
        }
    }
    ctx->pc = 0x33E328u;
label_33e328:
    // 0x33e328: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x33e328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_33e32c:
    // 0x33e32c: 0x3406ff80  ori         $a2, $zero, 0xFF80
    ctx->pc = 0x33e32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_33e330:
    // 0x33e330: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x33e330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_33e334:
    // 0x33e334: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33e334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33e338:
    // 0x33e338: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x33e338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_33e33c:
    // 0x33e33c: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x33e33cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e340:
    // 0x33e340: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33e340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_33e344:
    // 0x33e344: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33e344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_33e348:
    // 0x33e348: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x33e348u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_33e34c:
    // 0x33e34c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_33e350:
    if (ctx->pc == 0x33E350u) {
        ctx->pc = 0x33E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E34Cu;
        // 0x33e350: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E354u;
        goto label_33e354;
    }
    ctx->pc = 0x33E34Cu;
    {
        const bool branch_taken_0x33e34c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E34Cu;
        // 0x33e350: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e34c) {
            ctx->pc = 0x33E330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e330;
        }
    }
    ctx->pc = 0x33E354u;
label_33e354:
    // 0x33e354: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x33e354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33e358:
    // 0x33e358: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x33e358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_33e35c:
    // 0x33e35c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e360:
    // 0x33e360: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x33e360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_33e364:
    // 0x33e364: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33e364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33e368:
    // 0x33e368: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x33e368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33e36c:
    // 0x33e36c: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x33e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_33e370:
    // 0x33e370: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x33e370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_33e374:
    // 0x33e374: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e378:
    // 0x33e378: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_33e37c:
    if (ctx->pc == 0x33E37Cu) {
        ctx->pc = 0x33E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E378u;
        // 0x33e37c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E380u;
        goto label_33e380;
    }
    ctx->pc = 0x33E378u;
    {
        const bool branch_taken_0x33e378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33e378) {
            ctx->pc = 0x33E37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E378u;
            // 0x33e37c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E3A0u;
            goto label_33e3a0;
        }
    }
    ctx->pc = 0x33E380u;
label_33e380:
    // 0x33e380: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x33e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_33e384:
    // 0x33e384: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x33e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_33e388:
    // 0x33e388: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x33e388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_33e38c:
    // 0x33e38c: 0x60f809  jalr        $v1
label_33e390:
    if (ctx->pc == 0x33E390u) {
        ctx->pc = 0x33E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E38Cu;
        // 0x33e390: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E394u;
        goto label_33e394;
    }
    ctx->pc = 0x33E38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33E394u);
        ctx->pc = 0x33E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E38Cu;
        // 0x33e390: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E38Cu, 0x33E394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E394u;
label_33e394:
    // 0x33e394: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e398:
    // 0x33e398: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33e398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_33e39c:
    // 0x33e39c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e3a0:
    // 0x33e3a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e3a4:
    // 0x33e3a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e3a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e3a8:
    // 0x33e3a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33e3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33e3ac:
    // 0x33e3ac: 0x3e00008  jr          $ra
label_33e3b0:
    if (ctx->pc == 0x33E3B0u) {
        ctx->pc = 0x33E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3ACu;
        // 0x33e3b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E3B4u;
        goto label_33e3b4;
    }
    ctx->pc = 0x33E3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3ACu;
        // 0x33e3b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E3B4u;
label_33e3b4:
    // 0x33e3b4: 0x0  nop
    ctx->pc = 0x33e3b4u;
    // NOP
    ctx->pc = 0x33e3b8u;
}
