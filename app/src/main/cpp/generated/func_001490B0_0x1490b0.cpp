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

// Function: func_001490B0
// Address: 0x1490b0 - 0x1491d0
void func_001490B0_0x1490b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001490B0_0x1490b0");
#endif

    switch (ctx->pc) {
        case 0x149100u: goto label_149100;
        case 0x149128u: goto label_149128;
        case 0x1491b8u: goto label_1491b8;
        default: break;
    }

    ctx->pc = 0x1490b0u;

    // 0x1490b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1490b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1490b4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x1490b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x1490b8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x1490b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x1490bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1490bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1490c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1490c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1490c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1490c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490c8: 0x3c01ce6e  lui         $at, 0xCE6E
    ctx->pc = 0x1490c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52846 << 16));
    // 0x1490cc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x1490ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x1490d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1490d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1490d4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1490d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1490d8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1490d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1490dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1490dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490e0: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1490e0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1490e4: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x1490e4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x1490e8: 0x94a9000a  lhu         $t1, 0xA($a1)
    ctx->pc = 0x1490e8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x1490ec: 0x11200030  beqz        $t1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1490ECu;
    {
        const bool branch_taken_0x1490ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1490F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490ECu;
        // 0x1490f0: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490ec) {
            ctx->pc = 0x1491B0u;
            goto label_1491b0;
        }
    }
    ctx->pc = 0x1490F4u;
    // 0x1490f4: 0x24aa0020  addiu       $t2, $a1, 0x20
    ctx->pc = 0x1490f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1490f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1490f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1490fc: 0x0  nop
    ctx->pc = 0x1490fcu;
    // NOP
label_149100:
    // 0x149100: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x149100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149104: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x149104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x149108: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x149108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14910c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14910cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x149110: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x149110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x149114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149118: 0x94670014  lhu         $a3, 0x14($v1)
    ctx->pc = 0x149118u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14911c: 0x10e00020  beqz        $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x14911Cu;
    {
        const bool branch_taken_0x14911c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x149120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14911Cu;
        // 0x149120: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14911c) {
            ctx->pc = 0x1491A0u;
            goto label_1491a0;
        }
    }
    ctx->pc = 0x149124u;
    // 0x149124: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x149124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_149128:
    // 0x149128: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x149128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14912c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x14912cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149130: 0x0  nop
    ctx->pc = 0x149130u;
    // NOP
    // 0x149134: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149134u;
    {
        const bool branch_taken_0x149134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149134) {
            ctx->pc = 0x149138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149134u;
            // 0x149138: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14913Cu;
            goto label_14913c;
        }
    }
    ctx->pc = 0x14913Cu;
label_14913c:
    // 0x14913c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x14913cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149140: 0x0  nop
    ctx->pc = 0x149140u;
    // NOP
    // 0x149144: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149144u;
    {
        const bool branch_taken_0x149144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149144) {
            ctx->pc = 0x149148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149144u;
            // 0x149148: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14914Cu;
            goto label_14914c;
        }
    }
    ctx->pc = 0x14914Cu;
label_14914c:
    // 0x14914c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x14914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149150: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x149150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149154: 0x0  nop
    ctx->pc = 0x149154u;
    // NOP
    // 0x149158: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149158u;
    {
        const bool branch_taken_0x149158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149158) {
            ctx->pc = 0x14915Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149158u;
            // 0x14915c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
            ctx->f[14] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149160u;
            goto label_149160;
        }
    }
    ctx->pc = 0x149160u;
label_149160:
    // 0x149160: 0x46007834  c.lt.s      $f15, $f0
    ctx->pc = 0x149160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149164: 0x0  nop
    ctx->pc = 0x149164u;
    // NOP
    // 0x149168: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149168u;
    {
        const bool branch_taken_0x149168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149168) {
            ctx->pc = 0x14916Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149168u;
            // 0x14916c: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
            ctx->f[15] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149170u;
            goto label_149170;
        }
    }
    ctx->pc = 0x149170u;
label_149170:
    // 0x149170: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x149170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149174: 0x46100034  c.lt.s      $f0, $f16
    ctx->pc = 0x149174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149178: 0x0  nop
    ctx->pc = 0x149178u;
    // NOP
    // 0x14917c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14917Cu;
    {
        const bool branch_taken_0x14917c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14917c) {
            ctx->pc = 0x149180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14917Cu;
            // 0x149180: 0x46000406  mov.s       $f16, $f0 (Delay Slot)
            ctx->f[16] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149184u;
            goto label_149184;
        }
    }
    ctx->pc = 0x149184u;
label_149184:
    // 0x149184: 0x46008834  c.lt.s      $f17, $f0
    ctx->pc = 0x149184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149188: 0x0  nop
    ctx->pc = 0x149188u;
    // NOP
    // 0x14918c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14918Cu;
    {
        const bool branch_taken_0x14918c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14918c) {
            ctx->pc = 0x149190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14918Cu;
            // 0x149190: 0x46000446  mov.s       $f17, $f0 (Delay Slot)
            ctx->f[17] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149194u;
            goto label_149194;
        }
    }
    ctx->pc = 0x149194u;
label_149194:
    // 0x149194: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x149194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x149198: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x149198u;
    {
        const bool branch_taken_0x149198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149198u;
        // 0x14919c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149198) {
            ctx->pc = 0x149128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149128;
        }
    }
    ctx->pc = 0x1491A0u;
label_1491a0:
    // 0x1491a0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1491a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491a4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1491a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1491a8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1491A8u;
    {
        const bool branch_taken_0x1491a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1491ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491A8u;
        // 0x1491ac: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491a8) {
            ctx->pc = 0x149100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149100;
        }
    }
    ctx->pc = 0x1491B0u;
label_1491b0:
    // 0x1491b0: 0xc07e2a2  jal         func_1F8A88
    ctx->pc = 0x1491B0u;
    SET_GPR_U32(ctx, 31, 0x1491B8u);
    ctx->pc = 0x1F8A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A88u, 0x1491B0u, 0x1491B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491B8u;
label_1491b8:
    // 0x1491b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1491b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1491bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1491BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1491C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491BCu;
        // 0x1491c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1491BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1491C4u;
    // 0x1491c4: 0x0  nop
    ctx->pc = 0x1491c4u;
    // NOP
    // 0x1491c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1491c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1491cc: 0x0  nop
    ctx->pc = 0x1491ccu;
    // NOP
    ctx->pc = 0x1491d0u;
}
