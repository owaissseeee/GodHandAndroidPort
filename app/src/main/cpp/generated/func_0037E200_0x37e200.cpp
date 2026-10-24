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

// Function: func_0037E200
// Address: 0x37e200 - 0x37e368
void func_0037E200_0x37e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037E200_0x37e200");
#endif

    switch (ctx->pc) {
        case 0x37e2d4u: goto label_37e2d4;
        case 0x37e2f8u: goto label_37e2f8;
        case 0x37e31cu: goto label_37e31c;
        default: break;
    }

    ctx->pc = 0x37e200u;

    // 0x37e200: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x37e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x37e204: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x37e204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x37e208: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x37e20c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x37e20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x37e210: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37e210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x37e214: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37e214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37e218: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x37e218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x37e21c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x37e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x37e220: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x37e220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x37e224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37e224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37e228: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x37e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x37e22c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x37e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x37e230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37E230u;
    {
        const bool branch_taken_0x37e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E230u;
        // 0x37e234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e230) {
            ctx->pc = 0x37E240u;
            goto label_37e240;
        }
    }
    ctx->pc = 0x37E238u;
    // 0x37e238: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x37E238u;
    {
        const bool branch_taken_0x37e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E238u;
        // 0x37e23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e238) {
            ctx->pc = 0x37E33Cu;
            goto label_37e33c;
        }
    }
    ctx->pc = 0x37E240u;
label_37e240:
    // 0x37e240: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x37e240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x37e244: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x37e244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x37e248: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x37E248u;
    {
        const bool branch_taken_0x37e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e248) {
            ctx->pc = 0x37E24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E248u;
            // 0x37e24c: 0x8ca20038  lw          $v0, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E268u;
            goto label_37e268;
        }
    }
    ctx->pc = 0x37E250u;
    // 0x37e250: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x37e250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x37e254: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37E254u;
    {
        const bool branch_taken_0x37e254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E254u;
        // 0x37e258: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e254) {
            ctx->pc = 0x37E260u;
            goto label_37e260;
        }
    }
    ctx->pc = 0x37E25Cu;
    // 0x37e25c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37e260:
    // 0x37e260: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x37e260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e264: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x37e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_37e268:
    // 0x37e268: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x37e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x37e26c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x37E26Cu;
    {
        const bool branch_taken_0x37e26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e26c) {
            ctx->pc = 0x37E270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E26Cu;
            // 0x37e270: 0x8ca20034  lw          $v0, 0x34($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E294u;
            goto label_37e294;
        }
    }
    ctx->pc = 0x37E274u;
    // 0x37e274: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x37e274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x37e278: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x37e278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x37e27c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37E27Cu;
    {
        const bool branch_taken_0x37e27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E27Cu;
        // 0x37e280: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e27c) {
            ctx->pc = 0x37E28Cu;
            goto label_37e28c;
        }
    }
    ctx->pc = 0x37E284u;
    // 0x37e284: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37E284u;
    {
        const bool branch_taken_0x37e284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E284u;
        // 0x37e288: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e284) {
            ctx->pc = 0x37E290u;
            goto label_37e290;
        }
    }
    ctx->pc = 0x37E28Cu;
label_37e28c:
    // 0x37e28c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x37e28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_37e290:
    // 0x37e290: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x37e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_37e294:
    // 0x37e294: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x37e294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x37e298: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37E298u;
    {
        const bool branch_taken_0x37e298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E298u;
        // 0x37e29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e298) {
            ctx->pc = 0x37E2B8u;
            goto label_37e2b8;
        }
    }
    ctx->pc = 0x37E2A0u;
    // 0x37e2a0: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x37e2a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x37e2a4: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x37e2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e2a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37e2ac: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x37e2acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e2b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x37E2B0u;
    {
        const bool branch_taken_0x37e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E2B0u;
        // 0x37e2b4: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e2b0) {
            ctx->pc = 0x37E33Cu;
            goto label_37e33c;
        }
    }
    ctx->pc = 0x37E2B8u;
label_37e2b8:
    // 0x37e2b8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37e2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37e2bc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x37e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x37e2c0: 0x24e7c1b8  addiu       $a3, $a3, -0x3E48
    ctx->pc = 0x37e2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951352));
    // 0x37e2c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37e2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37e2c8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x37e2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x37e2cc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37E2CCu;
    SET_GPR_U32(ctx, 31, 0x37E2D4u);
    ctx->pc = 0x37E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E2CCu;
    // 0x37e2d0: 0x3c170046  lui         $s7, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37E2CCu, 0x37E2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E2D4u;
label_37e2d4:
    // 0x37e2d4: 0x2416000e  addiu       $s6, $zero, 0xE
    ctx->pc = 0x37e2d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37e2d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37e2dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x37e2dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e2e0: 0x24532888  addiu       $s3, $v0, 0x2888
    ctx->pc = 0x37e2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10376));
    // 0x37e2e4: 0x3c120100  lui         $s2, 0x100
    ctx->pc = 0x37e2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)256 << 16));
    // 0x37e2e8: 0x3c110005  lui         $s1, 0x5
    ctx->pc = 0x37e2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)5 << 16));
    // 0x37e2ec: 0x3c150100  lui         $s5, 0x100
    ctx->pc = 0x37e2ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)256 << 16));
    // 0x37e2f0: 0x3c140001  lui         $s4, 0x1
    ctx->pc = 0x37e2f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1 << 16));
    // 0x37e2f4: 0x0  nop
    ctx->pc = 0x37e2f4u;
    // NOP
label_37e2f8:
    // 0x37e2f8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x37e2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x37e2fc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x37e2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37e300: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x37e300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x37e304: 0x112c03  sra         $a1, $s1, 16
    ctx->pc = 0x37e304u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 16));
    // 0x37e308: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x37e308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x37e30c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x37e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37e310: 0x2c2300a  movz        $a2, $s6, $v0
    ctx->pc = 0x37e310u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
    // 0x37e314: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37E314u;
    SET_GPR_U32(ctx, 31, 0x37E31Cu);
    ctx->pc = 0x37E318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E314u;
    // 0x37e318: 0x26e7c1c8  addiu       $a3, $s7, -0x3E38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37E314u, 0x37E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E31Cu;
label_37e31c:
    // 0x37e31c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x37e31cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x37e320: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37e320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e324: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x37e324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x37e328: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x37e328u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x37e32c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x37e32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x37e330: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x37E330u;
    {
        const bool branch_taken_0x37e330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E330u;
        // 0x37e334: 0x2559021  addu        $s2, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e330) {
            ctx->pc = 0x37E2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e2f8;
        }
    }
    ctx->pc = 0x37E338u;
    // 0x37e338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37e33c:
    // 0x37e33c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x37e33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37e340: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x37e340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37e344: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x37e344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37e348: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37e348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37e34c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37e34cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37e350: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x37e350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37e354: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x37e354u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37e358: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x37e358u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e360: 0x3e00008  jr          $ra
    ctx->pc = 0x37E360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E360u;
        // 0x37e364: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E368u;
}
