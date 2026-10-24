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

// Function: func_00339108
// Address: 0x339108 - 0x3391a8
void func_00339108_0x339108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339108_0x339108");
#endif

    switch (ctx->pc) {
        case 0x339108u: goto label_339108;
        case 0x33910cu: goto label_33910c;
        case 0x339110u: goto label_339110;
        case 0x339114u: goto label_339114;
        case 0x339118u: goto label_339118;
        case 0x33911cu: goto label_33911c;
        case 0x339120u: goto label_339120;
        case 0x339124u: goto label_339124;
        case 0x339128u: goto label_339128;
        case 0x33912cu: goto label_33912c;
        case 0x339130u: goto label_339130;
        case 0x339134u: goto label_339134;
        case 0x339138u: goto label_339138;
        case 0x33913cu: goto label_33913c;
        case 0x339140u: goto label_339140;
        case 0x339144u: goto label_339144;
        case 0x339148u: goto label_339148;
        case 0x33914cu: goto label_33914c;
        case 0x339150u: goto label_339150;
        case 0x339154u: goto label_339154;
        case 0x339158u: goto label_339158;
        case 0x33915cu: goto label_33915c;
        case 0x339160u: goto label_339160;
        case 0x339164u: goto label_339164;
        case 0x339168u: goto label_339168;
        case 0x33916cu: goto label_33916c;
        case 0x339170u: goto label_339170;
        case 0x339174u: goto label_339174;
        case 0x339178u: goto label_339178;
        case 0x33917cu: goto label_33917c;
        case 0x339180u: goto label_339180;
        case 0x339184u: goto label_339184;
        case 0x339188u: goto label_339188;
        case 0x33918cu: goto label_33918c;
        case 0x339190u: goto label_339190;
        case 0x339194u: goto label_339194;
        case 0x339198u: goto label_339198;
        case 0x33919cu: goto label_33919c;
        case 0x3391a0u: goto label_3391a0;
        case 0x3391a4u: goto label_3391a4;
        default: break;
    }

    ctx->pc = 0x339108u;

label_339108:
    // 0x339108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33910c:
    // 0x33910c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_339110:
    if (ctx->pc == 0x339110u) {
        ctx->pc = 0x339110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33910Cu;
        // 0x339110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339114u;
        goto label_339114;
    }
    ctx->pc = 0x33910Cu;
    {
        const bool branch_taken_0x33910c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x339110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33910Cu;
        // 0x339110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33910c) {
            ctx->pc = 0x339130u;
            goto label_339130;
        }
    }
    ctx->pc = 0x339114u;
label_339114:
    // 0x339114: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339118:
    // 0x339118: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33911c:
    // 0x33911c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33911cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339120:
    // 0x339120: 0x248459f0  addiu       $a0, $a0, 0x59F0
    ctx->pc = 0x339120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23024));
label_339124:
    // 0x339124: 0x24a55920  addiu       $a1, $a1, 0x5920
    ctx->pc = 0x339124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
label_339128:
    // 0x339128: 0x80ce292  j           func_338A48
label_33912c:
    if (ctx->pc == 0x33912Cu) {
        ctx->pc = 0x33912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339128u;
        // 0x33912c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339130u;
        goto label_339130;
    }
    ctx->pc = 0x339128u;
    ctx->pc = 0x33912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339128u;
    // 0x33912c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x339128u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339130u;
label_339130:
    // 0x339130: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x339130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339134:
    // 0x339134: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_339138:
    if (ctx->pc == 0x339138u) {
        ctx->pc = 0x339138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339134u;
        // 0x339138: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33913Cu;
        goto label_33913c;
    }
    ctx->pc = 0x339134u;
    {
        const bool branch_taken_0x339134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339134) {
            ctx->pc = 0x339138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339134u;
            // 0x339138: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339158u;
            goto label_339158;
        }
    }
    ctx->pc = 0x33913Cu;
label_33913c:
    // 0x33913c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33913cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339140:
    // 0x339140: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339144:
    // 0x339144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339148:
    // 0x339148: 0x24845a00  addiu       $a0, $a0, 0x5A00
    ctx->pc = 0x339148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23040));
label_33914c:
    // 0x33914c: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x33914cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
label_339150:
    // 0x339150: 0x80ce292  j           func_338A48
label_339154:
    if (ctx->pc == 0x339154u) {
        ctx->pc = 0x339154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339150u;
        // 0x339154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339158u;
        goto label_339158;
    }
    ctx->pc = 0x339150u;
    ctx->pc = 0x339154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339150u;
    // 0x339154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x339150u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339158u;
label_339158:
    // 0x339158: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_33915c:
    if (ctx->pc == 0x33915Cu) {
        ctx->pc = 0x33915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339158u;
        // 0x33915c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339160u;
        goto label_339160;
    }
    ctx->pc = 0x339158u;
    {
        const bool branch_taken_0x339158 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x33915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339158u;
        // 0x33915c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339158) {
            ctx->pc = 0x33919Cu;
            goto label_33919c;
        }
    }
    ctx->pc = 0x339160u;
label_339160:
    // 0x339160: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x339160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_339164:
    // 0x339164: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_339168:
    if (ctx->pc == 0x339168u) {
        ctx->pc = 0x33916Cu;
        goto label_33916c;
    }
    ctx->pc = 0x339164u;
    {
        const bool branch_taken_0x339164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339164) {
            ctx->pc = 0x33919Cu;
            goto label_33919c;
        }
    }
    ctx->pc = 0x33916Cu;
label_33916c:
    // 0x33916c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_339170:
    if (ctx->pc == 0x339170u) {
        ctx->pc = 0x339170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33916Cu;
        // 0x339170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339174u;
        goto label_339174;
    }
    ctx->pc = 0x33916Cu;
    {
        const bool branch_taken_0x33916c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x339170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33916Cu;
        // 0x339170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33916c) {
            ctx->pc = 0x33919Cu;
            goto label_33919c;
        }
    }
    ctx->pc = 0x339174u;
label_339174:
    // 0x339174: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_339178:
    if (ctx->pc == 0x339178u) {
        ctx->pc = 0x33917Cu;
        goto label_33917c;
    }
    ctx->pc = 0x339174u;
    {
        const bool branch_taken_0x339174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x339174) {
            ctx->pc = 0x33919Cu;
            goto label_33919c;
        }
    }
    ctx->pc = 0x33917Cu;
label_33917c:
    // 0x33917c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x33917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_339180:
    // 0x339180: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x339180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_339184:
    // 0x339184: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_339188:
    if (ctx->pc == 0x339188u) {
        ctx->pc = 0x339188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339184u;
        // 0x339188: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33918Cu;
        goto label_33918c;
    }
    ctx->pc = 0x339184u;
    {
        const bool branch_taken_0x339184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339184u;
        // 0x339188: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339184) {
            ctx->pc = 0x33919Cu;
            goto label_33919c;
        }
    }
    ctx->pc = 0x33918Cu;
label_33918c:
    // 0x33918c: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x33918cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339190:
    // 0x339190: 0x40f809  jalr        $v0
label_339194:
    if (ctx->pc == 0x339194u) {
        ctx->pc = 0x339194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339190u;
        // 0x339194: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339198u;
        goto label_339198;
    }
    ctx->pc = 0x339190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339198u);
        ctx->pc = 0x339194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339190u;
        // 0x339194: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339190u, 0x339198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339198u;
label_339198:
    // 0x339198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33919c:
    // 0x33919c: 0x3e00008  jr          $ra
label_3391a0:
    if (ctx->pc == 0x3391A0u) {
        ctx->pc = 0x3391A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33919Cu;
        // 0x3391a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3391A4u;
        goto label_3391a4;
    }
    ctx->pc = 0x33919Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3391A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33919Cu;
        // 0x3391a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33919Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3391A4u;
label_3391a4:
    // 0x3391a4: 0x0  nop
    ctx->pc = 0x3391a4u;
    // NOP
    ctx->pc = 0x3391a8u;
}
