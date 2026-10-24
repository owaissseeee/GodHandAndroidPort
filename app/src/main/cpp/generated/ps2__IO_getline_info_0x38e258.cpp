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

// Function: _IO_getline_info
// Address: 0x38e258 - 0x38e3f0
void ps2__IO_getline_info_0x38e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_getline_info_0x38e258");
#endif

    switch (ctx->pc) {
        case 0x38e2b0u: goto label_38e2b0;
        case 0x38e2dcu: goto label_38e2dc;
        case 0x38e2f0u: goto label_38e2f0;
        case 0x38e314u: goto label_38e314;
        case 0x38e350u: goto label_38e350;
        case 0x38e36cu: goto label_38e36c;
        case 0x38e3a0u: goto label_38e3a0;
        default: break;
    }

    ctx->pc = 0x38e258u;

    // 0x38e258: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x38e25c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x38e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x38e260: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x38e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x38e264: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x38e264u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e268: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x38e268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x38e26c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x38e26cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e270: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38e270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38e274: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x38e274u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e278: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38e27c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x38e27cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e280: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38e280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38e284: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x38e284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e288: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38e28c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38e28cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e290: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x38e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x38e294: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x38e294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e298: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38e29c: 0x12c00037  beqz        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x38E29Cu;
    {
        const bool branch_taken_0x38e29c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E29Cu;
        // 0x38e2a0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e29c) {
            ctx->pc = 0x38E37Cu;
            goto label_38e37c;
        }
    }
    ctx->pc = 0x38E2A4u;
    // 0x38e2a4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x38E2A4u;
    {
        const bool branch_taken_0x38e2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2A4u;
        // 0x38e2a8: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2a4) {
            ctx->pc = 0x38E37Cu;
            goto label_38e37c;
        }
    }
    ctx->pc = 0x38E2ACu;
    // 0x38e2ac: 0x0  nop
    ctx->pc = 0x38e2acu;
    // NOP
label_38e2b0:
    // 0x38e2b0: 0x54b7000c  bnel        $a1, $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x38E2B0u;
    {
        const bool branch_taken_0x38e2b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        if (branch_taken_0x38e2b0) {
            ctx->pc = 0x38E2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E2B0u;
            // 0x38e2b4: 0xa2450000  sb          $a1, 0x0($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E2E4u;
            goto label_38e2e4;
        }
    }
    ctx->pc = 0x38E2B8u;
    // 0x38e2b8: 0x1aa00004  blez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E2B8u;
    {
        const bool branch_taken_0x38e2b8 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x38e2b8) {
            ctx->pc = 0x38E2CCu;
            goto label_38e2cc;
        }
    }
    ctx->pc = 0x38E2C0u;
    // 0x38e2c0: 0xa2450000  sb          $a1, 0x0($s2)
    ctx->pc = 0x38e2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x38e2c4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x38E2C4u;
    {
        const bool branch_taken_0x38e2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2C4u;
        // 0x38e2c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2c4) {
            ctx->pc = 0x38E3B8u;
            goto label_38e3b8;
        }
    }
    ctx->pc = 0x38E2CCu;
label_38e2cc:
    // 0x38e2cc: 0x6a1003b  bgez        $s5, . + 4 + (0x3B << 2)
    ctx->pc = 0x38E2CCu;
    {
        const bool branch_taken_0x38e2cc = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x38E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2CCu;
        // 0x38e2d0: 0x25e1023  subu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2cc) {
            ctx->pc = 0x38E3BCu;
            goto label_38e3bc;
        }
    }
    ctx->pc = 0x38E2D4u;
    // 0x38e2d4: 0xc0e3346  jal         func_38CD18
    ctx->pc = 0x38E2D4u;
    SET_GPR_U32(ctx, 31, 0x38E2DCu);
    ctx->pc = 0x38E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E2D4u;
    // 0x38e2d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD18u, 0x38E2D4u, 0x38E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E2DCu;
label_38e2dc:
    // 0x38e2dc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x38E2DCu;
    {
        const bool branch_taken_0x38e2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2DCu;
        // 0x38e2e0: 0x25e1023  subu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2dc) {
            ctx->pc = 0x38E3BCu;
            goto label_38e3bc;
        }
    }
    ctx->pc = 0x38E2E4u;
label_38e2e4:
    // 0x38e2e4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x38e2e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x38e2e8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x38E2E8u;
    {
        const bool branch_taken_0x38e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2E8u;
        // 0x38e2ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2e8) {
            ctx->pc = 0x38E37Cu;
            goto label_38e37c;
        }
    }
    ctx->pc = 0x38E2F0u;
label_38e2f0:
    // 0x38e2f0: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x38e2f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38e2f4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x38e2f4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x38e2f8: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x38e2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x38e2fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E2FCu;
    {
        const bool branch_taken_0x38e2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2FCu;
        // 0x38e300: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2fc) {
            ctx->pc = 0x38E30Cu;
            goto label_38e30c;
        }
    }
    ctx->pc = 0x38E304u;
    // 0x38e304: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x38e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x38e308: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x38e308u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
label_38e30c:
    // 0x38e30c: 0xc0e93f2  jal         func_3A4FC8
    ctx->pc = 0x38E30Cu;
    SET_GPR_U32(ctx, 31, 0x38E314u);
    ctx->pc = 0x38E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E30Cu;
    // 0x38e310: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FC8u, 0x38E30Cu, 0x38E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E314u;
label_38e314:
    // 0x38e314: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38e314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e318: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x38E318u;
    {
        const bool branch_taken_0x38e318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E318u;
        // 0x38e31c: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e318) {
            ctx->pc = 0x38E35Cu;
            goto label_38e35c;
        }
    }
    ctx->pc = 0x38E320u;
    // 0x38e320: 0x25ea023  subu        $s4, $s2, $fp
    ctx->pc = 0x38e320u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x38e324: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x38E324u;
    {
        const bool branch_taken_0x38e324 = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x38E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E324u;
        // 0x38e328: 0x2253023  subu        $a2, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e324) {
            ctx->pc = 0x38E33Cu;
            goto label_38e33c;
        }
    }
    ctx->pc = 0x38E32Cu;
    // 0x38e32c: 0x2aa30001  slti        $v1, $s5, 0x1
    ctx->pc = 0x38e32cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x38e330: 0x64c20001  daddiu      $v0, $a2, 0x1
    ctx->pc = 0x38e330u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x38e334: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x38e334u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38e338: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38e338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_38e33c:
    // 0x38e33c: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x38e33cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38e340: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x38e340u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x38e344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e348: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38E348u;
    SET_GPR_U32(ctx, 31, 0x38E350u);
    ctx->pc = 0x38E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E348u;
    // 0x38e34c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38E348u, 0x38E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E350u;
label_38e350:
    // 0x38e350: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x38e350u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x38e354: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x38E354u;
    {
        const bool branch_taken_0x38e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E354u;
        // 0x38e358: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e354) {
            ctx->pc = 0x38E3BCu;
            goto label_38e3bc;
        }
    }
    ctx->pc = 0x38E35Cu;
label_38e35c:
    // 0x38e35c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e360: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e364: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38E364u;
    SET_GPR_U32(ctx, 31, 0x38E36Cu);
    ctx->pc = 0x38E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E364u;
    // 0x38e368: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38E364u, 0x38E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E36Cu;
label_38e36c:
    // 0x38e36c: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x38e36cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x38e370: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38e374: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x38e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x38e378: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x38e378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_38e37c:
    // 0x38e37c: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x38E37Cu;
    {
        const bool branch_taken_0x38e37c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E37Cu;
        // 0x38e380: 0x25e1023  subu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e37c) {
            ctx->pc = 0x38E3BCu;
            goto label_38e3bc;
        }
    }
    ctx->pc = 0x38E384u;
    // 0x38e384: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x38e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x38e388: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x38e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38e38c: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x38e38cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38e390: 0x1cc0ffd7  bgtz        $a2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x38E390u;
    {
        const bool branch_taken_0x38e390 = (GPR_S64(ctx, 6) > 0);
        if (branch_taken_0x38e390) {
            ctx->pc = 0x38E2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e2f0;
        }
    }
    ctx->pc = 0x38E398u;
    // 0x38e398: 0xc0e31a2  jal         func_38C688
    ctx->pc = 0x38E398u;
    SET_GPR_U32(ctx, 31, 0x38E3A0u);
    ctx->pc = 0x38E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E398u;
    // 0x38e39c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C688u, 0x38E398u, 0x38E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E3A0u;
label_38e3a0:
    // 0x38e3a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38e3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e3a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38e3a8: 0x14a2ffc1  bne         $a1, $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x38E3A8u;
    {
        const bool branch_taken_0x38e3a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x38e3a8) {
            ctx->pc = 0x38E2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e2b0;
        }
    }
    ctx->pc = 0x38E3B0u;
    // 0x38e3b0: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x38E3B0u;
    {
        const bool branch_taken_0x38e3b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e3b0) {
            ctx->pc = 0x38E3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E3B0u;
            // 0x38e3b4: 0xaec50000  sw          $a1, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E3B8u;
            goto label_38e3b8;
        }
    }
    ctx->pc = 0x38E3B8u;
label_38e3b8:
    // 0x38e3b8: 0x25e1023  subu        $v0, $s2, $fp
    ctx->pc = 0x38e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_38e3bc:
    // 0x38e3bc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38e3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38e3c0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x38e3c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38e3c4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x38e3c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38e3c8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x38e3c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38e3cc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38e3ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38e3d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38e3d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38e3d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38e3d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38e3d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38e3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e3dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38e3dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e3e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38e3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x38E3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3E4u;
        // 0x38e3e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E3ECu;
    // 0x38e3ec: 0x0  nop
    ctx->pc = 0x38e3ecu;
    // NOP
    ctx->pc = 0x38e3f0u;
}
