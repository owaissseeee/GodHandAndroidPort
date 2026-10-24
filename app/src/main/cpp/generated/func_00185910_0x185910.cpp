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

// Function: func_00185910
// Address: 0x185910 - 0x185a20
void func_00185910_0x185910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00185910_0x185910");
#endif

    switch (ctx->pc) {
        case 0x185934u: goto label_185934;
        case 0x185944u: goto label_185944;
        case 0x185994u: goto label_185994;
        case 0x1859c8u: goto label_1859c8;
        case 0x1859ecu: goto label_1859ec;
        case 0x185a0cu: goto label_185a0c;
        default: break;
    }

    ctx->pc = 0x185910u;

    // 0x185910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185918: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x185918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18591c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185920: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x185920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x185924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18592c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18592Cu;
    SET_GPR_U32(ctx, 31, 0x185934u);
    ctx->pc = 0x185930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18592Cu;
    // 0x185930: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18592Cu, 0x185934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185934u;
label_185934:
    // 0x185934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185938: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x185938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x18593c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18593Cu;
    SET_GPR_U32(ctx, 31, 0x185944u);
    ctx->pc = 0x185940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18593Cu;
    // 0x185940: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18593Cu, 0x185944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185944u;
label_185944:
    // 0x185944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185948: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x185948u;
    {
        const bool branch_taken_0x185948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185948u;
        // 0x18594c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185948) {
            ctx->pc = 0x185984u;
            goto label_185984;
        }
    }
    ctx->pc = 0x185950u;
    // 0x185950: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x185950u;
    {
        const bool branch_taken_0x185950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185950) {
            ctx->pc = 0x185954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185950u;
            // 0x185954: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185968u;
            goto label_185968;
        }
    }
    ctx->pc = 0x185958u;
    // 0x185958: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185958u;
    {
        const bool branch_taken_0x185958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185958u;
        // 0x18595c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185958) {
            ctx->pc = 0x185978u;
            goto label_185978;
        }
    }
    ctx->pc = 0x185960u;
    // 0x185960: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x185960u;
    {
        const bool branch_taken_0x185960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185960u;
        // 0x185964: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185960) {
            ctx->pc = 0x185A14u;
            goto label_185a14;
        }
    }
    ctx->pc = 0x185968u;
label_185968:
    // 0x185968: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185968u;
    {
        const bool branch_taken_0x185968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185968u;
        // 0x18596c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185968) {
            ctx->pc = 0x18599Cu;
            goto label_18599c;
        }
    }
    ctx->pc = 0x185970u;
    // 0x185970: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x185970u;
    {
        const bool branch_taken_0x185970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185970u;
        // 0x185974: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185970) {
            ctx->pc = 0x185A14u;
            goto label_185a14;
        }
    }
    ctx->pc = 0x185978u;
label_185978:
    // 0x185978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18597c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18597Cu;
    {
        const bool branch_taken_0x18597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18597Cu;
        // 0x185980: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18597c) {
            ctx->pc = 0x18598Cu;
            goto label_18598c;
        }
    }
    ctx->pc = 0x185984u;
label_185984:
    // 0x185984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185988: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x185988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_18598c:
    // 0x18598c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18598Cu;
    SET_GPR_U32(ctx, 31, 0x185994u);
    ctx->pc = 0x185990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18598Cu;
    // 0x185990: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18598Cu, 0x185994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185994u;
label_185994:
    // 0x185994: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x185994u;
    {
        const bool branch_taken_0x185994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185994u;
        // 0x185998: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185994) {
            ctx->pc = 0x185A10u;
            goto label_185a10;
        }
    }
    ctx->pc = 0x18599Cu;
label_18599c:
    // 0x18599c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x18599cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1859a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1859a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1859a4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1859a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1859a8: 0x24060115  addiu       $a2, $zero, 0x115
    ctx->pc = 0x1859a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    // 0x1859ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1859acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1859b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1859b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1859b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1859bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859c0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1859C0u;
    SET_GPR_U32(ctx, 31, 0x1859C8u);
    ctx->pc = 0x1859C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859C0u;
    // 0x1859c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1859C0u, 0x1859C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859C8u;
label_1859c8:
    // 0x1859c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1859c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1859ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1859d0: 0x24060113  addiu       $a2, $zero, 0x113
    ctx->pc = 0x1859d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x1859d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1859d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1859d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1859dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1859e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1859E4u;
    SET_GPR_U32(ctx, 31, 0x1859ECu);
    ctx->pc = 0x1859E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859E4u;
    // 0x1859e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1859E4u, 0x1859ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859ECu;
label_1859ec:
    // 0x1859ec: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1859ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1859f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1859f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859f4: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x1859f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x1859f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1859f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1859fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1859fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a00: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185a04: 0xc0c194a  jal         func_306528
    ctx->pc = 0x185A04u;
    SET_GPR_U32(ctx, 31, 0x185A0Cu);
    ctx->pc = 0x185A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A04u;
    // 0x185a08: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x185A04u, 0x185A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A0Cu;
label_185a0c:
    // 0x185a0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x185a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185a10:
    // 0x185a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185a14:
    // 0x185a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185a18: 0x3e00008  jr          $ra
    ctx->pc = 0x185A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A18u;
        // 0x185a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185A20u;
}
