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

// Function: func_003AC090
// Address: 0x3ac090 - 0x3ac2f8
void func_003AC090_0x3ac090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AC090_0x3ac090");
#endif

    switch (ctx->pc) {
        case 0x3ac13cu: goto label_3ac13c;
        case 0x3ac1e8u: goto label_3ac1e8;
        case 0x3ac28cu: goto label_3ac28c;
        default: break;
    }

    ctx->pc = 0x3ac090u;

    // 0x3ac090: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ac090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3ac094: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ac094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ac098: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ac098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3ac09c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3ac09cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3ac0a0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3ac0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3ac0a4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3ac0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3ac0a8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3ac0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3ac0ac: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3ac0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3ac0b0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3ac0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3ac0b4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x3ac0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac0b8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3ac0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3ac0bc: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x3ac0bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x3ac0c0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3ac0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3ac0c4: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x3ac0c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x3ac0c8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3ac0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3ac0cc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3ac0ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac0d0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ac0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3ac0d4: 0x245ea9d0  addiu       $fp, $v0, -0x5630
    ctx->pc = 0x3ac0d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x3ac0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ac0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ac0dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ac0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac0e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ac0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3ac0e4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3ac0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3ac0e8: 0x8fd40008  lw          $s4, 0x8($fp)
    ctx->pc = 0x3ac0e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3ac0ec: 0xdcc3ade0  ld          $v1, -0x5220($a2)
    ctx->pc = 0x3ac0ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4294946272)));
    // 0x3ac0f0: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x3ac0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3ac0f4: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x3ac0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3ac0f8: 0xc29824  and         $s3, $a2, $v0
    ctx->pc = 0x3ac0f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3ac0fc: 0x64a50010  daddiu      $a1, $a1, 0x10
    ctx->pc = 0x3ac0fcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)16);
    // 0x3ac100: 0x8ec2ade8  lw          $v0, -0x5218($s6)
    ctx->pc = 0x3ac100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946280)));
    // 0x3ac104: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x3ac104u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3ac108: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3ac108u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3ac10c: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AC10Cu;
    {
        const bool branch_taken_0x3ac10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3AC110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC10Cu;
        // 0x3ac110: 0x293a821  addu        $s5, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac10c) {
            ctx->pc = 0x3AC130u;
            goto label_3ac130;
        }
    }
    ctx->pc = 0x3AC114u;
    // 0x3ac114: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3ac114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3ac118: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x3ac118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x3ac11c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3ac11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3ac120: 0x64420fff  daddiu      $v0, $v0, 0xFFF
    ctx->pc = 0x3ac120u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4095);
    // 0x3ac124: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ac124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ac128: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x3ac128u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac12c: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3ac12cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_3ac130:
    // 0x3ac130: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ac130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac134: 0xc0eb832  jal         func_3AE0C8
    ctx->pc = 0x3AC134u;
    SET_GPR_U32(ctx, 31, 0x3AC13Cu);
    ctx->pc = 0x3AC138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC134u;
    // 0x3ac138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE0C8u, 0x3AC134u, 0x3AC13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC13Cu;
label_3ac13c:
    // 0x3ac13c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ac13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac140: 0x12300060  beq         $s1, $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3AC140u;
    {
        const bool branch_taken_0x3ac140 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3AC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC140u;
        // 0x3ac144: 0x235102b  sltu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac140) {
            ctx->pc = 0x3AC2C4u;
            goto label_3ac2c4;
        }
    }
    ctx->pc = 0x3AC148u;
    // 0x3ac148: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC148u;
    {
        const bool branch_taken_0x3ac148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC148u;
        // 0x3ac14c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac148) {
            ctx->pc = 0x3AC15Cu;
            goto label_3ac15c;
        }
    }
    ctx->pc = 0x3AC150u;
    // 0x3ac150: 0x569e005d  bnel        $s4, $fp, . + 4 + (0x5D << 2)
    ctx->pc = 0x3AC150u;
    {
        const bool branch_taken_0x3ac150 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        if (branch_taken_0x3ac150) {
            ctx->pc = 0x3AC154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC150u;
            // 0x3ac154: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC2C8u;
            goto label_3ac2c8;
        }
    }
    ctx->pc = 0x3AC158u;
    // 0x3ac158: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ac158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3ac15c:
    // 0x3ac15c: 0x8c43ae00  lw          $v1, -0x5200($v0)
    ctx->pc = 0x3ac15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946304)));
    // 0x3ac160: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ac160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ac164: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AC164u;
    {
        const bool branch_taken_0x3ac164 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x3AC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC164u;
        // 0x3ac168: 0xac43ae00  sw          $v1, -0x5200($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac164) {
            ctx->pc = 0x3AC180u;
            goto label_3ac180;
        }
    }
    ctx->pc = 0x3AC16Cu;
    // 0x3ac16c: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x3ac16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3ac170: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3ac170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3ac174: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x3ac174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3ac178: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3AC178u;
    {
        const bool branch_taken_0x3ac178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC178u;
        // 0x3ac17c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac178) {
            ctx->pc = 0x3AC28Cu;
            goto label_3ac28c;
        }
    }
    ctx->pc = 0x3AC180u;
label_3ac180:
    // 0x3ac180: 0x8ec2ade8  lw          $v0, -0x5218($s6)
    ctx->pc = 0x3ac180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946280)));
    // 0x3ac184: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC184u;
    {
        const bool branch_taken_0x3ac184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3AC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC184u;
        // 0x3ac188: 0x2351023  subu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac184) {
            ctx->pc = 0x3AC194u;
            goto label_3ac194;
        }
    }
    ctx->pc = 0x3AC18Cu;
    // 0x3ac18c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC18Cu;
    {
        const bool branch_taken_0x3ac18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC18Cu;
        // 0x3ac190: 0xaed1ade8  sw          $s1, -0x5218($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294946280), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac18c) {
            ctx->pc = 0x3AC1A0u;
            goto label_3ac1a0;
        }
    }
    ctx->pc = 0x3AC194u;
label_3ac194:
    // 0x3ac194: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ac194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ac198: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3ac198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3ac19c: 0xac62ae00  sw          $v0, -0x5200($v1)
    ctx->pc = 0x3ac19cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FAE00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAE00u, _value); } while (0);
label_3ac1a0:
    // 0x3ac1a0: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x3ac1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3ac1a4: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x3ac1a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ac1a8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC1A8u;
    {
        const bool branch_taken_0x3ac1a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1A8u;
        // 0x3ac1ac: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac1a8) {
            ctx->pc = 0x3AC1BCu;
            goto label_3ac1bc;
        }
    }
    ctx->pc = 0x3AC1B0u;
    // 0x3ac1b0: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x3ac1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ac1b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AC1B4u;
    {
        const bool branch_taken_0x3ac1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1B4u;
        // 0x3ac1b8: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac1b4) {
            ctx->pc = 0x3AC1C0u;
            goto label_3ac1c0;
        }
    }
    ctx->pc = 0x3AC1BCu;
label_3ac1bc:
    // 0x3ac1bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ac1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac1c0:
    // 0x3ac1c0: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x3ac1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3ac1c4: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x3ac1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3ac1c8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3ac1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3ac1cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ac1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac1d0: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x3ac1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x3ac1d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3ac1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3ac1d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ac1d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ac1dc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3ac1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3ac1e0: 0xc0eb832  jal         func_3AE0C8
    ctx->pc = 0x3AC1E0u;
    SET_GPR_U32(ctx, 31, 0x3AC1E8u);
    ctx->pc = 0x3AC1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC1E0u;
    // 0x3ac1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE0C8u, 0x3AC1E0u, 0x3AC1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC1E8u;
label_3ac1e8:
    // 0x3ac1e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ac1e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac1ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ac1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac1f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ac1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ac1f4: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3AC1F4u;
    {
        const bool branch_taken_0x3ac1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ac1f4) {
            ctx->pc = 0x3AC1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC1F4u;
            // 0x3ac1f8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC2C8u;
            goto label_3ac2c8;
        }
    }
    ctx->pc = 0x3AC1FCu;
    // 0x3ac1fc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3ac1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ac200: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3ac200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3ac204: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x3ac204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3ac208: 0x8c82ae00  lw          $v0, -0x5200($a0)
    ctx->pc = 0x3ac208u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAE00u));
    // 0x3ac20c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3ac20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3ac210: 0x2464a9d0  addiu       $a0, $v1, -0x5630
    ctx->pc = 0x3ac210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945232));
    // 0x3ac214: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ac214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3ac218: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x3ac218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3ac21c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3ac21cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3ac220: 0xaca2ae00  sw          $v0, -0x5200($a1)
    ctx->pc = 0x3ac220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FAE00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAE00u, _value); } while (0);
    // 0x3ac224: 0xac910008  sw          $s1, 0x8($a0)
    ctx->pc = 0x3ac224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3FA9D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA9D8u, _value); } while (0);
    // 0x3ac228: 0x12840018  beq         $s4, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AC228u;
    {
        const bool branch_taken_0x3ac228 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x3AC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC228u;
        // 0x3ac22c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac228) {
            ctx->pc = 0x3AC28Cu;
            goto label_3ac28c;
        }
    }
    ctx->pc = 0x3AC230u;
    // 0x3ac230: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x3ac230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ac234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC234u;
    {
        const bool branch_taken_0x3ac234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC234u;
        // 0x3ac238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac234) {
            ctx->pc = 0x3AC248u;
            goto label_3ac248;
        }
    }
    ctx->pc = 0x3AC23Cu;
    // 0x3ac23c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3ac23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ac240: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3AC240u;
    {
        const bool branch_taken_0x3ac240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC240u;
        // 0x3ac244: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac240) {
            ctx->pc = 0x3AC2C4u;
            goto label_3ac2c4;
        }
    }
    ctx->pc = 0x3AC248u;
label_3ac248:
    // 0x3ac248: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3ac248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3ac24c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ac24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac250: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x3ac250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x3ac254: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3ac254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x3ac258: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x3ac258u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3ac25c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ac25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3ac260: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x3ac260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x3ac264: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x3ac264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x3ac268: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3ac268u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x3ac26c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ac26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ac270: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ac270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ac274: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x3ac274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ac278: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC278u;
    {
        const bool branch_taken_0x3ac278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC278u;
        // 0x3ac27c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac278) {
            ctx->pc = 0x3AC28Cu;
            goto label_3ac28c;
        }
    }
    ctx->pc = 0x3AC280u;
    // 0x3ac280: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ac280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac284: 0xc0eb28a  jal         func_3ACA28
    ctx->pc = 0x3AC284u;
    SET_GPR_U32(ctx, 31, 0x3AC28Cu);
    ctx->pc = 0x3AC288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC284u;
    // 0x3ac288: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA28u, 0x3AC284u, 0x3AC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC28Cu;
label_3ac28c:
    // 0x3ac28c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ac28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ac290: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3ac290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3ac294: 0x8c43ae00  lw          $v1, -0x5200($v0)
    ctx->pc = 0x3ac294u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAE00u));
    // 0x3ac298: 0xdc82adf0  ld          $v0, -0x5210($a0)
    ctx->pc = 0x3ac298u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3FADF0u));
    // 0x3ac29c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3ac29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3ac2a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AC2A0u;
    {
        const bool branch_taken_0x3ac2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac2a0) {
            ctx->pc = 0x3AC2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC2A0u;
            // 0x3ac2a4: 0xfc83adf0  sd          $v1, -0x5210($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 4294946288), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC2A8u;
            goto label_3ac2a8;
        }
    }
    ctx->pc = 0x3AC2A8u;
label_3ac2a8:
    // 0x3ac2a8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3ac2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3ac2ac: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3ac2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3ac2b0: 0x8ca3ae00  lw          $v1, -0x5200($a1)
    ctx->pc = 0x3ac2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAE00u));
    // 0x3ac2b4: 0xdc82adf8  ld          $v0, -0x5208($a0)
    ctx->pc = 0x3ac2b4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3FADF8u));
    // 0x3ac2b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3ac2b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3ac2bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AC2BCu;
    {
        const bool branch_taken_0x3ac2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac2bc) {
            ctx->pc = 0x3AC2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC2BCu;
            // 0x3ac2c0: 0xfc83adf8  sd          $v1, -0x5208($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 4294946296), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC2C4u;
            goto label_3ac2c4;
        }
    }
    ctx->pc = 0x3AC2C4u;
label_3ac2c4:
    // 0x3ac2c4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3ac2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ac2c8:
    // 0x3ac2c8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3ac2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ac2cc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3ac2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ac2d0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3ac2d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ac2d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ac2d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ac2d8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3ac2d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ac2dc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3ac2dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ac2e0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3ac2e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ac2e4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3ac2e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ac2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC2ECu;
        // 0x3ac2f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC2F4u;
    // 0x3ac2f4: 0x0  nop
    ctx->pc = 0x3ac2f4u;
    // NOP
    ctx->pc = 0x3ac2f8u;
}
