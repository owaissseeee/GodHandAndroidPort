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

// Function: sceGsPutDispEnv
// Address: 0x3968e8 - 0x3969a8
void sceGsPutDispEnv_0x3968e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsPutDispEnv_0x3968e8");
#endif

    switch (ctx->pc) {
        case 0x3968fcu: goto label_3968fc;
        default: break;
    }

    ctx->pc = 0x3968e8u;

    // 0x3968e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3968e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3968ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3968ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3968f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3968f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3968f4: 0xc0e54e2  jal         func_395388
    ctx->pc = 0x3968F4u;
    SET_GPR_U32(ctx, 31, 0x3968FCu);
    ctx->pc = 0x3968F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3968F4u;
    // 0x3968f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395388u, 0x3968F4u, 0x3968FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3968FCu;
label_3968fc:
    // 0x3968fc: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x3968fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x396900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x396900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396904: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x396904u;
    {
        const bool branch_taken_0x396904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x396908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396904u;
        // 0x396908: 0xde040000  ld          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396904) {
            ctx->pc = 0x39694Cu;
            goto label_39694c;
        }
    }
    ctx->pc = 0x39690Cu;
    // 0x39690c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x39690cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x396910: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x396910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x396914: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x396914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x396918: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x396918u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 4));
    // 0x39691c: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x39691cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x396920: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x396920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x396924: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x396924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x396928: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x396928u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x39692c: 0x348400c0  ori         $a0, $a0, 0xC0
    ctx->pc = 0x39692cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)192);
    // 0x396930: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x396930u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 5));
    // 0x396934: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x396934u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x396938: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x396938u;
    runtime->Store64(rdram, ctx, 0x12000080u, GPR_U64(ctx, 2));
    // 0x39693c: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x39693cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x396940: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x396940u;
    runtime->Store64(rdram, ctx, 0x120000C0u, GPR_U64(ctx, 3));
    // 0x396944: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x396944u;
    {
        const bool branch_taken_0x396944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396944u;
        // 0x396948: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396944) {
            ctx->pc = 0x396998u;
            goto label_396998;
        }
    }
    ctx->pc = 0x39694Cu;
label_39694c:
    // 0x39694c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x39694cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x396950: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x396950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x396954: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x396954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x396958: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x396958u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 4));
    // 0x39695c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x39695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x396960: 0x34c60090  ori         $a2, $a2, 0x90
    ctx->pc = 0x396960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)144);
    // 0x396964: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x396964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x396968: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x396968u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39696c: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x39696cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x396970: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x396970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x396974: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x396974u;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x396978: 0x348400e0  ori         $a0, $a0, 0xE0
    ctx->pc = 0x396978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)224);
    // 0x39697c: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x39697cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x396980: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x396980u;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 2));
    // 0x396984: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x396984u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x396988: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x396988u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x39698c: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x39698cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x396990: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x396990u;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 2));
    // 0x396994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_396998:
    // 0x396998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39699c: 0x3e00008  jr          $ra
    ctx->pc = 0x39699Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3969A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39699Cu;
        // 0x3969a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39699Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3969A4u;
    // 0x3969a4: 0x0  nop
    ctx->pc = 0x3969a4u;
    // NOP
    ctx->pc = 0x3969a8u;
}
