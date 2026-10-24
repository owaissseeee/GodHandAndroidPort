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

// Function: cCoreSave_gameInit
// Address: 0x1f98d0 - 0x1f9a98
void cCoreSave_gameInit_0x1f98d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_gameInit_0x1f98d0");
#endif

    switch (ctx->pc) {
        case 0x1f98e4u: goto label_1f98e4;
        case 0x1f98f0u: goto label_1f98f0;
        case 0x1f98fcu: goto label_1f98fc;
        case 0x1f9904u: goto label_1f9904;
        case 0x1f990cu: goto label_1f990c;
        case 0x1f9918u: goto label_1f9918;
        case 0x1f9920u: goto label_1f9920;
        case 0x1f992cu: goto label_1f992c;
        case 0x1f9938u: goto label_1f9938;
        case 0x1f9948u: goto label_1f9948;
        case 0x1f9958u: goto label_1f9958;
        case 0x1f9968u: goto label_1f9968;
        case 0x1f9978u: goto label_1f9978;
        case 0x1f9984u: goto label_1f9984;
        case 0x1f998cu: goto label_1f998c;
        case 0x1f9994u: goto label_1f9994;
        case 0x1f999cu: goto label_1f999c;
        case 0x1f99a4u: goto label_1f99a4;
        case 0x1f99acu: goto label_1f99ac;
        case 0x1f99b8u: goto label_1f99b8;
        case 0x1f99c0u: goto label_1f99c0;
        case 0x1f99c8u: goto label_1f99c8;
        case 0x1f99d0u: goto label_1f99d0;
        case 0x1f99dcu: goto label_1f99dc;
        case 0x1f99e4u: goto label_1f99e4;
        case 0x1f99ecu: goto label_1f99ec;
        case 0x1f99f4u: goto label_1f99f4;
        case 0x1f99fcu: goto label_1f99fc;
        case 0x1f9a04u: goto label_1f9a04;
        case 0x1f9a0cu: goto label_1f9a0c;
        case 0x1f9a44u: goto label_1f9a44;
        case 0x1f9a54u: goto label_1f9a54;
        case 0x1f9a64u: goto label_1f9a64;
        case 0x1f9a70u: goto label_1f9a70;
        case 0x1f9a7cu: goto label_1f9a7c;
        case 0x1f9a88u: goto label_1f9a88;
        default: break;
    }

    ctx->pc = 0x1f98d0u;

    // 0x1f98d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f98d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f98d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f98d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f98d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f98dc: 0xc07eaca  jal         func_1FAB28
    ctx->pc = 0x1F98DCu;
    SET_GPR_U32(ctx, 31, 0x1F98E4u);
    ctx->pc = 0x1F98E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98DCu;
    // 0x1f98e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB28u, 0x1F98DCu, 0x1F98E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98E4u;
label_1f98e4:
    // 0x1f98e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f98e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98e8: 0xc07e9be  jal         func_1FA6F8
    ctx->pc = 0x1F98E8u;
    SET_GPR_U32(ctx, 31, 0x1F98F0u);
    ctx->pc = 0x1F98ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98E8u;
    // 0x1f98ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6F8u, 0x1F98E8u, 0x1F98F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98F0u;
label_1f98f0:
    // 0x1f98f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f98f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f98f4: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1F98F4u;
    SET_GPR_U32(ctx, 31, 0x1F98FCu);
    ctx->pc = 0x1F98F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98F4u;
    // 0x1f98f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1F98F4u, 0x1F98FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98FCu;
label_1f98fc:
    // 0x1f98fc: 0xc07eb2c  jal         func_1FACB0
    ctx->pc = 0x1F98FCu;
    SET_GPR_U32(ctx, 31, 0x1F9904u);
    ctx->pc = 0x1F9900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98FCu;
    // 0x1f9900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACB0u, 0x1F98FCu, 0x1F9904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9904u;
label_1f9904:
    // 0x1f9904: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x1F9904u;
    SET_GPR_U32(ctx, 31, 0x1F990Cu);
    ctx->pc = 0x1F9908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9904u;
    // 0x1f9908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x1F9904u, 0x1F990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F990Cu;
label_1f990c:
    // 0x1f990c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f990cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9910: 0xc07eb26  jal         func_1FAC98
    ctx->pc = 0x1F9910u;
    SET_GPR_U32(ctx, 31, 0x1F9918u);
    ctx->pc = 0x1F9914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9910u;
    // 0x1f9914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC98u, 0x1F9910u, 0x1F9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9918u;
label_1f9918:
    // 0x1f9918: 0xc07ee60  jal         func_1FB980
    ctx->pc = 0x1F9918u;
    SET_GPR_U32(ctx, 31, 0x1F9920u);
    ctx->pc = 0x1F991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9918u;
    // 0x1f991c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB980u, 0x1F9918u, 0x1F9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9920u;
label_1f9920:
    // 0x1f9920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9924: 0xc07ef68  jal         func_1FBDA0
    ctx->pc = 0x1F9924u;
    SET_GPR_U32(ctx, 31, 0x1F992Cu);
    ctx->pc = 0x1F9928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9924u;
    // 0x1f9928: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBDA0u, 0x1F9924u, 0x1F992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F992Cu;
label_1f992c:
    // 0x1f992c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9930: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x1F9930u;
    SET_GPR_U32(ctx, 31, 0x1F9938u);
    ctx->pc = 0x1F9934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9930u;
    // 0x1f9934: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x1F9930u, 0x1F9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9938u;
label_1f9938:
    // 0x1f9938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f993c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f993cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9940: 0xc07ea9a  jal         func_1FAA68
    ctx->pc = 0x1F9940u;
    SET_GPR_U32(ctx, 31, 0x1F9948u);
    ctx->pc = 0x1F9944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9940u;
    // 0x1f9944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA68u, 0x1F9940u, 0x1F9948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9948u;
label_1f9948:
    // 0x1f9948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f994c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9950: 0xc07ea9a  jal         func_1FAA68
    ctx->pc = 0x1F9950u;
    SET_GPR_U32(ctx, 31, 0x1F9958u);
    ctx->pc = 0x1F9954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9950u;
    // 0x1f9954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA68u, 0x1F9950u, 0x1F9958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9958u;
label_1f9958:
    // 0x1f9958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f995c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9960: 0xc07ea9a  jal         func_1FAA68
    ctx->pc = 0x1F9960u;
    SET_GPR_U32(ctx, 31, 0x1F9968u);
    ctx->pc = 0x1F9964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9960u;
    // 0x1f9964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA68u, 0x1F9960u, 0x1F9968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9968u;
label_1f9968:
    // 0x1f9968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f996c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9970: 0xc07ea9a  jal         func_1FAA68
    ctx->pc = 0x1F9970u;
    SET_GPR_U32(ctx, 31, 0x1F9978u);
    ctx->pc = 0x1F9974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9970u;
    // 0x1f9974: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA68u, 0x1F9970u, 0x1F9978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9978u;
label_1f9978:
    // 0x1f9978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f997c: 0xc07e9a4  jal         func_1FA690
    ctx->pc = 0x1F997Cu;
    SET_GPR_U32(ctx, 31, 0x1F9984u);
    ctx->pc = 0x1F9980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F997Cu;
    // 0x1f9980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA690u, 0x1F997Cu, 0x1F9984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9984u;
label_1f9984:
    // 0x1f9984: 0xc07ef74  jal         func_1FBDD0
    ctx->pc = 0x1F9984u;
    SET_GPR_U32(ctx, 31, 0x1F998Cu);
    ctx->pc = 0x1F9988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9984u;
    // 0x1f9988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBDD0u, 0x1F9984u, 0x1F998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F998Cu;
label_1f998c:
    // 0x1f998c: 0xc07efae  jal         func_1FBEB8
    ctx->pc = 0x1F998Cu;
    SET_GPR_U32(ctx, 31, 0x1F9994u);
    ctx->pc = 0x1F9990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F998Cu;
    // 0x1f9990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEB8u, 0x1F998Cu, 0x1F9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9994u;
label_1f9994:
    // 0x1f9994: 0xc07ea08  jal         func_1FA820
    ctx->pc = 0x1F9994u;
    SET_GPR_U32(ctx, 31, 0x1F999Cu);
    ctx->pc = 0x1F9998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9994u;
    // 0x1f9998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA820u, 0x1F9994u, 0x1F999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F999Cu;
label_1f999c:
    // 0x1f999c: 0xc07efd8  jal         func_1FBF60
    ctx->pc = 0x1F999Cu;
    SET_GPR_U32(ctx, 31, 0x1F99A4u);
    ctx->pc = 0x1F99A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F999Cu;
    // 0x1f99a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF60u, 0x1F999Cu, 0x1F99A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99A4u;
label_1f99a4:
    // 0x1f99a4: 0xc07f024  jal         func_1FC090
    ctx->pc = 0x1F99A4u;
    SET_GPR_U32(ctx, 31, 0x1F99ACu);
    ctx->pc = 0x1F99A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99A4u;
    // 0x1f99a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC090u, 0x1F99A4u, 0x1F99ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99ACu;
label_1f99ac:
    // 0x1f99ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f99acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f99b0: 0xc07f040  jal         func_1FC100
    ctx->pc = 0x1F99B0u;
    SET_GPR_U32(ctx, 31, 0x1F99B8u);
    ctx->pc = 0x1F99B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99B0u;
    // 0x1f99b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC100u, 0x1F99B0u, 0x1F99B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99B8u;
label_1f99b8:
    // 0x1f99b8: 0xc07e7f0  jal         func_1F9FC0
    ctx->pc = 0x1F99B8u;
    SET_GPR_U32(ctx, 31, 0x1F99C0u);
    ctx->pc = 0x1F99BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99B8u;
    // 0x1f99bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9FC0u, 0x1F99B8u, 0x1F99C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99C0u;
label_1f99c0:
    // 0x1f99c0: 0xc07f09e  jal         func_1FC278
    ctx->pc = 0x1F99C0u;
    SET_GPR_U32(ctx, 31, 0x1F99C8u);
    ctx->pc = 0x1F99C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99C0u;
    // 0x1f99c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC278u, 0x1F99C0u, 0x1F99C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99C8u;
label_1f99c8:
    // 0x1f99c8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1F99C8u;
    SET_GPR_U32(ctx, 31, 0x1F99D0u);
    ctx->pc = 0x1F99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99C8u;
    // 0x1f99cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC320u, 0x1F99C8u, 0x1F99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99D0u;
label_1f99d0:
    // 0x1f99d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f99d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f99d4: 0xc07eb8a  jal         func_1FAE28
    ctx->pc = 0x1F99D4u;
    SET_GPR_U32(ctx, 31, 0x1F99DCu);
    ctx->pc = 0x1F99D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99D4u;
    // 0x1f99d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE28u, 0x1F99D4u, 0x1F99DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99DCu;
label_1f99dc:
    // 0x1f99dc: 0xc07f10e  jal         func_1FC438
    ctx->pc = 0x1F99DCu;
    SET_GPR_U32(ctx, 31, 0x1F99E4u);
    ctx->pc = 0x1F99E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99DCu;
    // 0x1f99e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC438u, 0x1F99DCu, 0x1F99E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99E4u;
label_1f99e4:
    // 0x1f99e4: 0xc07f17a  jal         func_1FC5E8
    ctx->pc = 0x1F99E4u;
    SET_GPR_U32(ctx, 31, 0x1F99ECu);
    ctx->pc = 0x1F99E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99E4u;
    // 0x1f99e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC5E8u, 0x1F99E4u, 0x1F99ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99ECu;
label_1f99ec:
    // 0x1f99ec: 0xc07f152  jal         func_1FC548
    ctx->pc = 0x1F99ECu;
    SET_GPR_U32(ctx, 31, 0x1F99F4u);
    ctx->pc = 0x1F99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99ECu;
    // 0x1f99f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC548u, 0x1F99ECu, 0x1F99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99F4u;
label_1f99f4:
    // 0x1f99f4: 0xc07f16e  jal         func_1FC5B8
    ctx->pc = 0x1F99F4u;
    SET_GPR_U32(ctx, 31, 0x1F99FCu);
    ctx->pc = 0x1F99F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99F4u;
    // 0x1f99f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC5B8u, 0x1F99F4u, 0x1F99FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99FCu;
label_1f99fc:
    // 0x1f99fc: 0xc07f186  jal         func_1FC618
    ctx->pc = 0x1F99FCu;
    SET_GPR_U32(ctx, 31, 0x1F9A04u);
    ctx->pc = 0x1F9A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99FCu;
    // 0x1f9a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC618u, 0x1F99FCu, 0x1F9A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A04u;
label_1f9a04:
    // 0x1f9a04: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x1F9A04u;
    SET_GPR_U32(ctx, 31, 0x1F9A0Cu);
    ctx->pc = 0x1F9A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A04u;
    // 0x1f9a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x1F9A04u, 0x1F9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A0Cu;
label_1f9a0c:
    // 0x1f9a0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f9a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9a14: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9A14u;
    {
        const bool branch_taken_0x1f9a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A14u;
        // 0x1f9a18: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a14) {
            ctx->pc = 0x1F9A3Cu;
            goto label_1f9a3c;
        }
    }
    ctx->pc = 0x1F9A1Cu;
    // 0x1f9a1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9A1Cu;
    {
        const bool branch_taken_0x1f9a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A1Cu;
        // 0x1f9a20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a1c) {
            ctx->pc = 0x1F9A34u;
            goto label_1f9a34;
        }
    }
    ctx->pc = 0x1F9A24u;
    // 0x1f9a24: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9A24u;
    {
        const bool branch_taken_0x1f9a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9a24) {
            ctx->pc = 0x1F9A4Cu;
            goto label_1f9a4c;
        }
    }
    ctx->pc = 0x1F9A2Cu;
    // 0x1f9a2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9A2Cu;
    {
        const bool branch_taken_0x1f9a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9a2c) {
            ctx->pc = 0x1F9A3Cu;
            goto label_1f9a3c;
        }
    }
    ctx->pc = 0x1F9A34u;
label_1f9a34:
    // 0x1f9a34: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9A34u;
    {
        const bool branch_taken_0x1f9a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9a34) {
            ctx->pc = 0x1F9A5Cu;
            goto label_1f9a5c;
        }
    }
    ctx->pc = 0x1F9A3Cu;
label_1f9a3c:
    // 0x1f9a3c: 0xc07e6b4  jal         func_1F9AD0
    ctx->pc = 0x1F9A3Cu;
    SET_GPR_U32(ctx, 31, 0x1F9A44u);
    ctx->pc = 0x1F9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A3Cu;
    // 0x1f9a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9AD0u, 0x1F9A3Cu, 0x1F9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A44u;
label_1f9a44:
    // 0x1f9a44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9A44u;
    {
        const bool branch_taken_0x1f9a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A44u;
        // 0x1f9a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a44) {
            ctx->pc = 0x1F9A68u;
            goto label_1f9a68;
        }
    }
    ctx->pc = 0x1F9A4Cu;
label_1f9a4c:
    // 0x1f9a4c: 0xc07e6a6  jal         func_1F9A98
    ctx->pc = 0x1F9A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F9A54u);
    ctx->pc = 0x1F9A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A4Cu;
    // 0x1f9a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9A98u, 0x1F9A4Cu, 0x1F9A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A54u;
label_1f9a54:
    // 0x1f9a54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9A54u;
    {
        const bool branch_taken_0x1f9a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A54u;
        // 0x1f9a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a54) {
            ctx->pc = 0x1F9A68u;
            goto label_1f9a68;
        }
    }
    ctx->pc = 0x1F9A5Cu;
label_1f9a5c:
    // 0x1f9a5c: 0xc07e6bc  jal         func_1F9AF0
    ctx->pc = 0x1F9A5Cu;
    SET_GPR_U32(ctx, 31, 0x1F9A64u);
    ctx->pc = 0x1F9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A5Cu;
    // 0x1f9a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9AF0u, 0x1F9A5Cu, 0x1F9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A64u;
label_1f9a64:
    // 0x1f9a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a68:
    // 0x1f9a68: 0xc07ead4  jal         func_1FAB50
    ctx->pc = 0x1F9A68u;
    SET_GPR_U32(ctx, 31, 0x1F9A70u);
    ctx->pc = 0x1F9A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A68u;
    // 0x1f9a6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1F9A68u, 0x1F9A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A70u;
label_1f9a70:
    // 0x1f9a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a74: 0xc07ead4  jal         func_1FAB50
    ctx->pc = 0x1F9A74u;
    SET_GPR_U32(ctx, 31, 0x1F9A7Cu);
    ctx->pc = 0x1F9A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A74u;
    // 0x1f9a78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1F9A74u, 0x1F9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A7Cu;
label_1f9a7c:
    // 0x1f9a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a80: 0xc07ead4  jal         func_1FAB50
    ctx->pc = 0x1F9A80u;
    SET_GPR_U32(ctx, 31, 0x1F9A88u);
    ctx->pc = 0x1F9A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A80u;
    // 0x1f9a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1F9A80u, 0x1F9A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A88u;
label_1f9a88:
    // 0x1f9a88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f9a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A90u;
        // 0x1f9a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9A98u;
}
