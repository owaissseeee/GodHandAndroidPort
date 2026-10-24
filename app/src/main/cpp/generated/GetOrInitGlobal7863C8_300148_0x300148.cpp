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

// Function: GetOrInitGlobal7863C8_300148
// Address: 0x300148 - 0x3002b0
void GetOrInitGlobal7863C8_300148_0x300148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitGlobal7863C8_300148_0x300148");
#endif

    switch (ctx->pc) {
        case 0x300188u: goto label_300188;
        case 0x3001a0u: goto label_3001a0;
        case 0x3001b4u: goto label_3001b4;
        default: break;
    }

    ctx->pc = 0x300148u;

    // 0x300148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x300148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30014c: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x30014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x300150: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x300150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x300154: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x300154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x300158: 0x245163c8  addiu       $s1, $v0, 0x63C8
    ctx->pc = 0x300158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25544));
    // 0x30015c: 0x8c4363c8  lw          $v1, 0x63C8($v0)
    ctx->pc = 0x30015cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7863C8u));
    // 0x300160: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300164: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x300164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x300168: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x300168u;
    {
        const bool branch_taken_0x300168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300168u;
        // 0x30016c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300168) {
            ctx->pc = 0x3001B4u;
            goto label_3001b4;
        }
    }
    ctx->pc = 0x300170u;
    // 0x300170: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x300170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x300174: 0x8c626598  lw          $v0, 0x6598($v1)
    ctx->pc = 0x300174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786598u));
    // 0x300178: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x300178u;
    {
        const bool branch_taken_0x300178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300178u;
        // 0x30017c: 0x24706598  addiu       $s0, $v1, 0x6598 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300178) {
            ctx->pc = 0x3001A0u;
            goto label_3001a0;
        }
    }
    ctx->pc = 0x300180u;
    // 0x300180: 0xc0ad94a  jal         func_2B6528
    ctx->pc = 0x300180u;
    SET_GPR_U32(ctx, 31, 0x300188u);
    ctx->pc = 0x2B6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6528u, 0x300180u, 0x300188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300188u;
label_300188:
    // 0x300188: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x300188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x30018c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x30018cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x300190: 0x24a5fba8  addiu       $a1, $a1, -0x458
    ctx->pc = 0x300190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966184));
    // 0x300194: 0x24c60d58  addiu       $a2, $a2, 0xD58
    ctx->pc = 0x300194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3416));
    // 0x300198: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x300198u;
    SET_GPR_U32(ctx, 31, 0x3001A0u);
    ctx->pc = 0x30019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300198u;
    // 0x30019c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x300198u, 0x3001A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001A0u;
label_3001a0:
    // 0x3001a0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3001a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3001a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3001a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001a8: 0x24a5fbb8  addiu       $a1, $a1, -0x448
    ctx->pc = 0x3001a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966200));
    // 0x3001ac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x3001ACu;
    SET_GPR_U32(ctx, 31, 0x3001B4u);
    ctx->pc = 0x3001B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3001ACu;
    // 0x3001b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x3001ACu, 0x3001B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001B4u;
label_3001b4:
    // 0x3001b4: 0x264263c8  addiu       $v0, $s2, 0x63C8
    ctx->pc = 0x3001b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 25544));
    // 0x3001b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3001b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3001bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3001bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3001c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3001c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3001c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3001c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3001c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3001C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3001CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001C8u;
        // 0x3001cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3001C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3001D0u;
    // 0x3001d0: 0xa0850245  sb          $a1, 0x245($a0)
    ctx->pc = 0x3001d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 581), (uint8_t)GPR_U32(ctx, 5));
    // 0x3001d4: 0x0  nop
    ctx->pc = 0x3001d4u;
    // NOP
    // 0x3001d8: 0xe48c0214  swc1        $f12, 0x214($a0)
    ctx->pc = 0x3001d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 532), bits); }
    // 0x3001dc: 0x0  nop
    ctx->pc = 0x3001dcu;
    // NOP
    // 0x3001e0: 0xe48c0144  swc1        $f12, 0x144($a0)
    ctx->pc = 0x3001e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x3001e4: 0x0  nop
    ctx->pc = 0x3001e4u;
    // NOP
    // 0x3001e8: 0xe48c0148  swc1        $f12, 0x148($a0)
    ctx->pc = 0x3001e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 328), bits); }
    // 0x3001ec: 0x0  nop
    ctx->pc = 0x3001ecu;
    // NOP
    // 0x3001f0: 0xe480012c  swc1        $f0, 0x12C($a0)
    ctx->pc = 0x3001f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 300), bits); }
    // 0x3001f4: 0x0  nop
    ctx->pc = 0x3001f4u;
    // NOP
    // 0x3001f8: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x3001f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x3001fc: 0x0  nop
    ctx->pc = 0x3001fcu;
    // NOP
    // 0x300200: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x300200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x300204: 0x0  nop
    ctx->pc = 0x300204u;
    // NOP
    // 0x300208: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x300208u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x30020c: 0x0  nop
    ctx->pc = 0x30020cu;
    // NOP
    // 0x300210: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x300210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x300214: 0x0  nop
    ctx->pc = 0x300214u;
    // NOP
    // 0x300218: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x300218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x30021c: 0x0  nop
    ctx->pc = 0x30021cu;
    // NOP
    // 0x300220: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x300220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x300224: 0x0  nop
    ctx->pc = 0x300224u;
    // NOP
    // 0x300228: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x300228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x30022c: 0x0  nop
    ctx->pc = 0x30022cu;
    // NOP
    // 0x300230: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x300230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x300234: 0x0  nop
    ctx->pc = 0x300234u;
    // NOP
    // 0x300238: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x300238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x30023c: 0x0  nop
    ctx->pc = 0x30023cu;
    // NOP
    // 0x300240: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x300240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x300244: 0x0  nop
    ctx->pc = 0x300244u;
    // NOP
    // 0x300248: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x300248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x30024c: 0x0  nop
    ctx->pc = 0x30024cu;
    // NOP
    // 0x300250: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x300250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x300254: 0x0  nop
    ctx->pc = 0x300254u;
    // NOP
    // 0x300258: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x300258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30025c: 0x0  nop
    ctx->pc = 0x30025cu;
    // NOP
    // 0x300260: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x300260u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x300264: 0x0  nop
    ctx->pc = 0x300264u;
    // NOP
    // 0x300268: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x300268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30026c: 0x0  nop
    ctx->pc = 0x30026cu;
    // NOP
    // 0x300270: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x300270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x300274: 0x0  nop
    ctx->pc = 0x300274u;
    // NOP
    // 0x300278: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x300278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30027c: 0x0  nop
    ctx->pc = 0x30027cu;
    // NOP
    // 0x300280: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x300280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x300284: 0x0  nop
    ctx->pc = 0x300284u;
    // NOP
    // 0x300288: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x300288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30028c: 0x0  nop
    ctx->pc = 0x30028cu;
    // NOP
    // 0x300290: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x300290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x300294: 0x0  nop
    ctx->pc = 0x300294u;
    // NOP
    // 0x300298: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x300298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30029c: 0x0  nop
    ctx->pc = 0x30029cu;
    // NOP
    // 0x3002a0: 0x0  nop
    ctx->pc = 0x3002a0u;
    // NOP
    // 0x3002a4: 0x0  nop
    ctx->pc = 0x3002a4u;
    // NOP
    // 0x3002a8: 0x0  nop
    ctx->pc = 0x3002a8u;
    // NOP
    // 0x3002ac: 0x0  nop
    ctx->pc = 0x3002acu;
    // NOP
    ctx->pc = 0x3002b0u;
}
