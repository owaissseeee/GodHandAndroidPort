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

// Function: sceSifInitCmd
// Address: 0x3b21d0 - 0x3b2450
void sceSifInitCmd_0x3b21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifInitCmd_0x3b21d0");
#endif

    switch (ctx->pc) {
        case 0x3b21f0u: goto label_3b21f0;
        case 0x3b2288u: goto label_3b2288;
        case 0x3b22b8u: goto label_3b22b8;
        case 0x3b2304u: goto label_3b2304;
        case 0x3b230cu: goto label_3b230c;
        case 0x3b234cu: goto label_3b234c;
        case 0x3b2360u: goto label_3b2360;
        case 0x3b2370u: goto label_3b2370;
        case 0x3b237cu: goto label_3b237c;
        case 0x3b23c8u: goto label_3b23c8;
        case 0x3b23d0u: goto label_3b23d0;
        case 0x3b23e4u: goto label_3b23e4;
        case 0x3b23f4u: goto label_3b23f4;
        case 0x3b2404u: goto label_3b2404;
        default: break;
    }

    ctx->pc = 0x3b21d0u;

    // 0x3b21d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b21d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b21d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b21d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b21dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b21dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b21e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b21e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b21e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b21e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b21e8: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B21E8u;
    SET_GPR_U32(ctx, 31, 0x3B21F0u);
    ctx->pc = 0x3B21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21E8u;
    // 0x3b21ec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B21E8u, 0x3B21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21F0u;
label_3b21f0:
    // 0x3b21f0: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x3b21f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x3b21f4: 0x8d42ae50  lw          $v0, -0x51B0($t2)
    ctx->pc = 0x3b21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAE50u));
    // 0x3b21f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B21F8u;
    {
        const bool branch_taken_0x3b21f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B21F8u;
        // 0x3b21fc: 0x3c130078  lui         $s3, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b21f8) {
            ctx->pc = 0x3B2220u;
            goto label_3b2220;
        }
    }
    ctx->pc = 0x3B2200u;
    // 0x3b2200: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b2200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2204: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b2204u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2208: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b2208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b220c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b220cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2210: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2218: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3B2218u;
    ctx->pc = 0x3B221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2218u;
    // 0x3b221c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B2218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2220u;
label_3b2220:
    // 0x3b2220: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b2220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
    // 0x3b2224: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3b2224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3b2228: 0x24a5e4c0  addiu       $a1, $a1, -0x1B40
    ctx->pc = 0x3b2228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960320));
    // 0x3b222c: 0x2666e440  addiu       $a2, $s3, -0x1BC0
    ctx->pc = 0x3b222cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960192));
    // 0x3b2230: 0x3c120078  lui         $s2, 0x78
    ctx->pc = 0x3b2230u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)120 << 16));
    // 0x3b2234: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3b2234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3b2238: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3b2238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3b223c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b223cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2240: 0x3c090078  lui         $t1, 0x78
    ctx->pc = 0x3b2240u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)120 << 16));
    // 0x3b2244: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b2244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b2248: 0x2642e518  addiu       $v0, $s2, -0x1AE8
    ctx->pc = 0x3b2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960408));
    // 0x3b224c: 0xad43ae50  sw          $v1, -0x51B0($t2)
    ctx->pc = 0x3b224cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294946384), GPR_U32(ctx, 3));
    // 0x3b2250: 0x2484e6c0  addiu       $a0, $a0, -0x1940
    ctx->pc = 0x3b2250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960832));
    // 0x3b2254: 0x2528e540  addiu       $t0, $t1, -0x1AC0
    ctx->pc = 0x3b2254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960448));
    // 0x3b2258: 0xae46e518  sw          $a2, -0x1AE8($s2)
    ctx->pc = 0x3b2258u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x77E518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77E518u, _value); } while (0);
    // 0x3b225c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3b225cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b2260: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x3b2260u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x77E534u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77E534u, _value); } while (0);
    // 0x3b2264: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3b2264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2268: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3b2268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x77E51Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77E51Cu, _value); } while (0);
    // 0x3b226c: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x3b226cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x77E528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77E528u, _value); } while (0);
    // 0x3b2270: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x3b2270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x3b2274: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3b2274u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x77E520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77E520u, _value); } while (0);
    // 0x3b2278: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b2278u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x3b227c: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x3b227cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x77E524u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77E524u, _value); } while (0);
    // 0x3b2280: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3b2280u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x77E52Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77E52Cu, _value); } while (0);
    // 0x3b2284: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x3b2284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x77E530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77E530u, _value); } while (0);
label_3b2288:
    // 0x3b2288: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3b2288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3b228c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3b228cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3b2290: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3b2290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x3b2294: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3b2294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b2298: 0x0  nop
    ctx->pc = 0x3b2298u;
    // NOP
    // 0x3b229c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B229Cu;
    {
        const bool branch_taken_0x3b229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b229c) {
            ctx->pc = 0x3B2288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2288;
        }
    }
    ctx->pc = 0x3B22A4u;
    // 0x3b22a4: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b22a8: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x3b22a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3b22ac: 0x2442e6c0  addiu       $v0, $v0, -0x1940
    ctx->pc = 0x3b22acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960832));
    // 0x3b22b0: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x3b22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x3b22b4: 0x0  nop
    ctx->pc = 0x3b22b4u;
    // NOP
label_3b22b8:
    // 0x3b22b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3b22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3b22bc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3b22bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3b22c0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3b22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x3b22c4: 0x0  nop
    ctx->pc = 0x3b22c4u;
    // NOP
    // 0x3b22c8: 0x0  nop
    ctx->pc = 0x3b22c8u;
    // NOP
    // 0x3b22cc: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B22CCu;
    {
        const bool branch_taken_0x3b22cc = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x3b22cc) {
            ctx->pc = 0x3B22B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b22b8;
        }
    }
    ctx->pc = 0x3B22D4u;
    // 0x3b22d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3b22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3b22d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3b22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3b22dc: 0x24422048  addiu       $v0, $v0, 0x2048
    ctx->pc = 0x3b22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8264));
    // 0x3b22e0: 0x2524e540  addiu       $a0, $t1, -0x1AC0
    ctx->pc = 0x3b22e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960448));
    // 0x3b22e4: 0x24632028  addiu       $v1, $v1, 0x2028
    ctx->pc = 0x3b22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8232));
    // 0x3b22e8: 0x2651e518  addiu       $s1, $s2, -0x1AE8
    ctx->pc = 0x3b22e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960408));
    // 0x3b22ec: 0xad22e540  sw          $v0, -0x1AC0($t1)
    ctx->pc = 0x3b22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294960448), GPR_U32(ctx, 2));
    // 0x3b22f0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x3b22f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b22f4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3b22f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3b22f8: 0xac910010  sw          $s1, 0x10($a0)
    ctx->pc = 0x3b22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 17));
    // 0x3b22fc: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B22FCu;
    SET_GPR_U32(ctx, 31, 0x3B2304u);
    ctx->pc = 0x3B2300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B22FCu;
    // 0x3b2300: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B22FCu, 0x3B2304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2304u;
label_3b2304:
    // 0x3b2304: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x3B2304u;
    SET_GPR_U32(ctx, 31, 0x3B230Cu);
    ctx->pc = 0x3B2308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2304u;
    // 0x3b2308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x3B2304u, 0x3B230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B230Cu;
label_3b230c:
    // 0x3b230c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3b230cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3b2310: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x3b2310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x3b2314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b2314u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u));
    // 0x3b2318: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3b2318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3b231c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B231Cu;
    {
        const bool branch_taken_0x3b231c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B231Cu;
        // 0x3b2320: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b231c) {
            ctx->pc = 0x3B2330u;
            goto label_3b2330;
        }
    }
    ctx->pc = 0x3B2324u;
    // 0x3b2324: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3b2324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3b2328: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x3b2328u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 16));
    // 0x3b232c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3b232cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3b2330:
    // 0x3b2330: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x3b2330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x3b2334: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b2334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2338: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3b2338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3b233c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B233Cu;
    {
        const bool branch_taken_0x3b233c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B233Cu;
        // 0x3b2340: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b233c) {
            ctx->pc = 0x3B2350u;
            goto label_3b2350;
        }
    }
    ctx->pc = 0x3B2344u;
    // 0x3b2344: 0xc0ec020  jal         func_3B0080
    ctx->pc = 0x3B2344u;
    SET_GPR_U32(ctx, 31, 0x3B234Cu);
    ctx->pc = 0x3B0080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0080u, 0x3B2344u, 0x3B234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B234Cu;
label_3b234c:
    // 0x3b234c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b234cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_3b2350:
    // 0x3b2350: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3b2350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b2354: 0x24a52708  addiu       $a1, $a1, 0x2708
    ctx->pc = 0x3b2354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9992));
    // 0x3b2358: 0xc0ebe6c  jal         func_3AF9B0
    ctx->pc = 0x3B2358u;
    SET_GPR_U32(ctx, 31, 0x3B2360u);
    ctx->pc = 0x3B235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2358u;
    // 0x3b235c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9B0u, 0x3B2358u, 0x3B2360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2360u;
label_3b2360:
    // 0x3b2360: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b2360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b2364: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3b2364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b2368: 0xc0ec204  jal         func_3B0810
    ctx->pc = 0x3B2368u;
    SET_GPR_U32(ctx, 31, 0x3B2370u);
    ctx->pc = 0x3B236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2368u;
    // 0x3b236c: 0xac62e514  sw          $v0, -0x1AEC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960404), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0810u, 0x3B2368u, 0x3B2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2370u;
label_3b2370:
    // 0x3b2370: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2374: 0xc0ec02c  jal         func_3B00B0
    ctx->pc = 0x3B2374u;
    SET_GPR_U32(ctx, 31, 0x3B237Cu);
    ctx->pc = 0x3B00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00B0u, 0x3B2374u, 0x3B237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B237Cu;
label_3b237c:
    // 0x3b237c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B237Cu;
    {
        const bool branch_taken_0x3b237c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B237Cu;
        // 0x3b2380: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b237c) {
            ctx->pc = 0x3B23C4u;
            goto label_3b23c4;
        }
    }
    ctx->pc = 0x3B2384u;
    // 0x3b2384: 0x2685e500  addiu       $a1, $s4, -0x1B00
    ctx->pc = 0x3b2384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960384));
    // 0x3b2388: 0x2662e440  addiu       $v0, $s3, -0x1BC0
    ctx->pc = 0x3b2388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960192));
    // 0x3b238c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2390: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2394: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b2394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2398: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3b2398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3b239c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b239cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b23a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b23a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b23a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b23a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b23a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b23a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b23ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b23acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b23b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b23b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b23b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b23b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b23b8: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x3b23b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x3b23bc: 0x80ec9a2  j           func_3B2688
    ctx->pc = 0x3B23BCu;
    ctx->pc = 0x3B23C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B23BCu;
    // 0x3b23c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2688u, 0x3B23BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B23C4u;
label_3b23c4:
    // 0x3b23c4: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x3b23c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
label_3b23c8:
    // 0x3b23c8: 0xc0ec02c  jal         func_3B00B0
    ctx->pc = 0x3B23C8u;
    SET_GPR_U32(ctx, 31, 0x3B23D0u);
    ctx->pc = 0x3B23CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B23C8u;
    // 0x3b23cc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00B0u, 0x3B23C8u, 0x3B23D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B23D0u;
label_3b23d0:
    // 0x3b23d0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x3b23d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x3b23d4: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3B23D4u;
    {
        const bool branch_taken_0x3b23d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23D4u;
        // 0x3b23d8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b23d4) {
            ctx->pc = 0x3B23C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b23c8;
        }
    }
    ctx->pc = 0x3B23DCu;
    // 0x3b23dc: 0xc0ec02c  jal         func_3B00B0
    ctx->pc = 0x3B23DCu;
    SET_GPR_U32(ctx, 31, 0x3B23E4u);
    ctx->pc = 0x3B23E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B23DCu;
    // 0x3b23e0: 0x2650e518  addiu       $s0, $s2, -0x1AE8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00B0u, 0x3B23DCu, 0x3B23E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B23E4u;
label_3b23e4:
    // 0x3b23e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3b23e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3b23e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b23e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b23ec: 0xc0ec028  jal         func_3B00A0
    ctx->pc = 0x3B23ECu;
    SET_GPR_U32(ctx, 31, 0x3B23F4u);
    ctx->pc = 0x3B23F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B23ECu;
    // 0x3b23f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00A0u, 0x3B23ECu, 0x3B23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B23F4u;
label_3b23f4:
    // 0x3b23f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b23f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b23f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b23f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b23fc: 0xc0ec028  jal         func_3B00A0
    ctx->pc = 0x3B23FCu;
    SET_GPR_U32(ctx, 31, 0x3B2404u);
    ctx->pc = 0x3B2400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B23FCu;
    // 0x3b2400: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00A0u, 0x3B23FCu, 0x3B2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2404u;
label_3b2404:
    // 0x3b2404: 0x2683e500  addiu       $v1, $s4, -0x1B00
    ctx->pc = 0x3b2404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960384));
    // 0x3b2408: 0x2662e440  addiu       $v0, $s3, -0x1BC0
    ctx->pc = 0x3b2408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960192));
    // 0x3b240c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b240cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2410: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b2410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2414: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b2414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2418: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3b2418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b241c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b241cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b2420: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x3b2420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x3b2424: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b2424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2428: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3b2428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3b242c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b242cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2430: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b2430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2438: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b2438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b243c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3b243cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x3b2440: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b2440u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2444: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3b2444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3b2448: 0x80ec9a2  j           func_3B2688
    ctx->pc = 0x3B2448u;
    ctx->pc = 0x3B244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2448u;
    // 0x3b244c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2688u, 0x3B2448u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2450u;
}
