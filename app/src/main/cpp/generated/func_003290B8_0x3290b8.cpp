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

// Function: func_003290B8
// Address: 0x3290b8 - 0x3291b8
void func_003290B8_0x3290b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003290B8_0x3290b8");
#endif

    switch (ctx->pc) {
        case 0x3290e4u: goto label_3290e4;
        case 0x329100u: goto label_329100;
        case 0x32910cu: goto label_32910c;
        case 0x329124u: goto label_329124;
        case 0x329134u: goto label_329134;
        case 0x32914cu: goto label_32914c;
        case 0x329154u: goto label_329154;
        case 0x32917cu: goto label_32917c;
        case 0x3291a0u: goto label_3291a0;
        default: break;
    }

    ctx->pc = 0x3290b8u;

    // 0x3290b8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3290b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3290bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3290bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3290c0: 0x244213d0  addiu       $v0, $v0, 0x13D0
    ctx->pc = 0x3290c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5072));
    // 0x3290c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3290c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3290c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3290c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3290cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3290ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3290d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3290d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3290d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3290d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290dc: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3290DCu;
    SET_GPR_U32(ctx, 31, 0x3290E4u);
    ctx->pc = 0x3290E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290DCu;
    // 0x3290e0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3290DCu, 0x3290E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290E4u;
label_3290e4:
    // 0x3290e4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3290e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3290e8: 0x248413e0  addiu       $a0, $a0, 0x13E0
    ctx->pc = 0x3290e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5088));
    // 0x3290ec: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x3290ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x3290f0: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x3290f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x3290f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3290f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290f8: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3290F8u;
    SET_GPR_U32(ctx, 31, 0x329100u);
    ctx->pc = 0x3290FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290F8u;
    // 0x3290fc: 0x261090a0  addiu       $s0, $s0, -0x6F60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3290F8u, 0x329100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329100u;
label_329100:
    // 0x329100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329104: 0xc0cc39c  jal         func_330E70
    ctx->pc = 0x329104u;
    SET_GPR_U32(ctx, 31, 0x32910Cu);
    ctx->pc = 0x329108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329104u;
    // 0x329108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330E70u, 0x329104u, 0x32910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32910Cu;
label_32910c:
    // 0x32910c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32910cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x329110: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x329110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x329114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329118: 0x24841f30  addiu       $a0, $a0, 0x1F30
    ctx->pc = 0x329118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7984));
    // 0x32911c: 0xc0cc0c6  jal         func_330318
    ctx->pc = 0x32911Cu;
    SET_GPR_U32(ctx, 31, 0x329124u);
    ctx->pc = 0x329120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32911Cu;
    // 0x329120: 0x24a56318  addiu       $a1, $a1, 0x6318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330318u, 0x32911Cu, 0x329124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329124u;
label_329124:
    // 0x329124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32912c: 0xc0cc39c  jal         func_330E70
    ctx->pc = 0x32912Cu;
    SET_GPR_U32(ctx, 31, 0x329134u);
    ctx->pc = 0x329130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32912Cu;
    // 0x329130: 0x3c100045  lui         $s0, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330E70u, 0x32912Cu, 0x329134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329134u;
label_329134:
    // 0x329134: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x329134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x329138: 0x26101f38  addiu       $s0, $s0, 0x1F38
    ctx->pc = 0x329138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7992));
    // 0x32913c: 0x24a527d8  addiu       $a1, $a1, 0x27D8
    ctx->pc = 0x32913cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10200));
    // 0x329140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329144: 0xc0cc0c6  jal         func_330318
    ctx->pc = 0x329144u;
    SET_GPR_U32(ctx, 31, 0x32914Cu);
    ctx->pc = 0x329148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329144u;
    // 0x329148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330318u, 0x329144u, 0x32914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32914Cu;
label_32914c:
    // 0x32914c: 0xc0cc160  jal         func_330580
    ctx->pc = 0x32914Cu;
    SET_GPR_U32(ctx, 31, 0x329154u);
    ctx->pc = 0x329150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32914Cu;
    // 0x329150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330580u, 0x32914Cu, 0x329154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329154u;
label_329154:
    // 0x329154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32915c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32915cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329160: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x329160u;
    {
        const bool branch_taken_0x329160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329160u;
        // 0x329164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329160) {
            ctx->pc = 0x329198u;
            goto label_329198;
        }
    }
    ctx->pc = 0x329168u;
    // 0x329168: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x329168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32916c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x32916cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x329170: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x329170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x329174: 0xc0ccf9a  jal         func_333E68
    ctx->pc = 0x329174u;
    SET_GPR_U32(ctx, 31, 0x32917Cu);
    ctx->pc = 0x329178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329174u;
    // 0x329178: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333E68u, 0x329174u, 0x32917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32917Cu;
label_32917c:
    // 0x32917c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32917cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32918c: 0x80ccfa2  j           func_333E88
    ctx->pc = 0x32918Cu;
    ctx->pc = 0x329190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32918Cu;
    // 0x329190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333E88u, 0x32918Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329194u;
    // 0x329194: 0x0  nop
    ctx->pc = 0x329194u;
    // NOP
label_329198:
    // 0x329198: 0xc0ccf9a  jal         func_333E68
    ctx->pc = 0x329198u;
    SET_GPR_U32(ctx, 31, 0x3291A0u);
    ctx->pc = 0x333E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333E68u, 0x329198u, 0x3291A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291A0u;
label_3291a0:
    // 0x3291a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3291a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3291a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3291a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3291a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3291ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3291acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3291b0: 0x80ccfa2  j           func_333E88
    ctx->pc = 0x3291B0u;
    ctx->pc = 0x3291B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291B0u;
    // 0x3291b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333E88u, 0x3291B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3291B8u;
}
