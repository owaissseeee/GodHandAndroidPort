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

// Function: func_001A9938
// Address: 0x1a9938 - 0x1a9a30
void func_001A9938_0x1a9938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A9938_0x1a9938");
#endif

    switch (ctx->pc) {
        case 0x1a9980u: goto label_1a9980;
        case 0x1a999cu: goto label_1a999c;
        case 0x1a99b0u: goto label_1a99b0;
        case 0x1a99c4u: goto label_1a99c4;
        case 0x1a99e0u: goto label_1a99e0;
        case 0x1a99f0u: goto label_1a99f0;
        case 0x1a9a00u: goto label_1a9a00;
        case 0x1a9a0cu: goto label_1a9a0c;
        default: break;
    }

    ctx->pc = 0x1a9938u;

    // 0x1a9938: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a9938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a993c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a993cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a9940: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a9940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a9944: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x1a9944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x1a9948: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a9948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a994c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a994cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9950: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a9950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a9954: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a9954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a9958: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a9958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a995c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a995cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9960: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1a9960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x1a9964: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x1a9964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1a9968: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9968u;
    {
        const bool branch_taken_0x1a9968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9968u;
        // 0x1a996c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9968) {
            ctx->pc = 0x1A9984u;
            goto label_1a9984;
        }
    }
    ctx->pc = 0x1A9970u;
    // 0x1a9970: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a9970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a9974: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a9974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9978: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1A9978u;
    SET_GPR_U32(ctx, 31, 0x1A9980u);
    ctx->pc = 0x1A997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9978u;
    // 0x1a997c: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1A9978u, 0x1A9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9980u;
label_1a9980:
    // 0x1a9980: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x1a9980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
label_1a9984:
    // 0x1a9984: 0x8e250608  lw          $a1, 0x608($s1)
    ctx->pc = 0x1a9984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1a9988: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9988u;
    {
        const bool branch_taken_0x1a9988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9988u;
        // 0x1a998c: 0x3c13005d  lui         $s3, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9988) {
            ctx->pc = 0x1A99A4u;
            goto label_1a99a4;
        }
    }
    ctx->pc = 0x1A9990u;
    // 0x1a9990: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a9990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a9994: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1A9994u;
    SET_GPR_U32(ctx, 31, 0x1A999Cu);
    ctx->pc = 0x1A9998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9994u;
    // 0x1a9998: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1A9994u, 0x1A999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A999Cu;
label_1a999c:
    // 0x1a999c: 0xae200608  sw          $zero, 0x608($s1)
    ctx->pc = 0x1a999cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 0));
    // 0x1a99a0: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x1a99a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
label_1a99a4:
    // 0x1a99a4: 0x2630060c  addiu       $s0, $s1, 0x60C
    ctx->pc = 0x1a99a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1548));
    // 0x1a99a8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1a99a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a99ac: 0x0  nop
    ctx->pc = 0x1a99acu;
    // NOP
label_1a99b0:
    // 0x1a99b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a99b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a99b4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A99B4u;
    {
        const bool branch_taken_0x1a99b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a99b4) {
            ctx->pc = 0x1A99B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A99B4u;
            // 0x1a99b8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A99C8u;
            goto label_1a99c8;
        }
    }
    ctx->pc = 0x1A99BCu;
    // 0x1a99bc: 0xc04bb16  jal         func_12EC58
    ctx->pc = 0x1A99BCu;
    SET_GPR_U32(ctx, 31, 0x1A99C4u);
    ctx->pc = 0x1A99C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99BCu;
    // 0x1a99c0: 0x2664ae50  addiu       $a0, $s3, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x1A99BCu, 0x1A99C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A99C4u;
label_1a99c4:
    // 0x1a99c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a99c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1a99c8:
    // 0x1a99c8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A99C8u;
    {
        const bool branch_taken_0x1a99c8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1A99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99C8u;
        // 0x1a99cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99c8) {
            ctx->pc = 0x1A99B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a99b0;
        }
    }
    ctx->pc = 0x1A99D0u;
    // 0x1a99d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a99d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a99d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a99d8: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1A99D8u;
    SET_GPR_U32(ctx, 31, 0x1A99E0u);
    ctx->pc = 0x1A99DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99D8u;
    // 0x1a99dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1A99D8u, 0x1A99E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A99E0u;
label_1a99e0:
    // 0x1a99e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a99e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99e4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1a99e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a99e8: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1A99E8u;
    SET_GPR_U32(ctx, 31, 0x1A99F0u);
    ctx->pc = 0x1A99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99E8u;
    // 0x1a99ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1A99E8u, 0x1A99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A99F0u;
label_1a99f0:
    // 0x1a99f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a99f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a99f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a99f8: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1A99F8u;
    SET_GPR_U32(ctx, 31, 0x1A9A00u);
    ctx->pc = 0x1A99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99F8u;
    // 0x1a99fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1A99F8u, 0x1A9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A00u;
label_1a9a00:
    // 0x1a9a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a04: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1A9A04u;
    SET_GPR_U32(ctx, 31, 0x1A9A0Cu);
    ctx->pc = 0x1A9A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A04u;
    // 0x1a9a08: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1A9A04u, 0x1A9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A0Cu;
label_1a9a0c:
    // 0x1a9a0c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a9a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9a10: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a9a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9a14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a9a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9a18: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a9a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9a1c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a9a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A24u;
        // 0x1a9a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9A2Cu;
    // 0x1a9a2c: 0x0  nop
    ctx->pc = 0x1a9a2cu;
    // NOP
    ctx->pc = 0x1a9a30u;
}
