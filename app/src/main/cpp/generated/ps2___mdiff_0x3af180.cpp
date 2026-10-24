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

// Function: __mdiff
// Address: 0x3af180 - 0x3af310
void ps2___mdiff_0x3af180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mdiff_0x3af180");
#endif

    switch (ctx->pc) {
        case 0x3af1b0u: goto label_3af1b0;
        case 0x3af1c4u: goto label_3af1c4;
        case 0x3af1fcu: goto label_3af1fc;
        case 0x3af230u: goto label_3af230;
        case 0x3af288u: goto label_3af288;
        case 0x3af2d0u: goto label_3af2d0;
        default: break;
    }

    ctx->pc = 0x3af180u;

    // 0x3af180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3af180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3af184: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3af184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3af188: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3af188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3af18c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3af18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af190: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3af190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3af194: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3af194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af198: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3af198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af19c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3af19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3af1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3af1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3af1a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3af1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af1a8: 0xc0ebc46  jal         func_3AF118
    ctx->pc = 0x3AF1A8u;
    SET_GPR_U32(ctx, 31, 0x3AF1B0u);
    ctx->pc = 0x3AF1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1A8u;
    // 0x3af1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF118u, 0x3AF1A8u, 0x3AF1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1B0u;
label_3af1b0:
    // 0x3af1b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3af1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af1b4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF1B4u;
    {
        const bool branch_taken_0x3af1b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1B4u;
        // 0x3af1b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af1b4) {
            ctx->pc = 0x3AF1D8u;
            goto label_3af1d8;
        }
    }
    ctx->pc = 0x3AF1BCu;
    // 0x3af1bc: 0xc0eba06  jal         func_3AE818
    ctx->pc = 0x3AF1BCu;
    SET_GPR_U32(ctx, 31, 0x3AF1C4u);
    ctx->pc = 0x3AF1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1BCu;
    // 0x3af1c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE818u, 0x3AF1BCu, 0x3AF1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1C4u;
label_3af1c4:
    // 0x3af1c4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3af1c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af1cc: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x3af1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x3af1d0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3AF1D0u;
    {
        const bool branch_taken_0x3af1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1D0u;
        // 0x3af1d4: 0xad620010  sw          $v0, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af1d0) {
            ctx->pc = 0x3AF2ECu;
            goto label_3af2ec;
        }
    }
    ctx->pc = 0x3AF1D8u;
label_3af1d8:
    // 0x3af1d8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AF1D8u;
    {
        const bool branch_taken_0x3af1d8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3AF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF1D8u;
        // 0x3af1dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af1d8) {
            ctx->pc = 0x3AF1F0u;
            goto label_3af1f0;
        }
    }
    ctx->pc = 0x3AF1E0u;
    // 0x3af1e0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x3af1e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af1e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3af1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af1e8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3af1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af1ec: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x3af1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3af1f0:
    // 0x3af1f0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3af1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3af1f4: 0xc0eba06  jal         func_3AE818
    ctx->pc = 0x3AF1F4u;
    SET_GPR_U32(ctx, 31, 0x3AF1FCu);
    ctx->pc = 0x3AF1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1F4u;
    // 0x3af1f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE818u, 0x3AF1F4u, 0x3AF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1FCu;
label_3af1fc:
    // 0x3af1fc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3af1fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af200: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x3af200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3af204: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x3af204u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x3af208: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x3af208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x3af20c: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x3af20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x3af210: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3af210u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af214: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x3af214u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3af218: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3af218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3af21c: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x3af21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3af220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3af220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3af224: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x3af224u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3af228: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x3af228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3af22c: 0x0  nop
    ctx->pc = 0x3af22cu;
    // NOP
label_3af230:
    // 0x3af230: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3af230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3af234: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3af234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3af238: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3af238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3af23c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x3af23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3af240: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3af240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3af244: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3af244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3af248: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x3af248u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3af24c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3af24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3af250: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3af250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3af254: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3af254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3af258: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x3af258u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3af25c: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x3af25cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3af260: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x3af260u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3af264: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3af264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x3af268: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x3af268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3af26c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x3af26cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3af270: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x3af270u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3af274: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3AF274u;
    {
        const bool branch_taken_0x3af274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF274u;
        // 0x3af278: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af274) {
            ctx->pc = 0x3AF230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af230;
        }
    }
    ctx->pc = 0x3AF27Cu;
    // 0x3af27c: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x3af27cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3af280: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3AF280u;
    {
        const bool branch_taken_0x3af280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af280) {
            ctx->pc = 0x3AF284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF280u;
            // 0x3af284: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF2C0u;
            goto label_3af2c0;
        }
    }
    ctx->pc = 0x3AF288u;
label_3af288:
    // 0x3af288: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3af288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3af28c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3af28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3af290: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3af290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3af294: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x3af294u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3af298: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3af298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3af29c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3af29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3af2a0: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x3af2a0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3af2a4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x3af2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3af2a8: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x3af2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3af2ac: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x3af2acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3af2b0: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x3af2b0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3af2b4: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3AF2B4u;
    {
        const bool branch_taken_0x3af2b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2B4u;
        // 0x3af2b8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af2b4) {
            ctx->pc = 0x3AF288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af288;
        }
    }
    ctx->pc = 0x3AF2BCu;
    // 0x3af2bc: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3af2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3af2c0:
    // 0x3af2c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3af2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3af2c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AF2C4u;
    {
        const bool branch_taken_0x3af2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af2c4) {
            ctx->pc = 0x3AF2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF2C4u;
            // 0x3af2c8: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF2ECu;
            goto label_3af2ec;
        }
    }
    ctx->pc = 0x3AF2CCu;
    // 0x3af2cc: 0x0  nop
    ctx->pc = 0x3af2ccu;
    // NOP
label_3af2d0:
    // 0x3af2d0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3af2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x3af2d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3af2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3af2d8: 0x0  nop
    ctx->pc = 0x3af2d8u;
    // NOP
    // 0x3af2dc: 0x0  nop
    ctx->pc = 0x3af2dcu;
    // NOP
    // 0x3af2e0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AF2E0u;
    {
        const bool branch_taken_0x3af2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2E0u;
        // 0x3af2e4: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af2e0) {
            ctx->pc = 0x3AF2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af2d0;
        }
    }
    ctx->pc = 0x3AF2E8u;
    // 0x3af2e8: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x3af2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_3af2ec:
    // 0x3af2ec: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x3af2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3af2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af2f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3af2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af2f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3af2f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af2fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3af2fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3af300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af304: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF304u;
        // 0x3af308: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF30Cu;
    // 0x3af30c: 0x0  nop
    ctx->pc = 0x3af30cu;
    // NOP
    ctx->pc = 0x3af310u;
}
