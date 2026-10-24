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

// Function: func_002D40F8
// Address: 0x2d40f8 - 0x2d4210
void func_002D40F8_0x2d40f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D40F8_0x2d40f8");
#endif

    switch (ctx->pc) {
        case 0x2d4124u: goto label_2d4124;
        case 0x2d4138u: goto label_2d4138;
        case 0x2d4140u: goto label_2d4140;
        case 0x2d4154u: goto label_2d4154;
        case 0x2d4168u: goto label_2d4168;
        case 0x2d417cu: goto label_2d417c;
        case 0x2d4190u: goto label_2d4190;
        case 0x2d41a4u: goto label_2d41a4;
        case 0x2d41b8u: goto label_2d41b8;
        case 0x2d41e4u: goto label_2d41e4;
        default: break;
    }

    ctx->pc = 0x2d40f8u;

    // 0x2d40f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d40f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d40fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d40fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d4100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4108: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2d4108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2d410c: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D410Cu;
    {
        const bool branch_taken_0x2d410c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2D4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D410Cu;
        // 0x2d4110: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d410c) {
            ctx->pc = 0x2D4144u;
            goto label_2d4144;
        }
    }
    ctx->pc = 0x2D4114u;
    // 0x2d4114: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4114u;
    {
        const bool branch_taken_0x2d4114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4114) {
            ctx->pc = 0x2D4118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4114u;
            // 0x2d4118: 0x8e0500a8  lw          $a1, 0xA8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4128u;
            goto label_2d4128;
        }
    }
    ctx->pc = 0x2D411Cu;
    // 0x2d411c: 0xc0d0a22  jal         func_342888
    ctx->pc = 0x2D411Cu;
    SET_GPR_U32(ctx, 31, 0x2D4124u);
    ctx->pc = 0x342888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342888u, 0x2D411Cu, 0x2D4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4124u;
label_2d4124:
    // 0x2d4124: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x2d4124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_2d4128:
    // 0x2d4128: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4128u;
    {
        const bool branch_taken_0x2d4128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4128) {
            ctx->pc = 0x2D4138u;
            goto label_2d4138;
        }
    }
    ctx->pc = 0x2D4130u;
    // 0x2d4130: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D4130u;
    SET_GPR_U32(ctx, 31, 0x2D4138u);
    ctx->pc = 0x2D4134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4130u;
    // 0x2d4134: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D4130u, 0x2D4138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4138u;
label_2d4138:
    // 0x2d4138: 0xc0c9882  jal         func_326208
    ctx->pc = 0x2D4138u;
    SET_GPR_U32(ctx, 31, 0x2D4140u);
    ctx->pc = 0x2D413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4138u;
    // 0x2d413c: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326208u, 0x2D4138u, 0x2D4140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4140u;
label_2d4140:
    // 0x2d4140: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d4144:
    // 0x2d4144: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4144u;
    {
        const bool branch_taken_0x2d4144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4144) {
            ctx->pc = 0x2D4148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4144u;
            // 0x2d4148: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4158u;
            goto label_2d4158;
        }
    }
    ctx->pc = 0x2D414Cu;
    // 0x2d414c: 0xc0d10f2  jal         func_3443C8
    ctx->pc = 0x2D414Cu;
    SET_GPR_U32(ctx, 31, 0x2D4154u);
    ctx->pc = 0x3443C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3443C8u, 0x2D414Cu, 0x2D4154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4154u;
label_2d4154:
    // 0x2d4154: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d4154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d4158:
    // 0x2d4158: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4158u;
    {
        const bool branch_taken_0x2d4158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4158) {
            ctx->pc = 0x2D415Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4158u;
            // 0x2d415c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D416Cu;
            goto label_2d416c;
        }
    }
    ctx->pc = 0x2D4160u;
    // 0x2d4160: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D4160u;
    SET_GPR_U32(ctx, 31, 0x2D4168u);
    ctx->pc = 0x2D4164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4160u;
    // 0x2d4164: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D4160u, 0x2D4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4168u;
label_2d4168:
    // 0x2d4168: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d4168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d416c:
    // 0x2d416c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D416Cu;
    {
        const bool branch_taken_0x2d416c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d416c) {
            ctx->pc = 0x2D4170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D416Cu;
            // 0x2d4170: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4180u;
            goto label_2d4180;
        }
    }
    ctx->pc = 0x2D4174u;
    // 0x2d4174: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D4174u;
    SET_GPR_U32(ctx, 31, 0x2D417Cu);
    ctx->pc = 0x2D4178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4174u;
    // 0x2d4178: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D4174u, 0x2D417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D417Cu;
label_2d417c:
    // 0x2d417c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2d417cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d4180:
    // 0x2d4180: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4180u;
    {
        const bool branch_taken_0x2d4180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4180) {
            ctx->pc = 0x2D4184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4180u;
            // 0x2d4184: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4194u;
            goto label_2d4194;
        }
    }
    ctx->pc = 0x2D4188u;
    // 0x2d4188: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D4188u;
    SET_GPR_U32(ctx, 31, 0x2D4190u);
    ctx->pc = 0x2D418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4188u;
    // 0x2d418c: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D4188u, 0x2D4190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4190u;
label_2d4190:
    // 0x2d4190: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2d4190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d4194:
    // 0x2d4194: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4194u;
    {
        const bool branch_taken_0x2d4194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4194) {
            ctx->pc = 0x2D4198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4194u;
            // 0x2d4198: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D41A8u;
            goto label_2d41a8;
        }
    }
    ctx->pc = 0x2D419Cu;
    // 0x2d419c: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D419Cu;
    SET_GPR_U32(ctx, 31, 0x2D41A4u);
    ctx->pc = 0x2D41A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D419Cu;
    // 0x2d41a0: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D419Cu, 0x2D41A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41A4u;
label_2d41a4:
    // 0x2d41a4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2d41a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2d41a8:
    // 0x2d41a8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D41A8u;
    {
        const bool branch_taken_0x2d41a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d41a8) {
            ctx->pc = 0x2D41ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D41A8u;
            // 0x2d41ac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D41BCu;
            goto label_2d41bc;
        }
    }
    ctx->pc = 0x2D41B0u;
    // 0x2d41b0: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D41B0u;
    SET_GPR_U32(ctx, 31, 0x2D41B8u);
    ctx->pc = 0x2D41B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41B0u;
    // 0x2d41b4: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D41B0u, 0x2D41B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41B8u;
label_2d41b8:
    // 0x2d41b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d41bc:
    // 0x2d41bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d41bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d41c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d41c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2d41cc: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x2d41ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2d41d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d41d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2d41d4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2d41d8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2d41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2d41dc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2D41DCu;
    SET_GPR_U32(ctx, 31, 0x2D41E4u);
    ctx->pc = 0x2D41E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41DCu;
    // 0x2d41e0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2D41DCu, 0x2D41E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41E4u;
label_2d41e4:
    // 0x2d41e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d41e8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2d41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2d41ec: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2d41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d41f0: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x2d41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x2d41f4: 0xa6020040  sh          $v0, 0x40($s0)
    ctx->pc = 0x2d41f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d41f8: 0xa6040042  sh          $a0, 0x42($s0)
    ctx->pc = 0x2d41f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d41fc: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x2d41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x2d4200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d4200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4208: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4208u;
        // 0x2d420c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4210u;
}
