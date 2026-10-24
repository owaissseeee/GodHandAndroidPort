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

// Function: func_00324040
// Address: 0x324040 - 0x324108
void func_00324040_0x324040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324040_0x324040");
#endif

    switch (ctx->pc) {
        case 0x32406cu: goto label_32406c;
        case 0x324080u: goto label_324080;
        case 0x3240bcu: goto label_3240bc;
        case 0x3240d0u: goto label_3240d0;
        case 0x3240ecu: goto label_3240ec;
        default: break;
    }

    ctx->pc = 0x324040u;

    // 0x324040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x324044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x324044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32404c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32404cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324050: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x324050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324054: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x324054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324058: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x324058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x32405c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x324060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x324064: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x324064u;
    SET_GPR_U32(ctx, 31, 0x32406Cu);
    ctx->pc = 0x324068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324064u;
    // 0x324068: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x324064u, 0x32406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32406Cu;
label_32406c:
    // 0x32406c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32406cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x324070: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324070u;
    {
        const bool branch_taken_0x324070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x324074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324070u;
        // 0x324074: 0x24841858  addiu       $a0, $a0, 0x1858 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324070) {
            ctx->pc = 0x324088u;
            goto label_324088;
        }
    }
    ctx->pc = 0x324078u;
    // 0x324078: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x324078u;
    SET_GPR_U32(ctx, 31, 0x324080u);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x324078u, 0x324080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324080u;
label_324080:
    // 0x324080: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x324080u;
    {
        const bool branch_taken_0x324080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324080u;
        // 0x324084: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324080) {
            ctx->pc = 0x3240F0u;
            goto label_3240f0;
        }
    }
    ctx->pc = 0x324088u;
label_324088:
    // 0x324088: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x324088u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32408c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x32408cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324090: 0x10710016  beq         $v1, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x324090u;
    {
        const bool branch_taken_0x324090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x324094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324090u;
        // 0x324094: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324090) {
            ctx->pc = 0x3240ECu;
            goto label_3240ec;
        }
    }
    ctx->pc = 0x324098u;
    // 0x324098: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324098u;
    {
        const bool branch_taken_0x324098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x324098) {
            ctx->pc = 0x32409Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324098u;
            // 0x32409c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3240A8u;
            goto label_3240a8;
        }
    }
    ctx->pc = 0x3240A0u;
    // 0x3240a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3240A0u;
    {
        const bool branch_taken_0x3240a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3240A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3240A0u;
        // 0x3240a4: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3240a0) {
            ctx->pc = 0x3240ECu;
            goto label_3240ec;
        }
    }
    ctx->pc = 0x3240A8u;
label_3240a8:
    // 0x3240a8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3240A8u;
    {
        const bool branch_taken_0x3240a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3240a8) {
            ctx->pc = 0x3240C8u;
            goto label_3240c8;
        }
    }
    ctx->pc = 0x3240B0u;
    // 0x3240b0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3240b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3240b4: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x3240B4u;
    SET_GPR_U32(ctx, 31, 0x3240BCu);
    ctx->pc = 0x3240B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3240B4u;
    // 0x3240b8: 0x24841880  addiu       $a0, $a0, 0x1880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x3240B4u, 0x3240BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3240BCu;
label_3240bc:
    // 0x3240bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3240BCu;
    {
        const bool branch_taken_0x3240bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3240C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3240BCu;
        // 0x3240c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3240bc) {
            ctx->pc = 0x3240F0u;
            goto label_3240f0;
        }
    }
    ctx->pc = 0x3240C4u;
    // 0x3240c4: 0x0  nop
    ctx->pc = 0x3240c4u;
    // NOP
label_3240c8:
    // 0x3240c8: 0xc0ca0b4  jal         func_3282D0
    ctx->pc = 0x3240C8u;
    SET_GPR_U32(ctx, 31, 0x3240D0u);
    ctx->pc = 0x3282D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282D0u, 0x3240C8u, 0x3240D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3240D0u;
label_3240d0:
    // 0x3240d0: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x3240d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x3240d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3240d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3240d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3240d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3240dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3240dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3240e0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3240e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3240e4: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x3240E4u;
    SET_GPR_U32(ctx, 31, 0x3240ECu);
    ctx->pc = 0x3240E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3240E4u;
    // 0x3240e8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x3240E4u, 0x3240ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3240ECu;
label_3240ec:
    // 0x3240ec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3240ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3240f0:
    // 0x3240f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3240f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3240f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3240f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3240f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3240f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3240fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3240FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3240FCu;
        // 0x324100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3240FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324104u;
    // 0x324104: 0x0  nop
    ctx->pc = 0x324104u;
    // NOP
    ctx->pc = 0x324108u;
}
