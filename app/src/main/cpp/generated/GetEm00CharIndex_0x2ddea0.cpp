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

// Function: GetEm00CharIndex
// Address: 0x2ddea0 - 0x2de980
void GetEm00CharIndex_0x2ddea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEm00CharIndex_0x2ddea0");
#endif

    switch (ctx->pc) {
        case 0x2de0a0u: goto label_2de0a0;
        case 0x2de0b8u: goto label_2de0b8;
        case 0x2de180u: goto label_2de180;
        case 0x2de19cu: goto label_2de19c;
        case 0x2de364u: goto label_2de364;
        case 0x2de6ccu: goto label_2de6cc;
        default: break;
    }

    ctx->pc = 0x2ddea0u;

    // 0x2ddea0: 0x2483fe00  addiu       $v1, $a0, -0x200
    ctx->pc = 0x2ddea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x2ddea4: 0x2c6200aa  sltiu       $v0, $v1, 0xAA
    ctx->pc = 0x2ddea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)170) ? 1 : 0);
    // 0x2ddea8: 0x104002b2  beqz        $v0, . + 4 + (0x2B2 << 2)
    ctx->pc = 0x2DDEA8u;
    {
        const bool branch_taken_0x2ddea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEA8u;
        // 0x2ddeac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddea8) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DDEB0u;
    // 0x2ddeb0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ddeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ddeb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ddeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ddeb8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ddeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ddebc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ddebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ddec0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ddec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddec4: 0x800008  jr          $a0
    ctx->pc = 0x2DDEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DDECCu: goto label_2ddecc;
            case 0x2DDEF4u: goto label_2ddef4;
            case 0x2DDF1Cu: goto label_2ddf1c;
            case 0x2DDF54u: goto label_2ddf54;
            case 0x2DDF7Cu: goto label_2ddf7c;
            case 0x2DDFA4u: goto label_2ddfa4;
            case 0x2DDFD0u: goto label_2ddfd0;
            case 0x2DE010u: goto label_2de010;
            case 0x2DE038u: goto label_2de038;
            case 0x2DE040u: goto label_2de040;
            case 0x2DE088u: goto label_2de088;
            case 0x2DE0D0u: goto label_2de0d0;
            case 0x2DE0F8u: goto label_2de0f8;
            case 0x2DE120u: goto label_2de120;
            case 0x2DE160u: goto label_2de160;
            case 0x2DE1ACu: goto label_2de1ac;
            case 0x2DE1DCu: goto label_2de1dc;
            case 0x2DE208u: goto label_2de208;
            case 0x2DE22Cu: goto label_2de22c;
            case 0x2DE26Cu: goto label_2de26c;
            case 0x2DE294u: goto label_2de294;
            case 0x2DE2DCu: goto label_2de2dc;
            case 0x2DE304u: goto label_2de304;
            case 0x2DE32Cu: goto label_2de32c;
            case 0x2DE374u: goto label_2de374;
            case 0x2DE3B4u: goto label_2de3b4;
            case 0x2DE3FCu: goto label_2de3fc;
            case 0x2DE424u: goto label_2de424;
            case 0x2DE464u: goto label_2de464;
            case 0x2DE46Cu: goto label_2de46c;
            case 0x2DE4A4u: goto label_2de4a4;
            case 0x2DE4ACu: goto label_2de4ac;
            case 0x2DE4C8u: goto label_2de4c8;
            case 0x2DE4F0u: goto label_2de4f0;
            case 0x2DE538u: goto label_2de538;
            case 0x2DE570u: goto label_2de570;
            case 0x2DE5B8u: goto label_2de5b8;
            case 0x2DE600u: goto label_2de600;
            case 0x2DE640u: goto label_2de640;
            case 0x2DE688u: goto label_2de688;
            case 0x2DE6C0u: goto label_2de6c0;
            case 0x2DE6DCu: goto label_2de6dc;
            case 0x2DE71Cu: goto label_2de71c;
            case 0x2DE748u: goto label_2de748;
            case 0x2DE750u: goto label_2de750;
            case 0x2DE764u: goto label_2de764;
            case 0x2DE780u: goto label_2de780;
            case 0x2DE794u: goto label_2de794;
            case 0x2DE79Cu: goto label_2de79c;
            case 0x2DE7A4u: goto label_2de7a4;
            case 0x2DE7ACu: goto label_2de7ac;
            case 0x2DE7F4u: goto label_2de7f4;
            case 0x2DE7FCu: goto label_2de7fc;
            case 0x2DE83Cu: goto label_2de83c;
            case 0x2DE850u: goto label_2de850;
            case 0x2DE864u: goto label_2de864;
            case 0x2DE86Cu: goto label_2de86c;
            case 0x2DE894u: goto label_2de894;
            case 0x2DE89Cu: goto label_2de89c;
            case 0x2DE8A4u: goto label_2de8a4;
            case 0x2DE8F4u: goto label_2de8f4;
            case 0x2DE91Cu: goto label_2de91c;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE96Cu: goto label_2de96c;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDEC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DDECCu;
label_2ddecc:
    // 0x2ddecc: 0x24a3fe00  addiu       $v1, $a1, -0x200
    ctx->pc = 0x2ddeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2dded0: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x2dded0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x2dded4: 0x104002a7  beqz        $v0, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x2DDED4u;
    {
        const bool branch_taken_0x2dded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDED4u;
        // 0x2dded8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dded4) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DDEDCu;
    // 0x2ddedc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ddedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ddee0: 0x2442d8d0  addiu       $v0, $v0, -0x2730
    ctx->pc = 0x2ddee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
    // 0x2ddee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ddee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ddee8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ddee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddeec: 0x800008  jr          $a0
    ctx->pc = 0x2DDEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDEECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DDEF4u;
label_2ddef4:
    // 0x2ddef4: 0x24a3fe00  addiu       $v1, $a1, -0x200
    ctx->pc = 0x2ddef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2ddef8: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2ddef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2ddefc: 0x1040029d  beqz        $v0, . + 4 + (0x29D << 2)
    ctx->pc = 0x2DDEFCu;
    {
        const bool branch_taken_0x2ddefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEFCu;
        // 0x2ddf00: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddefc) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DDF04u;
    // 0x2ddf04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ddf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ddf08: 0x2442d940  addiu       $v0, $v0, -0x26C0
    ctx->pc = 0x2ddf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x2ddf0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ddf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ddf10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ddf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddf14: 0x800008  jr          $a0
    ctx->pc = 0x2DDF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DDF1Cu;
label_2ddf1c:
    // 0x2ddf1c: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x2ddf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x2ddf20: 0x10a2028c  beq         $a1, $v0, . + 4 + (0x28C << 2)
    ctx->pc = 0x2DDF20u;
    {
        const bool branch_taken_0x2ddf20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF20u;
        // 0x2ddf24: 0x28a20251  slti        $v0, $a1, 0x251 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)593) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf20) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DDF28u;
    // 0x2ddf28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDF28u;
    {
        const bool branch_taken_0x2ddf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF28u;
        // 0x2ddf2c: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf28) {
            ctx->pc = 0x2DDF40u;
            goto label_2ddf40;
        }
    }
    ctx->pc = 0x2DDF30u;
    // 0x2ddf30: 0x10a2028c  beq         $a1, $v0, . + 4 + (0x28C << 2)
    ctx->pc = 0x2DDF30u;
    {
        const bool branch_taken_0x2ddf30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF30u;
        // 0x2ddf34: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf30) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DDF38u;
    // 0x2ddf38: 0x1000028f  b           . + 4 + (0x28F << 2)
    ctx->pc = 0x2DDF38u;
    {
        const bool branch_taken_0x2ddf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddf38) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DDF40u;
label_2ddf40:
    // 0x2ddf40: 0x24020251  addiu       $v0, $zero, 0x251
    ctx->pc = 0x2ddf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 593));
    // 0x2ddf44: 0x14a2028c  bne         $a1, $v0, . + 4 + (0x28C << 2)
    ctx->pc = 0x2DDF44u;
    {
        const bool branch_taken_0x2ddf44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF44u;
        // 0x2ddf48: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf44) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DDF4Cu;
    // 0x2ddf4c: 0x10000289  b           . + 4 + (0x289 << 2)
    ctx->pc = 0x2DDF4Cu;
    {
        const bool branch_taken_0x2ddf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF4Cu;
        // 0x2ddf50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf4c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DDF54u;
label_2ddf54:
    // 0x2ddf54: 0x24a3fe00  addiu       $v1, $a1, -0x200
    ctx->pc = 0x2ddf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2ddf58: 0x2c620016  sltiu       $v0, $v1, 0x16
    ctx->pc = 0x2ddf58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x2ddf5c: 0x10400285  beqz        $v0, . + 4 + (0x285 << 2)
    ctx->pc = 0x2DDF5Cu;
    {
        const bool branch_taken_0x2ddf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF5Cu;
        // 0x2ddf60: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf5c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DDF64u;
    // 0x2ddf64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ddf64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ddf68: 0x2442d980  addiu       $v0, $v0, -0x2680
    ctx->pc = 0x2ddf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
    // 0x2ddf6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ddf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ddf70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ddf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddf74: 0x800008  jr          $a0
    ctx->pc = 0x2DDF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DDF7Cu;
label_2ddf7c:
    // 0x2ddf7c: 0x24a3fe00  addiu       $v1, $a1, -0x200
    ctx->pc = 0x2ddf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2ddf80: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x2ddf80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x2ddf84: 0x1040027b  beqz        $v0, . + 4 + (0x27B << 2)
    ctx->pc = 0x2DDF84u;
    {
        const bool branch_taken_0x2ddf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF84u;
        // 0x2ddf88: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf84) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DDF8Cu;
    // 0x2ddf8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ddf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ddf90: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x2ddf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x2ddf94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ddf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ddf98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ddf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddf9c: 0x800008  jr          $a0
    ctx->pc = 0x2DDF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DDFA4u;
label_2ddfa4:
    // 0x2ddfa4: 0x2402020b  addiu       $v0, $zero, 0x20B
    ctx->pc = 0x2ddfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    // 0x2ddfa8: 0x10a2026e  beq         $a1, $v0, . + 4 + (0x26E << 2)
    ctx->pc = 0x2DDFA8u;
    {
        const bool branch_taken_0x2ddfa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFA8u;
        // 0x2ddfac: 0x28a2020c  slti        $v0, $a1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)524) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfa8) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DDFB0u;
    // 0x2ddfb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDFB0u;
    {
        const bool branch_taken_0x2ddfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFB0u;
        // 0x2ddfb4: 0x24020208  addiu       $v0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfb0) {
            ctx->pc = 0x2DDFC8u;
            goto label_2ddfc8;
        }
    }
    ctx->pc = 0x2DDFB8u;
    // 0x2ddfb8: 0x10a20268  beq         $a1, $v0, . + 4 + (0x268 << 2)
    ctx->pc = 0x2DDFB8u;
    {
        const bool branch_taken_0x2ddfb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFB8u;
        // 0x2ddfbc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfb8) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DDFC0u;
    // 0x2ddfc0: 0x1000026d  b           . + 4 + (0x26D << 2)
    ctx->pc = 0x2DDFC0u;
    {
        const bool branch_taken_0x2ddfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddfc0) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DDFC8u;
label_2ddfc8:
    // 0x2ddfc8: 0x10000269  b           . + 4 + (0x269 << 2)
    ctx->pc = 0x2DDFC8u;
    {
        const bool branch_taken_0x2ddfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFC8u;
        // 0x2ddfcc: 0x38a2021c  xori        $v0, $a1, 0x21C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)540);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfc8) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DDFD0u;
label_2ddfd0:
    // 0x2ddfd0: 0x24020216  addiu       $v0, $zero, 0x216
    ctx->pc = 0x2ddfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    // 0x2ddfd4: 0x10a20263  beq         $a1, $v0, . + 4 + (0x263 << 2)
    ctx->pc = 0x2DDFD4u;
    {
        const bool branch_taken_0x2ddfd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFD4u;
        // 0x2ddfd8: 0x28a20217  slti        $v0, $a1, 0x217 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)535) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfd4) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DDFDCu;
    // 0x2ddfdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDFDCu;
    {
        const bool branch_taken_0x2ddfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFDCu;
        // 0x2ddfe0: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfdc) {
            ctx->pc = 0x2DDFF4u;
            goto label_2ddff4;
        }
    }
    ctx->pc = 0x2DDFE4u;
    // 0x2ddfe4: 0x10a2025b  beq         $a1, $v0, . + 4 + (0x25B << 2)
    ctx->pc = 0x2DDFE4u;
    {
        const bool branch_taken_0x2ddfe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFE4u;
        // 0x2ddfe8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfe4) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DDFECu;
    // 0x2ddfec: 0x10000262  b           . + 4 + (0x262 << 2)
    ctx->pc = 0x2DDFECu;
    {
        const bool branch_taken_0x2ddfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddfec) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DDFF4u;
label_2ddff4:
    // 0x2ddff4: 0x2402021b  addiu       $v0, $zero, 0x21B
    ctx->pc = 0x2ddff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
    // 0x2ddff8: 0x10a20258  beq         $a1, $v0, . + 4 + (0x258 << 2)
    ctx->pc = 0x2DDFF8u;
    {
        const bool branch_taken_0x2ddff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFF8u;
        // 0x2ddffc: 0x24020242  addiu       $v0, $zero, 0x242 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddff8) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE000u;
    // 0x2de000: 0x14a2025d  bne         $a1, $v0, . + 4 + (0x25D << 2)
    ctx->pc = 0x2DE000u;
    {
        const bool branch_taken_0x2de000 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE000u;
        // 0x2de004: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de000) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE008u;
    // 0x2de008: 0x1000025a  b           . + 4 + (0x25A << 2)
    ctx->pc = 0x2DE008u;
    {
        const bool branch_taken_0x2de008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE008u;
        // 0x2de00c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de008) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE010u;
label_2de010:
    // 0x2de010: 0x24a3fe00  addiu       $v1, $a1, -0x200
    ctx->pc = 0x2de010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2de014: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2de014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2de018: 0x10400256  beqz        $v0, . + 4 + (0x256 << 2)
    ctx->pc = 0x2DE018u;
    {
        const bool branch_taken_0x2de018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE018u;
        // 0x2de01c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de018) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE020u;
    // 0x2de020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2de024: 0x2442da50  addiu       $v0, $v0, -0x25B0
    ctx->pc = 0x2de024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957648));
    // 0x2de028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de02c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de030: 0x800008  jr          $a0
    ctx->pc = 0x2DE030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE030u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE038u;
label_2de038:
    // 0x2de038: 0x1000024d  b           . + 4 + (0x24D << 2)
    ctx->pc = 0x2DE038u;
    {
        const bool branch_taken_0x2de038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE038u;
        // 0x2de03c: 0x38a20209  xori        $v0, $a1, 0x209 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)521);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de038) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE040u;
label_2de040:
    // 0x2de040: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x2de040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x2de044: 0x10a20243  beq         $a1, $v0, . + 4 + (0x243 << 2)
    ctx->pc = 0x2DE044u;
    {
        const bool branch_taken_0x2de044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE044u;
        // 0x2de048: 0x28a20241  slti        $v0, $a1, 0x241 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)577) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de044) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE04Cu;
    // 0x2de04c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE04Cu;
    {
        const bool branch_taken_0x2de04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE04Cu;
        // 0x2de050: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de04c) {
            ctx->pc = 0x2DE06Cu;
            goto label_2de06c;
        }
    }
    ctx->pc = 0x2DE054u;
    // 0x2de054: 0x10a20241  beq         $a1, $v0, . + 4 + (0x241 << 2)
    ctx->pc = 0x2DE054u;
    {
        const bool branch_taken_0x2de054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE054u;
        // 0x2de058: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de054) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE05Cu;
    // 0x2de05c: 0x10a2021b  beq         $a1, $v0, . + 4 + (0x21B << 2)
    ctx->pc = 0x2DE05Cu;
    {
        const bool branch_taken_0x2de05c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE05Cu;
        // 0x2de060: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de05c) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE064u;
    // 0x2de064: 0x10000244  b           . + 4 + (0x244 << 2)
    ctx->pc = 0x2DE064u;
    {
        const bool branch_taken_0x2de064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de064) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE06Cu;
label_2de06c:
    // 0x2de06c: 0x24020248  addiu       $v0, $zero, 0x248
    ctx->pc = 0x2de06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
    // 0x2de070: 0x10a2023c  beq         $a1, $v0, . + 4 + (0x23C << 2)
    ctx->pc = 0x2DE070u;
    {
        const bool branch_taken_0x2de070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE070u;
        // 0x2de074: 0x24020249  addiu       $v0, $zero, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de070) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE078u;
    // 0x2de078: 0x14a2023f  bne         $a1, $v0, . + 4 + (0x23F << 2)
    ctx->pc = 0x2DE078u;
    {
        const bool branch_taken_0x2de078 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE078u;
        // 0x2de07c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de078) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE080u;
    // 0x2de080: 0x1000023c  b           . + 4 + (0x23C << 2)
    ctx->pc = 0x2DE080u;
    {
        const bool branch_taken_0x2de080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE080u;
        // 0x2de084: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de080) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE088u;
label_2de088:
    // 0x2de088: 0x24020205  addiu       $v0, $zero, 0x205
    ctx->pc = 0x2de088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x2de08c: 0x10a20233  beq         $a1, $v0, . + 4 + (0x233 << 2)
    ctx->pc = 0x2DE08Cu;
    {
        const bool branch_taken_0x2de08c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE08Cu;
        // 0x2de090: 0x28a20206  slti        $v0, $a1, 0x206 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)518) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de08c) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE094u;
    // 0x2de094: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DE094u;
    {
        const bool branch_taken_0x2de094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE094u;
        // 0x2de098: 0x2402021e  addiu       $v0, $zero, 0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de094) {
            ctx->pc = 0x2DE0B8u;
            goto label_2de0b8;
        }
    }
    ctx->pc = 0x2DE09Cu;
    // 0x2de09c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2de09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2de0a0:
    // 0x2de0a0: 0x10a2022c  beq         $a1, $v0, . + 4 + (0x22C << 2)
    ctx->pc = 0x2DE0A0u;
    {
        const bool branch_taken_0x2de0a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0A0u;
        // 0x2de0a4: 0x24020204  addiu       $v0, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0a0) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE0A8u;
    // 0x2de0a8: 0x10a2020a  beq         $a1, $v0, . + 4 + (0x20A << 2)
    ctx->pc = 0x2DE0A8u;
    {
        const bool branch_taken_0x2de0a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0A8u;
        // 0x2de0ac: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0a8) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE0B0u;
    // 0x2de0b0: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x2DE0B0u;
    {
        const bool branch_taken_0x2de0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de0b0) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE0B8u;
label_2de0b8:
    // 0x2de0b8: 0x10a20204  beq         $a1, $v0, . + 4 + (0x204 << 2)
    ctx->pc = 0x2DE0B8u;
    {
        const bool branch_taken_0x2de0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0B8u;
        // 0x2de0bc: 0x24020245  addiu       $v0, $zero, 0x245 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0b8) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE0C0u;
    // 0x2de0c0: 0x14a2022d  bne         $a1, $v0, . + 4 + (0x22D << 2)
    ctx->pc = 0x2DE0C0u;
    {
        const bool branch_taken_0x2de0c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0C0u;
        // 0x2de0c4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0c0) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE0C8u;
    // 0x2de0c8: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x2DE0C8u;
    {
        const bool branch_taken_0x2de0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0C8u;
        // 0x2de0cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0c8) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE0D0u;
label_2de0d0:
    // 0x2de0d0: 0x24a3fdff  addiu       $v1, $a1, -0x201
    ctx->pc = 0x2de0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966783));
    // 0x2de0d4: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x2de0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2de0d8: 0x10400226  beqz        $v0, . + 4 + (0x226 << 2)
    ctx->pc = 0x2DE0D8u;
    {
        const bool branch_taken_0x2de0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0D8u;
        // 0x2de0dc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0d8) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE0E0u;
    // 0x2de0e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2de0e4: 0x2442da90  addiu       $v0, $v0, -0x2570
    ctx->pc = 0x2de0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957712));
    // 0x2de0e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de0ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de0f0: 0x800008  jr          $a0
    ctx->pc = 0x2DE0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE0F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE0F8u;
label_2de0f8:
    // 0x2de0f8: 0x24a3fdff  addiu       $v1, $a1, -0x201
    ctx->pc = 0x2de0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966783));
    // 0x2de0fc: 0x2c620025  sltiu       $v0, $v1, 0x25
    ctx->pc = 0x2de0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x2de100: 0x1040021c  beqz        $v0, . + 4 + (0x21C << 2)
    ctx->pc = 0x2DE100u;
    {
        const bool branch_taken_0x2de100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE100u;
        // 0x2de104: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de100) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE108u;
    // 0x2de108: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2de10c: 0x2442db00  addiu       $v0, $v0, -0x2500
    ctx->pc = 0x2de10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x2de110: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de114: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de118: 0x800008  jr          $a0
    ctx->pc = 0x2DE118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE118u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE120u;
label_2de120:
    // 0x2de120: 0x24020216  addiu       $v0, $zero, 0x216
    ctx->pc = 0x2de120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    // 0x2de124: 0x10a2020d  beq         $a1, $v0, . + 4 + (0x20D << 2)
    ctx->pc = 0x2DE124u;
    {
        const bool branch_taken_0x2de124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE124u;
        // 0x2de128: 0x28a20217  slti        $v0, $a1, 0x217 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)535) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de124) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE12Cu;
    // 0x2de12c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE12Cu;
    {
        const bool branch_taken_0x2de12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE12Cu;
        // 0x2de130: 0x24020203  addiu       $v0, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de12c) {
            ctx->pc = 0x2DE14Cu;
            goto label_2de14c;
        }
    }
    ctx->pc = 0x2DE134u;
    // 0x2de134: 0x10a201e7  beq         $a1, $v0, . + 4 + (0x1E7 << 2)
    ctx->pc = 0x2DE134u;
    {
        const bool branch_taken_0x2de134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE134u;
        // 0x2de138: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de134) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE13Cu;
    // 0x2de13c: 0x10a20209  beq         $a1, $v0, . + 4 + (0x209 << 2)
    ctx->pc = 0x2DE13Cu;
    {
        const bool branch_taken_0x2de13c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE13Cu;
        // 0x2de140: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de13c) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE144u;
    // 0x2de144: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x2DE144u;
    {
        const bool branch_taken_0x2de144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de144) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE14Cu;
label_2de14c:
    // 0x2de14c: 0x2402021b  addiu       $v0, $zero, 0x21B
    ctx->pc = 0x2de14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
    // 0x2de150: 0x10a201de  beq         $a1, $v0, . + 4 + (0x1DE << 2)
    ctx->pc = 0x2DE150u;
    {
        const bool branch_taken_0x2de150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE150u;
        // 0x2de154: 0x38a20245  xori        $v0, $a1, 0x245 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)581);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de150) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE158u;
    // 0x2de158: 0x10000206  b           . + 4 + (0x206 << 2)
    ctx->pc = 0x2DE158u;
    {
        const bool branch_taken_0x2de158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE158u;
        // 0x2de15c: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de158) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE160u;
label_2de160:
    // 0x2de160: 0x24020241  addiu       $v0, $zero, 0x241
    ctx->pc = 0x2de160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x2de164: 0x10a201db  beq         $a1, $v0, . + 4 + (0x1DB << 2)
    ctx->pc = 0x2DE164u;
    {
        const bool branch_taken_0x2de164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE164u;
        // 0x2de168: 0x28a20242  slti        $v0, $a1, 0x242 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)578) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de164) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE16Cu;
    // 0x2de16c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DE16Cu;
    {
        const bool branch_taken_0x2de16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE16Cu;
        // 0x2de170: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de16c) {
            ctx->pc = 0x2DE190u;
            goto label_2de190;
        }
    }
    ctx->pc = 0x2DE174u;
    // 0x2de174: 0x50a201ff  beql        $a1, $v0, . + 4 + (0x1FF << 2)
    ctx->pc = 0x2DE174u;
    {
        const bool branch_taken_0x2de174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2de174) {
            ctx->pc = 0x2DE178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE174u;
            // 0x2de178: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE17Cu;
    // 0x2de17c: 0x2402021a  addiu       $v0, $zero, 0x21A
    ctx->pc = 0x2de17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
label_2de180:
    // 0x2de180: 0x10a201f4  beq         $a1, $v0, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x2DE180u;
    {
        const bool branch_taken_0x2de180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE180u;
        // 0x2de184: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de180) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE188u;
    // 0x2de188: 0x100001fb  b           . + 4 + (0x1FB << 2)
    ctx->pc = 0x2DE188u;
    {
        const bool branch_taken_0x2de188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de188) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE190u;
label_2de190:
    // 0x2de190: 0x24020246  addiu       $v0, $zero, 0x246
    ctx->pc = 0x2de190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
    // 0x2de194: 0x10a201f3  beq         $a1, $v0, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x2DE194u;
    {
        const bool branch_taken_0x2de194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE194u;
        // 0x2de198: 0x24020249  addiu       $v0, $zero, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de194) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE19Cu;
label_2de19c:
    // 0x2de19c: 0x14a201f6  bne         $a1, $v0, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x2DE19Cu;
    {
        const bool branch_taken_0x2de19c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE19Cu;
        // 0x2de1a0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de19c) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE1A4u;
    // 0x2de1a4: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x2DE1A4u;
    {
        const bool branch_taken_0x2de1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1A4u;
        // 0x2de1a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1a4) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE1ACu;
label_2de1ac:
    // 0x2de1ac: 0x2402021d  addiu       $v0, $zero, 0x21D
    ctx->pc = 0x2de1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
    // 0x2de1b0: 0x10a201ec  beq         $a1, $v0, . + 4 + (0x1EC << 2)
    ctx->pc = 0x2DE1B0u;
    {
        const bool branch_taken_0x2de1b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1B0u;
        // 0x2de1b4: 0x28a2021e  slti        $v0, $a1, 0x21E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)542) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1b0) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE1B8u;
    // 0x2de1b8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2DE1B8u;
    {
        const bool branch_taken_0x2de1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1B8u;
        // 0x2de1bc: 0x2402021a  addiu       $v0, $zero, 0x21A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1b8) {
            ctx->pc = 0x2DE180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de180;
        }
    }
    ctx->pc = 0x2DE1C0u;
    // 0x2de1c0: 0x24020248  addiu       $v0, $zero, 0x248
    ctx->pc = 0x2de1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
    // 0x2de1c4: 0x10a201e5  beq         $a1, $v0, . + 4 + (0x1E5 << 2)
    ctx->pc = 0x2DE1C4u;
    {
        const bool branch_taken_0x2de1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1C4u;
        // 0x2de1c8: 0x24020249  addiu       $v0, $zero, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1c4) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE1CCu;
    // 0x2de1cc: 0x14a201ea  bne         $a1, $v0, . + 4 + (0x1EA << 2)
    ctx->pc = 0x2DE1CCu;
    {
        const bool branch_taken_0x2de1cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1CCu;
        // 0x2de1d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1cc) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE1D4u;
    // 0x2de1d4: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x2DE1D4u;
    {
        const bool branch_taken_0x2de1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1D4u;
        // 0x2de1d8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1d4) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE1DCu;
label_2de1dc:
    // 0x2de1dc: 0x24020203  addiu       $v0, $zero, 0x203
    ctx->pc = 0x2de1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x2de1e0: 0x10a201e0  beq         $a1, $v0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x2DE1E0u;
    {
        const bool branch_taken_0x2de1e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1E0u;
        // 0x2de1e4: 0x28a20204  slti        $v0, $a1, 0x204 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)516) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1e0) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE1E8u;
    // 0x2de1e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE1E8u;
    {
        const bool branch_taken_0x2de1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1E8u;
        // 0x2de1ec: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1e8) {
            ctx->pc = 0x2DE200u;
            goto label_2de200;
        }
    }
    ctx->pc = 0x2DE1F0u;
    // 0x2de1f0: 0x10a201da  beq         $a1, $v0, . + 4 + (0x1DA << 2)
    ctx->pc = 0x2DE1F0u;
    {
        const bool branch_taken_0x2de1f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1F0u;
        // 0x2de1f4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1f0) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE1F8u;
    // 0x2de1f8: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x2DE1F8u;
    {
        const bool branch_taken_0x2de1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de1f8) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE200u;
label_2de200:
    // 0x2de200: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x2DE200u;
    {
        const bool branch_taken_0x2de200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE200u;
        // 0x2de204: 0x38a20211  xori        $v0, $a1, 0x211 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)529);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de200) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE208u;
label_2de208:
    // 0x2de208: 0x24020213  addiu       $v0, $zero, 0x213
    ctx->pc = 0x2de208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
    // 0x2de20c: 0x10a201d5  beq         $a1, $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x2DE20Cu;
    {
        const bool branch_taken_0x2de20c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE20Cu;
        // 0x2de210: 0x28a20214  slti        $v0, $a1, 0x214 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)532) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de20c) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE214u;
    // 0x2de214: 0x104001cf  beqz        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x2DE214u;
    {
        const bool branch_taken_0x2de214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE214u;
        // 0x2de218: 0x2402020e  addiu       $v0, $zero, 0x20E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de214) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE21Cu;
    // 0x2de21c: 0x14a201d5  bne         $a1, $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x2DE21Cu;
    {
        const bool branch_taken_0x2de21c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE21Cu;
        // 0x2de220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de21c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE224u;
    // 0x2de224: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x2DE224u;
    {
        const bool branch_taken_0x2de224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE224u;
        // 0x2de228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de224) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE22Cu;
label_2de22c:
    // 0x2de22c: 0x2402020c  addiu       $v0, $zero, 0x20C
    ctx->pc = 0x2de22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
    // 0x2de230: 0x10a201ca  beq         $a1, $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x2DE230u;
    {
        const bool branch_taken_0x2de230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE230u;
        // 0x2de234: 0x28a2020d  slti        $v0, $a1, 0x20D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)525) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de230) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE238u;
    // 0x2de238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE238u;
    {
        const bool branch_taken_0x2de238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE238u;
        // 0x2de23c: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de238) {
            ctx->pc = 0x2DE250u;
            goto label_2de250;
        }
    }
    ctx->pc = 0x2DE240u;
    // 0x2de240: 0x10a201c4  beq         $a1, $v0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x2DE240u;
    {
        const bool branch_taken_0x2de240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE240u;
        // 0x2de244: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de240) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE248u;
    // 0x2de248: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x2DE248u;
    {
        const bool branch_taken_0x2de248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de248) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE250u;
label_2de250:
    // 0x2de250: 0x2402020d  addiu       $v0, $zero, 0x20D
    ctx->pc = 0x2de250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
    // 0x2de254: 0x10a201c3  beq         $a1, $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x2DE254u;
    {
        const bool branch_taken_0x2de254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE254u;
        // 0x2de258: 0x24020247  addiu       $v0, $zero, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de254) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE25Cu;
    // 0x2de25c: 0x14a201c6  bne         $a1, $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x2DE25Cu;
    {
        const bool branch_taken_0x2de25c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE25Cu;
        // 0x2de260: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de25c) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE264u;
    // 0x2de264: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x2DE264u;
    {
        const bool branch_taken_0x2de264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE264u;
        // 0x2de268: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de264) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE26Cu;
label_2de26c:
    // 0x2de26c: 0x24a3fe00  addiu       $v1, $a1, -0x200
    ctx->pc = 0x2de26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2de270: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x2de270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x2de274: 0x104001bf  beqz        $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x2DE274u;
    {
        const bool branch_taken_0x2de274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE274u;
        // 0x2de278: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de274) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE27Cu;
    // 0x2de27c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2de280: 0x2442dba0  addiu       $v0, $v0, -0x2460
    ctx->pc = 0x2de280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957984));
    // 0x2de284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de288: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de28c: 0x800008  jr          $a0
    ctx->pc = 0x2DE28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE28Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE294u;
label_2de294:
    // 0x2de294: 0x2402021a  addiu       $v0, $zero, 0x21A
    ctx->pc = 0x2de294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
    // 0x2de298: 0x10a2018e  beq         $a1, $v0, . + 4 + (0x18E << 2)
    ctx->pc = 0x2DE298u;
    {
        const bool branch_taken_0x2de298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE298u;
        // 0x2de29c: 0x28a2021b  slti        $v0, $a1, 0x21B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)539) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de298) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE2A0u;
    // 0x2de2a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE2A0u;
    {
        const bool branch_taken_0x2de2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2A0u;
        // 0x2de2a4: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2a0) {
            ctx->pc = 0x2DE2C0u;
            goto label_2de2c0;
        }
    }
    ctx->pc = 0x2DE2A8u;
    // 0x2de2a8: 0x10a20188  beq         $a1, $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x2DE2A8u;
    {
        const bool branch_taken_0x2de2a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2A8u;
        // 0x2de2ac: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2a8) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE2B0u;
    // 0x2de2b0: 0x10a201aa  beq         $a1, $v0, . + 4 + (0x1AA << 2)
    ctx->pc = 0x2DE2B0u;
    {
        const bool branch_taken_0x2de2b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2B0u;
        // 0x2de2b4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2b0) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE2B8u;
    // 0x2de2b8: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x2DE2B8u;
    {
        const bool branch_taken_0x2de2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de2b8) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE2C0u;
label_2de2c0:
    // 0x2de2c0: 0x2402021d  addiu       $v0, $zero, 0x21D
    ctx->pc = 0x2de2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
    // 0x2de2c4: 0x10a201a3  beq         $a1, $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x2DE2C4u;
    {
        const bool branch_taken_0x2de2c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2C4u;
        // 0x2de2c8: 0x24020249  addiu       $v0, $zero, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2c4) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE2CCu;
    // 0x2de2cc: 0x14a201aa  bne         $a1, $v0, . + 4 + (0x1AA << 2)
    ctx->pc = 0x2DE2CCu;
    {
        const bool branch_taken_0x2de2cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2CCu;
        // 0x2de2d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2cc) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE2D4u;
    // 0x2de2d4: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x2DE2D4u;
    {
        const bool branch_taken_0x2de2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2D4u;
        // 0x2de2d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2d4) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE2DCu;
label_2de2dc:
    // 0x2de2dc: 0x24a3fdfe  addiu       $v1, $a1, -0x202
    ctx->pc = 0x2de2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966782));
    // 0x2de2e0: 0x2c620016  sltiu       $v0, $v1, 0x16
    ctx->pc = 0x2de2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x2de2e4: 0x1040019b  beqz        $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x2DE2E4u;
    {
        const bool branch_taken_0x2de2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2E4u;
        // 0x2de2e8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de2e4) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE2ECu;
    // 0x2de2ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2de2f0: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x2de2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x2de2f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de2f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de2fc: 0x800008  jr          $a0
    ctx->pc = 0x2DE2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE2FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE304u;
label_2de304:
    // 0x2de304: 0x2402023a  addiu       $v0, $zero, 0x23A
    ctx->pc = 0x2de304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x2de308: 0x10a20194  beq         $a1, $v0, . + 4 + (0x194 << 2)
    ctx->pc = 0x2DE308u;
    {
        const bool branch_taken_0x2de308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE308u;
        // 0x2de30c: 0x28a2023b  slti        $v0, $a1, 0x23B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)571) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de308) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE310u;
    // 0x2de310: 0x14400198  bnez        $v0, . + 4 + (0x198 << 2)
    ctx->pc = 0x2DE310u;
    {
        const bool branch_taken_0x2de310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE310u;
        // 0x2de314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de310) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE318u;
    // 0x2de318: 0x24020244  addiu       $v0, $zero, 0x244
    ctx->pc = 0x2de318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    // 0x2de31c: 0x14a20196  bne         $a1, $v0, . + 4 + (0x196 << 2)
    ctx->pc = 0x2DE31Cu;
    {
        const bool branch_taken_0x2de31c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE31Cu;
        // 0x2de320: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de31c) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE324u;
    // 0x2de324: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x2DE324u;
    {
        const bool branch_taken_0x2de324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE324u;
        // 0x2de328: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de324) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE32Cu;
label_2de32c:
    // 0x2de32c: 0x2402021b  addiu       $v0, $zero, 0x21B
    ctx->pc = 0x2de32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
    // 0x2de330: 0x10a20166  beq         $a1, $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x2DE330u;
    {
        const bool branch_taken_0x2de330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE330u;
        // 0x2de334: 0x28a2021c  slti        $v0, $a1, 0x21C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)540) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de330) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE338u;
    // 0x2de338: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE338u;
    {
        const bool branch_taken_0x2de338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE338u;
        // 0x2de33c: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de338) {
            ctx->pc = 0x2DE358u;
            goto label_2de358;
        }
    }
    ctx->pc = 0x2DE340u;
    // 0x2de340: 0x10a20186  beq         $a1, $v0, . + 4 + (0x186 << 2)
    ctx->pc = 0x2DE340u;
    {
        const bool branch_taken_0x2de340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE340u;
        // 0x2de344: 0x24020216  addiu       $v0, $zero, 0x216 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de340) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE348u;
    // 0x2de348: 0x10a20162  beq         $a1, $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x2DE348u;
    {
        const bool branch_taken_0x2de348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE348u;
        // 0x2de34c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de348) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE350u;
    // 0x2de350: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x2DE350u;
    {
        const bool branch_taken_0x2de350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de350) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE358u;
label_2de358:
    // 0x2de358: 0x24020242  addiu       $v0, $zero, 0x242
    ctx->pc = 0x2de358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    // 0x2de35c: 0x10a2017d  beq         $a1, $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x2DE35Cu;
    {
        const bool branch_taken_0x2de35c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE35Cu;
        // 0x2de360: 0x24020246  addiu       $v0, $zero, 0x246 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de35c) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE364u;
label_2de364:
    // 0x2de364: 0x14a20184  bne         $a1, $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x2DE364u;
    {
        const bool branch_taken_0x2de364 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE364u;
        // 0x2de368: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de364) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE36Cu;
    // 0x2de36c: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x2DE36Cu;
    {
        const bool branch_taken_0x2de36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE36Cu;
        // 0x2de370: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de36c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE374u;
label_2de374:
    // 0x2de374: 0x24020216  addiu       $v0, $zero, 0x216
    ctx->pc = 0x2de374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    // 0x2de378: 0x10a20154  beq         $a1, $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x2DE378u;
    {
        const bool branch_taken_0x2de378 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE378u;
        // 0x2de37c: 0x28a20217  slti        $v0, $a1, 0x217 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)535) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de378) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE380u;
    // 0x2de380: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE380u;
    {
        const bool branch_taken_0x2de380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE380u;
        // 0x2de384: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de380) {
            ctx->pc = 0x2DE398u;
            goto label_2de398;
        }
    }
    ctx->pc = 0x2DE388u;
    // 0x2de388: 0x10a20172  beq         $a1, $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x2DE388u;
    {
        const bool branch_taken_0x2de388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE388u;
        // 0x2de38c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de388) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE390u;
    // 0x2de390: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x2DE390u;
    {
        const bool branch_taken_0x2de390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de390) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE398u;
label_2de398:
    // 0x2de398: 0x2402021b  addiu       $v0, $zero, 0x21B
    ctx->pc = 0x2de398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
    // 0x2de39c: 0x10a20171  beq         $a1, $v0, . + 4 + (0x171 << 2)
    ctx->pc = 0x2DE39Cu;
    {
        const bool branch_taken_0x2de39c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE39Cu;
        // 0x2de3a0: 0x24020245  addiu       $v0, $zero, 0x245 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de39c) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE3A4u;
    // 0x2de3a4: 0x14a20174  bne         $a1, $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x2DE3A4u;
    {
        const bool branch_taken_0x2de3a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3A4u;
        // 0x2de3a8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3a4) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE3ACu;
    // 0x2de3ac: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x2DE3ACu;
    {
        const bool branch_taken_0x2de3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3ACu;
        // 0x2de3b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3ac) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE3B4u;
label_2de3b4:
    // 0x2de3b4: 0x24020203  addiu       $v0, $zero, 0x203
    ctx->pc = 0x2de3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x2de3b8: 0x10a2016a  beq         $a1, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x2DE3B8u;
    {
        const bool branch_taken_0x2de3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3B8u;
        // 0x2de3bc: 0x28a20204  slti        $v0, $a1, 0x204 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)516) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3b8) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE3C0u;
    // 0x2de3c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE3C0u;
    {
        const bool branch_taken_0x2de3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3C0u;
        // 0x2de3c4: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3c0) {
            ctx->pc = 0x2DE3E0u;
            goto label_2de3e0;
        }
    }
    ctx->pc = 0x2DE3C8u;
    // 0x2de3c8: 0x10a20162  beq         $a1, $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x2DE3C8u;
    {
        const bool branch_taken_0x2de3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3C8u;
        // 0x2de3cc: 0x24020202  addiu       $v0, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3c8) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE3D0u;
    // 0x2de3d0: 0x10a20162  beq         $a1, $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x2DE3D0u;
    {
        const bool branch_taken_0x2de3d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3D0u;
        // 0x2de3d4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3d0) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE3D8u;
    // 0x2de3d8: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x2DE3D8u;
    {
        const bool branch_taken_0x2de3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de3d8) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE3E0u;
label_2de3e0:
    // 0x2de3e0: 0x24020216  addiu       $v0, $zero, 0x216
    ctx->pc = 0x2de3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    // 0x2de3e4: 0x10a2013b  beq         $a1, $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x2DE3E4u;
    {
        const bool branch_taken_0x2de3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3E4u;
        // 0x2de3e8: 0x24020248  addiu       $v0, $zero, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3e4) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE3ECu;
    // 0x2de3ec: 0x14a20162  bne         $a1, $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x2DE3ECu;
    {
        const bool branch_taken_0x2de3ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3ECu;
        // 0x2de3f0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3ec) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE3F4u;
    // 0x2de3f4: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x2DE3F4u;
    {
        const bool branch_taken_0x2de3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3F4u;
        // 0x2de3f8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3f4) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE3FCu;
label_2de3fc:
    // 0x2de3fc: 0x24a3fdfd  addiu       $v1, $a1, -0x203
    ctx->pc = 0x2de3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966781));
    // 0x2de400: 0x2c620024  sltiu       $v0, $v1, 0x24
    ctx->pc = 0x2de400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x2de404: 0x1040015b  beqz        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x2DE404u;
    {
        const bool branch_taken_0x2de404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE404u;
        // 0x2de408: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de404) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE40Cu;
    // 0x2de40c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2de410: 0x2442dc70  addiu       $v0, $v0, -0x2390
    ctx->pc = 0x2de410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958192));
    // 0x2de414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de418: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de41c: 0x800008  jr          $a0
    ctx->pc = 0x2DE41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE41Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE424u;
label_2de424:
    // 0x2de424: 0x24020224  addiu       $v0, $zero, 0x224
    ctx->pc = 0x2de424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
    // 0x2de428: 0x10a20128  beq         $a1, $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x2DE428u;
    {
        const bool branch_taken_0x2de428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE428u;
        // 0x2de42c: 0x28a20225  slti        $v0, $a1, 0x225 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)549) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de428) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE430u;
    // 0x2de430: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE430u;
    {
        const bool branch_taken_0x2de430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE430u;
        // 0x2de434: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de430) {
            ctx->pc = 0x2DE450u;
            goto label_2de450;
        }
    }
    ctx->pc = 0x2DE438u;
    // 0x2de438: 0x10a2014a  beq         $a1, $v0, . + 4 + (0x14A << 2)
    ctx->pc = 0x2DE438u;
    {
        const bool branch_taken_0x2de438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE438u;
        // 0x2de43c: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de438) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE440u;
    // 0x2de440: 0x10a20124  beq         $a1, $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x2DE440u;
    {
        const bool branch_taken_0x2de440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE440u;
        // 0x2de444: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de440) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE448u;
    // 0x2de448: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x2DE448u;
    {
        const bool branch_taken_0x2de448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de448) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE450u;
label_2de450:
    // 0x2de450: 0x24020225  addiu       $v0, $zero, 0x225
    ctx->pc = 0x2de450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    // 0x2de454: 0x10a20141  beq         $a1, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x2DE454u;
    {
        const bool branch_taken_0x2de454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE454u;
        // 0x2de458: 0x38a2024f  xori        $v0, $a1, 0x24F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)591);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de454) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE45Cu;
    // 0x2de45c: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x2DE45Cu;
    {
        const bool branch_taken_0x2de45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE45Cu;
        // 0x2de460: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de45c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE464u;
label_2de464:
    // 0x2de464: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x2DE464u;
    {
        const bool branch_taken_0x2de464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE464u;
        // 0x2de468: 0x38a2021f  xori        $v0, $a1, 0x21F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)543);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de464) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE46Cu;
label_2de46c:
    // 0x2de46c: 0x24020221  addiu       $v0, $zero, 0x221
    ctx->pc = 0x2de46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    // 0x2de470: 0x10a2013a  beq         $a1, $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x2DE470u;
    {
        const bool branch_taken_0x2de470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE470u;
        // 0x2de474: 0x28a20222  slti        $v0, $a1, 0x222 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)546) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de470) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE478u;
    // 0x2de478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE478u;
    {
        const bool branch_taken_0x2de478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE478u;
        // 0x2de47c: 0x24020220  addiu       $v0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de478) {
            ctx->pc = 0x2DE490u;
            goto label_2de490;
        }
    }
    ctx->pc = 0x2DE480u;
    // 0x2de480: 0x10a20134  beq         $a1, $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x2DE480u;
    {
        const bool branch_taken_0x2de480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE480u;
        // 0x2de484: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de480) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE488u;
    // 0x2de488: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x2DE488u;
    {
        const bool branch_taken_0x2de488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de488) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE490u;
label_2de490:
    // 0x2de490: 0x24020222  addiu       $v0, $zero, 0x222
    ctx->pc = 0x2de490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x2de494: 0x14a20138  bne         $a1, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x2DE494u;
    {
        const bool branch_taken_0x2de494 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE494u;
        // 0x2de498: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de494) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE49Cu;
    // 0x2de49c: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x2DE49Cu;
    {
        const bool branch_taken_0x2de49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE49Cu;
        // 0x2de4a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de49c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE4A4u;
label_2de4a4:
    // 0x2de4a4: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2DE4A4u;
    {
        const bool branch_taken_0x2de4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4A4u;
        // 0x2de4a8: 0x38a20223  xori        $v0, $a1, 0x223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)547);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4a4) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE4ACu;
label_2de4ac:
    // 0x2de4ac: 0x24020210  addiu       $v0, $zero, 0x210
    ctx->pc = 0x2de4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x2de4b0: 0x10a2012a  beq         $a1, $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x2DE4B0u;
    {
        const bool branch_taken_0x2de4b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4B0u;
        // 0x2de4b4: 0x28a20211  slti        $v0, $a1, 0x211 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)529) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4b0) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE4B8u;
    // 0x2de4b8: 0x1440fef9  bnez        $v0, . + 4 + (-0x107 << 2)
    ctx->pc = 0x2DE4B8u;
    {
        const bool branch_taken_0x2de4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4B8u;
        // 0x2de4bc: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4b8) {
            ctx->pc = 0x2DE0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de0a0;
        }
    }
    ctx->pc = 0x2DE4C0u;
    // 0x2de4c0: 0x1000fefd  b           . + 4 + (-0x103 << 2)
    ctx->pc = 0x2DE4C0u;
    {
        const bool branch_taken_0x2de4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4C0u;
        // 0x2de4c4: 0x2402021e  addiu       $v0, $zero, 0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4c0) {
            ctx->pc = 0x2DE0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de0b8;
        }
    }
    ctx->pc = 0x2DE4C8u;
label_2de4c8:
    // 0x2de4c8: 0x24a3fdff  addiu       $v1, $a1, -0x201
    ctx->pc = 0x2de4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966783));
    // 0x2de4cc: 0x2c620025  sltiu       $v0, $v1, 0x25
    ctx->pc = 0x2de4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x2de4d0: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x2DE4D0u;
    {
        const bool branch_taken_0x2de4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4D0u;
        // 0x2de4d4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4d0) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE4D8u;
    // 0x2de4d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2de4dc: 0x2442dd00  addiu       $v0, $v0, -0x2300
    ctx->pc = 0x2de4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958336));
    // 0x2de4e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de4e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de4e8: 0x800008  jr          $a0
    ctx->pc = 0x2DE4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE4E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE4F0u;
label_2de4f0:
    // 0x2de4f0: 0x2402023a  addiu       $v0, $zero, 0x23A
    ctx->pc = 0x2de4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x2de4f4: 0x10a20117  beq         $a1, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2DE4F4u;
    {
        const bool branch_taken_0x2de4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4F4u;
        // 0x2de4f8: 0x28a2023b  slti        $v0, $a1, 0x23B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)571) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4f4) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE4FCu;
    // 0x2de4fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE4FCu;
    {
        const bool branch_taken_0x2de4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4FCu;
        // 0x2de500: 0x24020204  addiu       $v0, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4fc) {
            ctx->pc = 0x2DE51Cu;
            goto label_2de51c;
        }
    }
    ctx->pc = 0x2DE504u;
    // 0x2de504: 0x10a200f1  beq         $a1, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2DE504u;
    {
        const bool branch_taken_0x2de504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE504u;
        // 0x2de508: 0x24020225  addiu       $v0, $zero, 0x225 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de504) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE50Cu;
    // 0x2de50c: 0x10a20115  beq         $a1, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x2DE50Cu;
    {
        const bool branch_taken_0x2de50c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE50Cu;
        // 0x2de510: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de50c) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE514u;
    // 0x2de514: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE514u;
        // 0x2de518: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE51Cu;
label_2de51c:
    // 0x2de51c: 0x24020242  addiu       $v0, $zero, 0x242
    ctx->pc = 0x2de51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    // 0x2de520: 0x10a2010e  beq         $a1, $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x2DE520u;
    {
        const bool branch_taken_0x2de520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE520u;
        // 0x2de524: 0x24020247  addiu       $v0, $zero, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de520) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE528u;
    // 0x2de528: 0x14a20112  bne         $a1, $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x2DE528u;
    {
        const bool branch_taken_0x2de528 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE528u;
        // 0x2de52c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de528) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE530u;
    // 0x2de530: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x2DE530u;
    {
        const bool branch_taken_0x2de530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE530u;
        // 0x2de534: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de530) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE538u;
label_2de538:
    // 0x2de538: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x2de538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x2de53c: 0x10a20105  beq         $a1, $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x2DE53Cu;
    {
        const bool branch_taken_0x2de53c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE53Cu;
        // 0x2de540: 0x28a20241  slti        $v0, $a1, 0x241 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)577) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de53c) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE544u;
    // 0x2de544: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE544u;
    {
        const bool branch_taken_0x2de544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE544u;
        // 0x2de548: 0x2402021e  addiu       $v0, $zero, 0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de544) {
            ctx->pc = 0x2DE55Cu;
            goto label_2de55c;
        }
    }
    ctx->pc = 0x2DE54Cu;
    // 0x2de54c: 0x10a20105  beq         $a1, $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x2DE54Cu;
    {
        const bool branch_taken_0x2de54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE54Cu;
        // 0x2de550: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de54c) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE554u;
    // 0x2de554: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x2DE554u;
    {
        const bool branch_taken_0x2de554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de554) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE55Cu;
label_2de55c:
    // 0x2de55c: 0x24020245  addiu       $v0, $zero, 0x245
    ctx->pc = 0x2de55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
    // 0x2de560: 0x10a200da  beq         $a1, $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x2DE560u;
    {
        const bool branch_taken_0x2de560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE560u;
        // 0x2de564: 0x24020249  addiu       $v0, $zero, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de560) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE568u;
    // 0x2de568: 0x1000ff0c  b           . + 4 + (-0xF4 << 2)
    ctx->pc = 0x2DE568u;
    {
        const bool branch_taken_0x2de568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de568) {
            ctx->pc = 0x2DE19Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de19c;
        }
    }
    ctx->pc = 0x2DE570u;
label_2de570:
    // 0x2de570: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x2de570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x2de574: 0x10a200fb  beq         $a1, $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x2DE574u;
    {
        const bool branch_taken_0x2de574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE574u;
        // 0x2de578: 0x28a20205  slti        $v0, $a1, 0x205 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)517) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de574) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE57Cu;
    // 0x2de57c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE57Cu;
    {
        const bool branch_taken_0x2de57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE57Cu;
        // 0x2de580: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de57c) {
            ctx->pc = 0x2DE59Cu;
            goto label_2de59c;
        }
    }
    ctx->pc = 0x2DE584u;
    // 0x2de584: 0x10a200f3  beq         $a1, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2DE584u;
    {
        const bool branch_taken_0x2de584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE584u;
        // 0x2de588: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de584) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE58Cu;
    // 0x2de58c: 0x10a200f3  beq         $a1, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2DE58Cu;
    {
        const bool branch_taken_0x2de58c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE58Cu;
        // 0x2de590: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de58c) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE594u;
    // 0x2de594: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2DE594u;
    {
        const bool branch_taken_0x2de594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de594) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE59Cu;
label_2de59c:
    // 0x2de59c: 0x24020225  addiu       $v0, $zero, 0x225
    ctx->pc = 0x2de59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    // 0x2de5a0: 0x10a200ca  beq         $a1, $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x2DE5A0u;
    {
        const bool branch_taken_0x2de5a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5A0u;
        // 0x2de5a4: 0x24020247  addiu       $v0, $zero, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5a0) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE5A8u;
    // 0x2de5a8: 0x14a200f3  bne         $a1, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2DE5A8u;
    {
        const bool branch_taken_0x2de5a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5A8u;
        // 0x2de5ac: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5a8) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE5B0u;
    // 0x2de5b0: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2DE5B0u;
    {
        const bool branch_taken_0x2de5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5B0u;
        // 0x2de5b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5b0) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE5B8u;
label_2de5b8:
    // 0x2de5b8: 0x2402021a  addiu       $v0, $zero, 0x21A
    ctx->pc = 0x2de5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
    // 0x2de5bc: 0x10a200c5  beq         $a1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2DE5BCu;
    {
        const bool branch_taken_0x2de5bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5BCu;
        // 0x2de5c0: 0x28a2021b  slti        $v0, $a1, 0x21B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)539) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5bc) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE5C4u;
    // 0x2de5c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE5C4u;
    {
        const bool branch_taken_0x2de5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5C4u;
        // 0x2de5c8: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5c4) {
            ctx->pc = 0x2DE5E4u;
            goto label_2de5e4;
        }
    }
    ctx->pc = 0x2DE5CCu;
    // 0x2de5cc: 0x10a200e1  beq         $a1, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2DE5CCu;
    {
        const bool branch_taken_0x2de5cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5CCu;
        // 0x2de5d0: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5cc) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE5D4u;
    // 0x2de5d4: 0x10a200e1  beq         $a1, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2DE5D4u;
    {
        const bool branch_taken_0x2de5d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5D4u;
        // 0x2de5d8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5d4) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE5DCu;
    // 0x2de5dc: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x2DE5DCu;
    {
        const bool branch_taken_0x2de5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de5dc) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE5E4u;
label_2de5e4:
    // 0x2de5e4: 0x24020225  addiu       $v0, $zero, 0x225
    ctx->pc = 0x2de5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    // 0x2de5e8: 0x10a200b8  beq         $a1, $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2DE5E8u;
    {
        const bool branch_taken_0x2de5e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5E8u;
        // 0x2de5ec: 0x24020242  addiu       $v0, $zero, 0x242 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5e8) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE5F0u;
    // 0x2de5f0: 0x14a200e1  bne         $a1, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2DE5F0u;
    {
        const bool branch_taken_0x2de5f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5F0u;
        // 0x2de5f4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5f0) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE5F8u;
    // 0x2de5f8: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2DE5F8u;
    {
        const bool branch_taken_0x2de5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5F8u;
        // 0x2de5fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5f8) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE600u;
label_2de600:
    // 0x2de600: 0x2402021a  addiu       $v0, $zero, 0x21A
    ctx->pc = 0x2de600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
    // 0x2de604: 0x10a200b1  beq         $a1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2DE604u;
    {
        const bool branch_taken_0x2de604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE604u;
        // 0x2de608: 0x28a2021b  slti        $v0, $a1, 0x21B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)539) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de604) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE60Cu;
    // 0x2de60c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE60Cu;
    {
        const bool branch_taken_0x2de60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE60Cu;
        // 0x2de610: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de60c) {
            ctx->pc = 0x2DE62Cu;
            goto label_2de62c;
        }
    }
    ctx->pc = 0x2DE614u;
    // 0x2de614: 0x10a200d1  beq         $a1, $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x2DE614u;
    {
        const bool branch_taken_0x2de614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE614u;
        // 0x2de618: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de614) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE61Cu;
    // 0x2de61c: 0x10a200ad  beq         $a1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x2DE61Cu;
    {
        const bool branch_taken_0x2de61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE61Cu;
        // 0x2de620: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de61c) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE624u;
    // 0x2de624: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2DE624u;
    {
        const bool branch_taken_0x2de624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de624) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE62Cu;
label_2de62c:
    // 0x2de62c: 0x24020242  addiu       $v0, $zero, 0x242
    ctx->pc = 0x2de62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    // 0x2de630: 0x10a200cc  beq         $a1, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x2DE630u;
    {
        const bool branch_taken_0x2de630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE630u;
        // 0x2de634: 0x38a20247  xori        $v0, $a1, 0x247 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)583);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de630) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE638u;
    // 0x2de638: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2DE638u;
    {
        const bool branch_taken_0x2de638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE638u;
        // 0x2de63c: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de638) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE640u;
label_2de640:
    // 0x2de640: 0x2402023a  addiu       $v0, $zero, 0x23A
    ctx->pc = 0x2de640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x2de644: 0x10a200c5  beq         $a1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2DE644u;
    {
        const bool branch_taken_0x2de644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE644u;
        // 0x2de648: 0x28a2023b  slti        $v0, $a1, 0x23B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)571) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de644) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE64Cu;
    // 0x2de64c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE64Cu;
    {
        const bool branch_taken_0x2de64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE64Cu;
        // 0x2de650: 0x2402021a  addiu       $v0, $zero, 0x21A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de64c) {
            ctx->pc = 0x2DE66Cu;
            goto label_2de66c;
        }
    }
    ctx->pc = 0x2DE654u;
    // 0x2de654: 0x10a200c3  beq         $a1, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2DE654u;
    {
        const bool branch_taken_0x2de654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE654u;
        // 0x2de658: 0x2402021c  addiu       $v0, $zero, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de654) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE65Cu;
    // 0x2de65c: 0x10a2009b  beq         $a1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2DE65Cu;
    {
        const bool branch_taken_0x2de65c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE65Cu;
        // 0x2de660: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de65c) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE664u;
    // 0x2de664: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x2DE664u;
    {
        const bool branch_taken_0x2de664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de664) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE66Cu;
label_2de66c:
    // 0x2de66c: 0x24020244  addiu       $v0, $zero, 0x244
    ctx->pc = 0x2de66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    // 0x2de670: 0x10a200b8  beq         $a1, $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2DE670u;
    {
        const bool branch_taken_0x2de670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE670u;
        // 0x2de674: 0x2402024f  addiu       $v0, $zero, 0x24F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de670) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE678u;
    // 0x2de678: 0x14a200bf  bne         $a1, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2DE678u;
    {
        const bool branch_taken_0x2de678 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE678u;
        // 0x2de67c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de678) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE680u;
    // 0x2de680: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2DE680u;
    {
        const bool branch_taken_0x2de680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE680u;
        // 0x2de684: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de680) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE688u;
label_2de688:
    // 0x2de688: 0x24020216  addiu       $v0, $zero, 0x216
    ctx->pc = 0x2de688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    // 0x2de68c: 0x10a200b1  beq         $a1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2DE68Cu;
    {
        const bool branch_taken_0x2de68c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE68Cu;
        // 0x2de690: 0x28a20217  slti        $v0, $a1, 0x217 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)535) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de68c) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE694u;
    // 0x2de694: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE694u;
    {
        const bool branch_taken_0x2de694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE694u;
        // 0x2de698: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de694) {
            ctx->pc = 0x2DE6ACu;
            goto label_2de6ac;
        }
    }
    ctx->pc = 0x2DE69Cu;
    // 0x2de69c: 0x10a200af  beq         $a1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2DE69Cu;
    {
        const bool branch_taken_0x2de69c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE69Cu;
        // 0x2de6a0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de69c) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE6A4u;
    // 0x2de6a4: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x2DE6A4u;
    {
        const bool branch_taken_0x2de6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de6a4) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE6ACu;
label_2de6ac:
    // 0x2de6ac: 0x2402021b  addiu       $v0, $zero, 0x21B
    ctx->pc = 0x2de6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
    // 0x2de6b0: 0x10a20086  beq         $a1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2DE6B0u;
    {
        const bool branch_taken_0x2de6b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6B0u;
        // 0x2de6b4: 0x24020246  addiu       $v0, $zero, 0x246 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6b0) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE6B8u;
    // 0x2de6b8: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x2DE6B8u;
    {
        const bool branch_taken_0x2de6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de6b8) {
            ctx->pc = 0x2DE364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de364;
        }
    }
    ctx->pc = 0x2DE6C0u;
label_2de6c0:
    // 0x2de6c0: 0x24020247  addiu       $v0, $zero, 0x247
    ctx->pc = 0x2de6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
    // 0x2de6c4: 0x10a200a3  beq         $a1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2DE6C4u;
    {
        const bool branch_taken_0x2de6c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6C4u;
        // 0x2de6c8: 0x2402024f  addiu       $v0, $zero, 0x24F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6c4) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE6CCu;
label_2de6cc:
    // 0x2de6cc: 0x14a200aa  bne         $a1, $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x2DE6CCu;
    {
        const bool branch_taken_0x2de6cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6CCu;
        // 0x2de6d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6cc) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE6D4u;
    // 0x2de6d4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2DE6D4u;
    {
        const bool branch_taken_0x2de6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6D4u;
        // 0x2de6d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6d4) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE6DCu;
label_2de6dc:
    // 0x2de6dc: 0x24020246  addiu       $v0, $zero, 0x246
    ctx->pc = 0x2de6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
    // 0x2de6e0: 0x10a2007a  beq         $a1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2DE6E0u;
    {
        const bool branch_taken_0x2de6e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6E0u;
        // 0x2de6e4: 0x28a20247  slti        $v0, $a1, 0x247 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)583) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6e0) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE6E8u;
    // 0x2de6e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE6E8u;
    {
        const bool branch_taken_0x2de6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6E8u;
        // 0x2de6ec: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6e8) {
            ctx->pc = 0x2DE708u;
            goto label_2de708;
        }
    }
    ctx->pc = 0x2DE6F0u;
    // 0x2de6f0: 0x10a20098  beq         $a1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2DE6F0u;
    {
        const bool branch_taken_0x2de6f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6F0u;
        // 0x2de6f4: 0x24020240  addiu       $v0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6f0) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE6F8u;
    // 0x2de6f8: 0x10a2009a  beq         $a1, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2DE6F8u;
    {
        const bool branch_taken_0x2de6f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6F8u;
        // 0x2de6fc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6f8) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE700u;
    // 0x2de700: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2DE700u;
    {
        const bool branch_taken_0x2de700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de700) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE708u;
label_2de708:
    // 0x2de708: 0x24020249  addiu       $v0, $zero, 0x249
    ctx->pc = 0x2de708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
    // 0x2de70c: 0x10a20071  beq         $a1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2DE70Cu;
    {
        const bool branch_taken_0x2de70c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE70Cu;
        // 0x2de710: 0x2402024f  addiu       $v0, $zero, 0x24F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de70c) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE714u;
    // 0x2de714: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DE714u;
    {
        const bool branch_taken_0x2de714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de714) {
            ctx->pc = 0x2DE6CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de6cc;
        }
    }
    ctx->pc = 0x2DE71Cu;
label_2de71c:
    // 0x2de71c: 0x2402021e  addiu       $v0, $zero, 0x21E
    ctx->pc = 0x2de71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
    // 0x2de720: 0x10a20090  beq         $a1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2DE720u;
    {
        const bool branch_taken_0x2de720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE720u;
        // 0x2de724: 0x28a2021f  slti        $v0, $a1, 0x21F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)543) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de720) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE728u;
    // 0x2de728: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE728u;
    {
        const bool branch_taken_0x2de728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE728u;
        // 0x2de72c: 0x24020204  addiu       $v0, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de728) {
            ctx->pc = 0x2DE740u;
            goto label_2de740;
        }
    }
    ctx->pc = 0x2DE730u;
    // 0x2de730: 0x10a2008a  beq         $a1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2DE730u;
    {
        const bool branch_taken_0x2de730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE730u;
        // 0x2de734: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de730) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE738u;
    // 0x2de738: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2DE738u;
    {
        const bool branch_taken_0x2de738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de738) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE740u;
label_2de740:
    // 0x2de740: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2DE740u;
    {
        const bool branch_taken_0x2de740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE740u;
        // 0x2de744: 0x38a20252  xori        $v0, $a1, 0x252 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)594);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de740) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE748u;
label_2de748:
    // 0x2de748: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2DE748u;
    {
        const bool branch_taken_0x2de748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE748u;
        // 0x2de74c: 0x38a20256  xori        $v0, $a1, 0x256 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)598);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de748) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE750u;
label_2de750:
    // 0x2de750: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2de750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2de754: 0x10a20081  beq         $a1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2DE754u;
    {
        const bool branch_taken_0x2de754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE754u;
        // 0x2de758: 0x38a20256  xori        $v0, $a1, 0x256 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)598);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de754) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE75Cu;
    // 0x2de75c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2DE75Cu;
    {
        const bool branch_taken_0x2de75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE75Cu;
        // 0x2de760: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de75c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE764u;
label_2de764:
    // 0x2de764: 0x2402025a  addiu       $v0, $zero, 0x25A
    ctx->pc = 0x2de764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
    // 0x2de768: 0x10a2007a  beq         $a1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2DE768u;
    {
        const bool branch_taken_0x2de768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE768u;
        // 0x2de76c: 0x2402025b  addiu       $v0, $zero, 0x25B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de768) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE770u;
    // 0x2de770: 0x14a20081  bne         $a1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2DE770u;
    {
        const bool branch_taken_0x2de770 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE770u;
        // 0x2de774: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de770) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE778u;
    // 0x2de778: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2DE778u;
    {
        const bool branch_taken_0x2de778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE778u;
        // 0x2de77c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de778) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE780u;
label_2de780:
    // 0x2de780: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x2de780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x2de784: 0x10a20075  beq         $a1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2DE784u;
    {
        const bool branch_taken_0x2de784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE784u;
        // 0x2de788: 0x38a20260  xori        $v0, $a1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)608);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de784) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE78Cu;
    // 0x2de78c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2DE78Cu;
    {
        const bool branch_taken_0x2de78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE78Cu;
        // 0x2de790: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de78c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE794u;
label_2de794:
    // 0x2de794: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2DE794u;
    {
        const bool branch_taken_0x2de794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE794u;
        // 0x2de798: 0x38a20264  xori        $v0, $a1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)612);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de794) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE79Cu;
label_2de79c:
    // 0x2de79c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2DE79Cu;
    {
        const bool branch_taken_0x2de79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE79Cu;
        // 0x2de7a0: 0x38a20265  xori        $v0, $a1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)613);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de79c) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE7A4u;
label_2de7a4:
    // 0x2de7a4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2DE7A4u;
    {
        const bool branch_taken_0x2de7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7A4u;
        // 0x2de7a8: 0x38a2026a  xori        $v0, $a1, 0x26A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)618);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7a4) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE7ACu;
label_2de7ac:
    // 0x2de7ac: 0x24020210  addiu       $v0, $zero, 0x210
    ctx->pc = 0x2de7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x2de7b0: 0x10a20048  beq         $a1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2DE7B0u;
    {
        const bool branch_taken_0x2de7b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7B0u;
        // 0x2de7b4: 0x28a20211  slti        $v0, $a1, 0x211 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)529) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7b0) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE7B8u;
    // 0x2de7b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE7B8u;
    {
        const bool branch_taken_0x2de7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7B8u;
        // 0x2de7bc: 0x24020202  addiu       $v0, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7b8) {
            ctx->pc = 0x2DE7D8u;
            goto label_2de7d8;
        }
    }
    ctx->pc = 0x2DE7C0u;
    // 0x2de7c0: 0x10a20042  beq         $a1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2DE7C0u;
    {
        const bool branch_taken_0x2de7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7C0u;
        // 0x2de7c4: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7c0) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE7C8u;
    // 0x2de7c8: 0x10a20066  beq         $a1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2DE7C8u;
    {
        const bool branch_taken_0x2de7c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7C8u;
        // 0x2de7cc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7c8) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE7D0u;
    // 0x2de7d0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2DE7D0u;
    {
        const bool branch_taken_0x2de7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de7d0) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE7D8u;
label_2de7d8:
    // 0x2de7d8: 0x24020270  addiu       $v0, $zero, 0x270
    ctx->pc = 0x2de7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x2de7dc: 0x10a2005d  beq         $a1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2DE7DCu;
    {
        const bool branch_taken_0x2de7dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7DCu;
        // 0x2de7e0: 0x24020274  addiu       $v0, $zero, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7dc) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE7E4u;
    // 0x2de7e4: 0x14a20064  bne         $a1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2DE7E4u;
    {
        const bool branch_taken_0x2de7e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7E4u;
        // 0x2de7e8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7e4) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE7ECu;
    // 0x2de7ec: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2DE7ECu;
    {
        const bool branch_taken_0x2de7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7ECu;
        // 0x2de7f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7ec) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE7F4u;
label_2de7f4:
    // 0x2de7f4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2DE7F4u;
    {
        const bool branch_taken_0x2de7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7F4u;
        // 0x2de7f8: 0x38a20275  xori        $v0, $a1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)629);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7f4) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE7FCu;
label_2de7fc:
    // 0x2de7fc: 0x24020224  addiu       $v0, $zero, 0x224
    ctx->pc = 0x2de7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
    // 0x2de800: 0x10a20056  beq         $a1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2DE800u;
    {
        const bool branch_taken_0x2de800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE800u;
        // 0x2de804: 0x28a20225  slti        $v0, $a1, 0x225 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)549) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de800) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE808u;
    // 0x2de808: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE808u;
    {
        const bool branch_taken_0x2de808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE808u;
        // 0x2de80c: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de808) {
            ctx->pc = 0x2DE828u;
            goto label_2de828;
        }
    }
    ctx->pc = 0x2DE810u;
    // 0x2de810: 0x10a20030  beq         $a1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2DE810u;
    {
        const bool branch_taken_0x2de810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE810u;
        // 0x2de814: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de810) {
            ctx->pc = 0x2DE8D4u;
            goto label_2de8d4;
        }
    }
    ctx->pc = 0x2DE818u;
    // 0x2de818: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DE818u;
    {
        const bool branch_taken_0x2de818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE818u;
        // 0x2de81c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de818) {
            ctx->pc = 0x2DE8CCu;
            goto label_2de8cc;
        }
    }
    ctx->pc = 0x2DE820u;
    // 0x2de820: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2DE820u;
    {
        const bool branch_taken_0x2de820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de820) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE828u;
label_2de828:
    // 0x2de828: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x2de828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x2de82c: 0x10a2004d  beq         $a1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2DE82Cu;
    {
        const bool branch_taken_0x2de82c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE82Cu;
        // 0x2de830: 0x38a20276  xori        $v0, $a1, 0x276 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)630);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de82c) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE834u;
    // 0x2de834: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2DE834u;
    {
        const bool branch_taken_0x2de834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE834u;
        // 0x2de838: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de834) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE83Cu;
label_2de83c:
    // 0x2de83c: 0x2402020f  addiu       $v0, $zero, 0x20F
    ctx->pc = 0x2de83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x2de840: 0x10a20046  beq         $a1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2DE840u;
    {
        const bool branch_taken_0x2de840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE840u;
        // 0x2de844: 0x38a20278  xori        $v0, $a1, 0x278 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)632);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de840) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE848u;
    // 0x2de848: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2DE848u;
    {
        const bool branch_taken_0x2de848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE848u;
        // 0x2de84c: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de848) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE850u;
label_2de850:
    // 0x2de850: 0x2402020f  addiu       $v0, $zero, 0x20F
    ctx->pc = 0x2de850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x2de854: 0x10a20041  beq         $a1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DE854u;
    {
        const bool branch_taken_0x2de854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE854u;
        // 0x2de858: 0x38a20279  xori        $v0, $a1, 0x279 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)633);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de854) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE85Cu;
    // 0x2de85c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2DE85Cu;
    {
        const bool branch_taken_0x2de85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE85Cu;
        // 0x2de860: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de85c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE864u;
label_2de864:
    // 0x2de864: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2DE864u;
    {
        const bool branch_taken_0x2de864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE864u;
        // 0x2de868: 0x38a2027e  xori        $v0, $a1, 0x27E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)638);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de864) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE86Cu;
label_2de86c:
    // 0x2de86c: 0x240202a3  addiu       $v0, $zero, 0x2A3
    ctx->pc = 0x2de86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    // 0x2de870: 0x10a2003a  beq         $a1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2DE870u;
    {
        const bool branch_taken_0x2de870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE870u;
        // 0x2de874: 0x28a202a4  slti        $v0, $a1, 0x2A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)676) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de870) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE878u;
    // 0x2de878: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DE878u;
    {
        const bool branch_taken_0x2de878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE878u;
        // 0x2de87c: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de878) {
            ctx->pc = 0x2DE930u;
            goto label_2de930;
        }
    }
    ctx->pc = 0x2DE880u;
    // 0x2de880: 0x240202a4  addiu       $v0, $zero, 0x2A4
    ctx->pc = 0x2de880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
    // 0x2de884: 0x14a2003c  bne         $a1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2DE884u;
    {
        const bool branch_taken_0x2de884 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE884u;
        // 0x2de888: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de884) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE88Cu;
    // 0x2de88c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2DE88Cu;
    {
        const bool branch_taken_0x2de88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE88Cu;
        // 0x2de890: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de88c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE894u;
label_2de894:
    // 0x2de894: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2DE894u;
    {
        const bool branch_taken_0x2de894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE894u;
        // 0x2de898: 0x38a202a7  xori        $v0, $a1, 0x2A7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)679);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de894) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE89Cu;
label_2de89c:
    // 0x2de89c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2DE89Cu;
    {
        const bool branch_taken_0x2de89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE89Cu;
        // 0x2de8a0: 0x38a202a2  xori        $v0, $a1, 0x2A2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)674);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de89c) {
            ctx->pc = 0x2DE970u;
            goto label_2de970;
        }
    }
    ctx->pc = 0x2DE8A4u;
label_2de8a4:
    // 0x2de8a4: 0x24a3fd5e  addiu       $v1, $a1, -0x2A2
    ctx->pc = 0x2de8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966622));
    // 0x2de8a8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2de8a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2de8ac: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2DE8ACu;
    {
        const bool branch_taken_0x2de8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8ACu;
        // 0x2de8b0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8ac) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE8B4u;
    // 0x2de8b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2de8b8: 0x2442dda0  addiu       $v0, $v0, -0x2260
    ctx->pc = 0x2de8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x2de8bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de8c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de8c4: 0x800008  jr          $a0
    ctx->pc = 0x2DE8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE8CCu: goto label_2de8cc;
            case 0x2DE8D4u: goto label_2de8d4;
            case 0x2DE8DCu: goto label_2de8dc;
            case 0x2DE8E4u: goto label_2de8e4;
            case 0x2DE8ECu: goto label_2de8ec;
            case 0x2DE954u: goto label_2de954;
            case 0x2DE95Cu: goto label_2de95c;
            case 0x2DE964u: goto label_2de964;
            case 0x2DE974u: goto label_2de974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE8C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE8CCu;
label_2de8cc:
    // 0x2de8cc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2DE8CCu;
    {
        const bool branch_taken_0x2de8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8CCu;
        // 0x2de8d0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8cc) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE8D4u;
label_2de8d4:
    // 0x2de8d4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DE8D4u;
    {
        const bool branch_taken_0x2de8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8D4u;
        // 0x2de8d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8d4) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE8DCu;
label_2de8dc:
    // 0x2de8dc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2DE8DCu;
    {
        const bool branch_taken_0x2de8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8DCu;
        // 0x2de8e0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8dc) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE8E4u;
label_2de8e4:
    // 0x2de8e4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2DE8E4u;
    {
        const bool branch_taken_0x2de8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8E4u;
        // 0x2de8e8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8e4) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE8ECu;
label_2de8ec:
    // 0x2de8ec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2DE8ECu;
    {
        const bool branch_taken_0x2de8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8ECu;
        // 0x2de8f0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8ec) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE8F4u;
label_2de8f4:
    // 0x2de8f4: 0x240202a3  addiu       $v0, $zero, 0x2A3
    ctx->pc = 0x2de8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    // 0x2de8f8: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DE8F8u;
    {
        const bool branch_taken_0x2de8f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8F8u;
        // 0x2de8fc: 0x28a202a4  slti        $v0, $a1, 0x2A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)676) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8f8) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE900u;
    // 0x2de900: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DE900u;
    {
        const bool branch_taken_0x2de900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE900u;
        // 0x2de904: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de900) {
            ctx->pc = 0x2DE930u;
            goto label_2de930;
        }
    }
    ctx->pc = 0x2DE908u;
    // 0x2de908: 0x240202a5  addiu       $v0, $zero, 0x2A5
    ctx->pc = 0x2de908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
    // 0x2de90c: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DE90Cu;
    {
        const bool branch_taken_0x2de90c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE90Cu;
        // 0x2de910: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de90c) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE914u;
    // 0x2de914: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DE914u;
    {
        const bool branch_taken_0x2de914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE914u;
        // 0x2de918: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de914) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE91Cu;
label_2de91c:
    // 0x2de91c: 0x240202a3  addiu       $v0, $zero, 0x2A3
    ctx->pc = 0x2de91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    // 0x2de920: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DE920u;
    {
        const bool branch_taken_0x2de920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE920u;
        // 0x2de924: 0x28a202a4  slti        $v0, $a1, 0x2A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)676) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de920) {
            ctx->pc = 0x2DE95Cu;
            goto label_2de95c;
        }
    }
    ctx->pc = 0x2DE928u;
    // 0x2de928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE928u;
    {
        const bool branch_taken_0x2de928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE928u;
        // 0x2de92c: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de928) {
            ctx->pc = 0x2DE940u;
            goto label_2de940;
        }
    }
    ctx->pc = 0x2DE930u;
label_2de930:
    // 0x2de930: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DE930u;
    {
        const bool branch_taken_0x2de930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE930u;
        // 0x2de934: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de930) {
            ctx->pc = 0x2DE954u;
            goto label_2de954;
        }
    }
    ctx->pc = 0x2DE938u;
    // 0x2de938: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DE938u;
    {
        const bool branch_taken_0x2de938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de938) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE940u;
label_2de940:
    // 0x2de940: 0x240202a6  addiu       $v0, $zero, 0x2A6
    ctx->pc = 0x2de940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 678));
    // 0x2de944: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE944u;
    {
        const bool branch_taken_0x2de944 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE944u;
        // 0x2de948: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de944) {
            ctx->pc = 0x2DE964u;
            goto label_2de964;
        }
    }
    ctx->pc = 0x2DE94Cu;
    // 0x2de94c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DE94Cu;
    {
        const bool branch_taken_0x2de94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de94c) {
            ctx->pc = 0x2DE978u;
            goto label_2de978;
        }
    }
    ctx->pc = 0x2DE954u;
label_2de954:
    // 0x2de954: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE954u;
    {
        const bool branch_taken_0x2de954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE954u;
        // 0x2de958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de954) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE95Cu;
label_2de95c:
    // 0x2de95c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE95Cu;
    {
        const bool branch_taken_0x2de95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE95Cu;
        // 0x2de960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de95c) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE964u;
label_2de964:
    // 0x2de964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE964u;
    {
        const bool branch_taken_0x2de964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE964u;
        // 0x2de968: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de964) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE96Cu;
label_2de96c:
    // 0x2de96c: 0x38a202a9  xori        $v0, $a1, 0x2A9
    ctx->pc = 0x2de96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)681);
label_2de970:
    // 0x2de970: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x2de970u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_2de974:
    // 0x2de974: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2de974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2de978:
    // 0x2de978: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE980u;
}
