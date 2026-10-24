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

// Function: MoveEffect
// Address: 0x30f228 - 0x30f2b0
void MoveEffect_0x30f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveEffect_0x30f228");
#endif

    switch (ctx->pc) {
        case 0x30f26cu: goto label_30f26c;
        case 0x30f274u: goto label_30f274;
        default: break;
    }

    ctx->pc = 0x30f228u;

    // 0x30f228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30f228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30f22c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30f230: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30f230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30f234: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30f234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30f238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f23c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x30f23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x30f240: 0x8c647a78  lw          $a0, 0x7A78($v1)
    ctx->pc = 0x30f240u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A78u));
    // 0x30f244: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x30f244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x30f248: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30f248u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x30f24c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30f250: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30f254: 0xac603bb8  sw          $zero, 0x3BB8($v1)
    ctx->pc = 0x30f254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3C3BB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C3BB8u, _value); } while (0);
    // 0x30f258: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x30f258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x30f25c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30F25Cu;
    {
        const bool branch_taken_0x30f25c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F25Cu;
        // 0x30f260: 0xae052d00  sw          $a1, 0x2D00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f25c) {
            ctx->pc = 0x30F284u;
            goto label_30f284;
        }
    }
    ctx->pc = 0x30F264u;
    // 0x30f264: 0xc0c018a  jal         func_300628
    ctx->pc = 0x30F264u;
    SET_GPR_U32(ctx, 31, 0x30F26Cu);
    ctx->pc = 0x300628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300628u, 0x30F264u, 0x30F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F26Cu;
label_30f26c:
    // 0x30f26c: 0xc0bec3a  jal         func_2FB0E8
    ctx->pc = 0x30F26Cu;
    SET_GPR_U32(ctx, 31, 0x30F274u);
    ctx->pc = 0x2FB0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0E8u, 0x30F26Cu, 0x30F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F274u;
label_30f274:
    // 0x30f274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30f274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30f278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f27c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30f280: 0xe4401dc0  swc1        $f0, 0x1DC0($v0)
    ctx->pc = 0x30f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x741DC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x741DC0u, _value); } while (0); }
label_30f284:
    // 0x30f284: 0x8e022d00  lw          $v0, 0x2D00($s0)
    ctx->pc = 0x30f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11520)));
    // 0x30f288: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30f288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30f28c: 0x8c630800  lw          $v1, 0x800($v1)
    ctx->pc = 0x30f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x30f290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f294: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30f294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f298: 0xae022d00  sw          $v0, 0x2D00($s0)
    ctx->pc = 0x30f298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11520), GPR_U32(ctx, 2));
    // 0x30f29c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30f29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x30F2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F2A0u;
        // 0x30f2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F2A8u;
    // 0x30f2a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30f2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30f2ac: 0x0  nop
    ctx->pc = 0x30f2acu;
    // NOP
    ctx->pc = 0x30f2b0u;
}
